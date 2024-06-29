#pragma once

#include <d3d11.h>
#include <dxgi1_2.h>
#include <vector>
#include <string>
using namespace std;
// 显卡以及输出设备的结构体
typedef struct stDxgiAdapterOutput
{
    IDXGIAdapter* pAdapter;
    IDXGIOutput* pOutput;
}TDxgiAdapterOutput;

class CDxgiCaptureImpl
{
public:
    CDxgiCaptureImpl(BOOL bUseShareTexture = TRUE);//使用共享纹理方式
    ~CDxgiCaptureImpl();
    //这边目前是获取电脑默认的显示器，可能存在多个显示器，可以通过EnumDisplayDevices获取设备名称
    TDxgiAdapterOutput get(wstring strDeviceName );
    //DXGI初始化
    BOOL InitDxgiCapture(TDxgiAdapterOutput);
    //创建纹理
    BOOL CreateD3D11Texture();
    //屏幕捕获函数
    BOOL CaptureScreen(ID3D11Texture2D ** pTex2D, void **pVideoData,INT &nWidthPitch);
    //捕获一帧结束调用
    void ReleaseFrame();
    //获取屏幕宽度
    int getWidth();
    //屏幕高度
    int getHeight();
    //是否是共享纹理
    BOOL IsShareTexturCap();
    //回收DXGI捕获的资源
    void UnInitDxgiCapture();
private:
    ID3D11Device           *m_pD3D11Device;
    ID3D11DeviceContext    *m_pD3D11Context;
    IDXGIOutputDuplication *m_pDeskDupl;
    IDXGIResource * m_pDesktopResource;
    ID3D11Texture2D *m_pShareTexture;
    ID3D11Texture2D *m_pCpuTexture;
    IDXGIOutput1 *m_pDxgiOutput;
    IDXGISurface *m_pDxgiSurf;
    BOOL m_bUseShareTexture;
    HANDLE m_hShareHanle;

    int m_nScreenWidth;
    int m_nScreenHeight;
};

