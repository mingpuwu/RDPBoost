#include "pch.h"
#include "CdxgiCaptureImpl.h"
#include <iostream>

// #pragma comment(lib, "d3d11.lib")
// #pragma comment(lib, "dxgi.lib")

#define SAFE_RELEASE(obj) if(obj) obj->Release();obj = NULL;
CDxgiCaptureImpl::CDxgiCaptureImpl(BOOL bUseShareTexture)
{
    m_bUseShareTexture = bUseShareTexture;
}


CDxgiCaptureImpl::~CDxgiCaptureImpl()
{
    
}

TDxgiAdapterOutput CDxgiCaptureImpl::get(wstring strDeviceName)
{
    IDXGIFactory1* pFactory1 = NULL;
    TDxgiAdapterOutput dxgiOutput = { NULL };

    do
    {
        bool bFind = false;
        int i = 0;
        HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory1));
        if (FAILED(hr))
        {
            break;
        }

        for (;;++i)
        {
            IDXGIAdapter1* pAdapter1 = nullptr;
            hr = pFactory1->EnumAdapters1(i, &pAdapter1);//枚举显卡设备
            if (hr == DXGI_ERROR_NOT_FOUND)//枚举结束
            {
                break;
            }

            if (FAILED(hr))//枚举失败退出
            {
                break;
            }

            UINT j = 0;
            for (;; ++j)
            {
                IDXGIOutput* pOutput = nullptr;
                HRESULT hr = pAdapter1->EnumOutputs(j, &pOutput);
                if (hr == DXGI_ERROR_NOT_FOUND)//枚举结束
                {
                    break;
                }

                if (FAILED(hr))//枚举失败
                {
                    SAFE_RELEASE(pAdapter1)
                    break;
                }

                DXGI_OUTPUT_DESC outdesc;
                pOutput->GetDesc(&outdesc);
                if ((strDeviceName.length() != 0) && strDeviceName.compare(outdesc.DeviceName) != 0)//判断要捕获的显示器名称已 枚举的是否一致
                {
                    SAFE_RELEASE(pOutput)
                }
                else
                {
                    dxgiOutput.pAdapter = pAdapter1;
                    dxgiOutput.pOutput = pOutput;
                    bFind = true;
                    break;
                }
            }

            if (bFind)//已经找到匹配的显示器设备
            {
                break;
            }
            else
            {
                SAFE_RELEASE(pAdapter1)
            }
        }
        SAFE_RELEASE(pFactory1)
    } while (false);

    return dxgiOutput;
}

BOOL CDxgiCaptureImpl::InitDxgiCapture(TDxgiAdapterOutput dxgiobj)
{
    BOOL bRet = FALSE;
    do
    {
        HRESULT hr = 0;
        D3D_FEATURE_LEVEL FeatureLevels[] =
            {
                D3D_FEATURE_LEVEL_11_1,
                D3D_FEATURE_LEVEL_11_0,
                D3D_FEATURE_LEVEL_10_1,
                D3D_FEATURE_LEVEL_10_0,
                D3D_FEATURE_LEVEL_9_1
            };
        UINT NumFeatureLevels = ARRAYSIZE(FeatureLevels);
        D3D_FEATURE_LEVEL FeatureLevel;
        for (UINT DriverTypeIndex = 0; DriverTypeIndex < NumFeatureLevels; ++DriverTypeIndex)
        {
            FeatureLevel = FeatureLevels[DriverTypeIndex];
            hr = D3D11CreateDevice(dxgiobj.pAdapter,
                                   D3D_DRIVER_TYPE_UNKNOWN,
                                   NULL,
                                   0,
                                   0,
                                   0,
                                   D3D11_SDK_VERSION,
                                   &m_pD3D11Device,
                                   &FeatureLevel,
                                   &m_pD3D11Context);
            if (SUCCEEDED(hr))
                break;
        }

        if (FAILED(hr))
        {
            break;
        }

        if (FAILED(dxgiobj.pOutput->QueryInterface(__uuidof(IDXGIOutput1), reinterpret_cast<void**>(&m_pDxgiOutput))))
        {
            break;
        }
        SAFE_RELEASE(dxgiobj.pOutput);//对象用到提前释放

        hr = m_pDxgiOutput->DuplicateOutput(m_pD3D11Device, &m_pDeskDupl);//获取桌面重复接口
        if (FAILED(hr))
        {
            SAFE_RELEASE(m_pDxgiOutput);
            break;
        }

        if (!CreateD3D11Texture())
        {
            SAFE_RELEASE(m_pDxgiOutput);
            break;
        }
        bRet = TRUE;
    } while (false);
    SAFE_RELEASE(dxgiobj.pAdapter);
    SAFE_RELEASE(dxgiobj.pOutput);
    return bRet;
}

BOOL CDxgiCaptureImpl::CreateD3D11Texture()
{
    DXGI_OUTDUPL_DESC outdupldesc;
    m_pDeskDupl->GetDesc(&outdupldesc);
    D3D11_TEXTURE2D_DESC desc = {0};
    m_nScreenHeight = desc.Height = outdupldesc.ModeDesc.Height;
    desc.Format = outdupldesc.ModeDesc.Format;
    std::cout << "format:" << desc.Format << std::endl;
    m_nScreenWidth = desc.Width = outdupldesc.ModeDesc.Width;
    desc.SampleDesc.Count = 1;
    desc.MipLevels = 1;
    desc.ArraySize = 1;

    if (m_bUseShareTexture)
    {
        //使用共享纹理方式
        IDXGIResource *pDxgiRes = NULL;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.Usage = D3D11_USAGE_DEFAULT;
        desc.MiscFlags = D3D11_RESOURCE_MISC_SHARED;
        if (FAILED(m_pD3D11Device->CreateTexture2D(&desc, NULL, &m_pShareTexture))) {
            return FALSE;
        }

        if (FAILED(m_pShareTexture->QueryInterface(__uuidof(IDXGIResource), (void **)&pDxgiRes))) {
            SAFE_RELEASE(m_pShareTexture)
            return FALSE;
        }

        if (FAILED(pDxgiRes->GetSharedHandle(&m_hShareHanle))) {
            SAFE_RELEASE(pDxgiRes)
            SAFE_RELEASE(m_pShareTexture)
            return FALSE;
        }
        SAFE_RELEASE(pDxgiRes)
    }
    else
    {
        desc.Usage = D3D11_USAGE_STAGING;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        desc.BindFlags = 0;
        desc.MiscFlags = 0;
        if (FAILED(m_pD3D11Device->CreateTexture2D(&desc, NULL, &m_pCpuTexture)))
            return FALSE;
    }
    return TRUE;
}

BOOL CDxgiCaptureImpl::CaptureScreen(ID3D11Texture2D ** pTex2D, void **pVideoData, INT &nWidthPitch)
{
    *pVideoData = NULL;
    nWidthPitch = 0;
    DXGI_OUTDUPL_FRAME_INFO frameInfo;
    ZeroMemory(&frameInfo, sizeof(frameInfo));
    m_pDeskDupl->ReleaseFrame();
    HRESULT hr = m_pDeskDupl->AcquireNextFrame(16, &frameInfo, &m_pDesktopResource);
    if (FAILED(hr))
    {
        switch (hr)
        {
        case DXGI_ERROR_WAIT_TIMEOUT:
            SAFE_RELEASE(m_pDesktopResource)
            return TRUE;
        case DXGI_ERROR_ACCESS_LOST:
        {
            if (m_pDeskDupl)
            {
                m_pDeskDupl->ReleaseFrame();
                SAFE_RELEASE(m_pDeskDupl)
            }

            if (m_pDxgiOutput == NULL)
            {
                return FALSE;
            }

            if (FAILED(m_pDxgiOutput->DuplicateOutput(m_pD3D11Device, &m_pDeskDupl)))
            {
                return FALSE;
            }

            hr = m_pDeskDupl->AcquireNextFrame(16, &frameInfo, &m_pDesktopResource);
            if (FAILED(hr))
            {
                SAFE_RELEASE(m_pDesktopResource)
                m_pDeskDupl->ReleaseFrame();
                if (hr == DXGI_ERROR_WAIT_TIMEOUT)
                {
                    return TRUE;
                }
                return FALSE;
            }
        }
        break;
        case DXGI_ERROR_INVALID_CALL:
        default:
            SAFE_RELEASE(m_pDesktopResource)
            return FALSE;
            break;
        }
    }

    //可能只是屏幕鼠标样式更改，屏幕数据并未变化
    if (frameInfo.AccumulatedFrames == 0 || frameInfo.LastPresentTime.QuadPart == 0)
    {
        SAFE_RELEASE(m_pDesktopResource)
        return TRUE;
    }

    if (FAILED(m_pDesktopResource->QueryInterface(__uuidof(ID3D11Texture2D), (void**)pTex2D)))
    {
        SAFE_RELEASE(m_pDesktopResource)
        return FALSE;
    }

    if (m_bUseShareTexture)
    {
        m_pD3D11Context->CopyResource(m_pShareTexture, *pTex2D);
        (*pTex2D)->Release();
    }else
    {
        m_pD3D11Context->CopyResource(m_pCpuTexture, *pTex2D);
        SAFE_RELEASE((*pTex2D));
        if (FAILED(m_pCpuTexture->QueryInterface(__uuidof(IDXGISurface), (void**)(&m_pDxgiSurf))))
        {
            SAFE_RELEASE(m_pDesktopResource)
            return FALSE;
        }
        DXGI_MAPPED_RECT mappedRect;
        hr = m_pDxgiSurf->Map(&mappedRect, DXGI_MAP_READ);
        if (SUCCEEDED(hr))
        {
            nWidthPitch = mappedRect.Pitch;
            *pVideoData = mappedRect.pBits;
        }
        else
        {
            SAFE_RELEASE(m_pDxgiSurf)
        }
    }
    SAFE_RELEASE(m_pDesktopResource)
    return TRUE;
}

void CDxgiCaptureImpl::ReleaseFrame()
{
    if (m_pDxgiSurf)
    {
        m_pDxgiSurf->Unmap();
        SAFE_RELEASE(m_pDxgiSurf)
    }
}

int CDxgiCaptureImpl::getWidth()
{
    return m_nScreenWidth;
}

int CDxgiCaptureImpl::getHeight()
{
    return m_nScreenHeight;
}

BOOL CDxgiCaptureImpl::IsShareTexturCap()
{
    return m_bUseShareTexture;
}

void CDxgiCaptureImpl::UnInitDxgiCapture()
{
    SAFE_RELEASE(m_pDxgiSurf);
    SAFE_RELEASE(m_pDxgiOutput);
    SAFE_RELEASE(m_pDeskDupl);
    SAFE_RELEASE(m_pD3D11Device);
    SAFE_RELEASE(m_pD3D11Context);
    SAFE_RELEASE(m_pShareTexture);
    SAFE_RELEASE(m_pCpuTexture);
    m_hShareHanle = NULL;
}
