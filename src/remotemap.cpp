#include "remotemap.h"
#include "ui_remotemap.h"
#include "RemoteCommunicate.h"
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <iostream>
#include <memory>
#include <QMediaPlayer>
#include <QLabel>
#include <QMovie>
#include <QVideoWidget>
#include "CDxgiCaptureImpl.h"


static void ScreenCaptureThreadHandler()
{
    std::cout<<"ScreenCaptureThreadHandler start"<<std::endl;

    CDxgiCaptureImpl *impl = new CDxgiCaptureImpl(FALSE);
    TDxgiAdapterOutput out = impl->get(L"");
    BOOL bRet = impl->InitDxgiCapture(out);
    if (!bRet)
    {
        std::cout << " InitDxgiCapture Error \n";
        return;
    }

    INT nWidthPicth = 0;
    void *pVideoData = NULL;
    ID3D11Texture2D *pVideoTexture = NULL;
    while (true)
    {
        pVideoTexture = NULL;
        pVideoData = NULL;
        nWidthPicth = 0;

        if (impl->CaptureScreen(&pVideoTexture, &pVideoData, nWidthPicth))
        {
            if (pVideoTexture)//纹理捕获成功
            {
                std::cout << "capture video succuess\n";
            }
            else if (nWidthPicth > 0)//视频数据捕获成功  pVideoData就是视频RGBA数据
            {
                std::cout << "read raw RGBA data\n";
                int width = 1920; // 图像宽度
                int height = 1080; // 图像高度
                int bytesPerPixel = 4; // 每像素字节数（例如：RGBA 格式）
                int pitch = nWidthPicth; // 行字节数


                // // pVideoData 已经指向了 mappedRect.pBits
                // uint8_t* pBits = reinterpret_cast<uint8_t*>(pVideoData);

                // SaveBitmap("output.bmp", pBits, width, height, bytesPerPixel, pitch,true);
                impl->ReleaseFrame();
                // break;
            }
            else
            {
                std::cout << "capture timeout\n";
            }
            //成功捕获一帧

        }
        else
        {
            std::cout << "capture error,continue\n";
            // break;
        }
        Sleep(50);
    }

    impl->UnInitDxgiCapture();
    return;
}

VideoWidget::VideoWidget(QWidget *parent): QVideoWidget(parent)
{

}

VideoWidget::~VideoWidget()
{

}

void VideoWidget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << "VideoWidget Mouse is at:" << event->pos();

    // 调用基类的 mouseMoveEvent 来确保正常的事件处理不被阻断
    QVideoWidget::mouseMoveEvent(event);
}

void RemoteMap::StartScreenCapture()
{
    std::cout<<"start capture screen"<<std::endl;

    std::thread ScreenCaptureThread(ScreenCaptureThreadHandler);
    ScreenCaptureThread.detach();
}

RemoteMap::RemoteMap(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RemoteMap)
{
    ui->setupUi(this);

    RemCPoint = new RemoteCommunicate(WorkMode::WORK_MODE_CLIENT);
    if (RemCPoint == nullptr)
    {
        std::cout << "make shared remotecommunicate error" << std::endl;
    }

    this->resize(800, 600);

    //采集视频数据
    this->StartScreenCapture();

    VideoWidget *videoWidget = new VideoWidget(this);
    videoWidget->resize(400, 300);
    // 设置视频输出到videoWidget
    QMediaPlayer *player = new QMediaPlayer;
    player->setVideoOutput(videoWidget);
    // 加载媒体并播放
    // player->setSource(QUrl::fromLocalFile("D:/GitCode/RDPBoost/build/Desktop_Qt_6_7_1_MinGW_64_bit-Debug/test.mp4"));
    player->setSource(QUrl::fromLocalFile("test.mp4"));
    player->play();
}

RemoteMap::~RemoteMap()
{
    delete ui;
}

void RemoteMap::closeEvent(QCloseEvent *event)
{
    // 在窗口关闭事件发生时执行的代码
    qDebug() << "Window is closing...";

    //RemCPoint->DisConnect();
    delete RemCPoint;
    // 如果你想阻止窗口关闭，可以调用以下方法
    // event->ignore();

    // 如果你想让窗口继续关闭，可以调用以下方法
    // event->accept();

    // 调用父类的 closeEvent 方法
    QWidget::closeEvent(event);
}

void RemoteMap::mouseMoveEvent(QMouseEvent *event)
{
    // 当鼠标在窗口内移动时，这个函数会被调用
    // 'event' 参数包含了鼠标事件的详细信息

    // 打印鼠标当前位置的坐标
    qDebug() << "Mouse is at:" << event->pos();

    std::shared_ptr<RemoteMessage> message = std::make_shared<RemoteMouseMessage>();
    RemCPoint->SendMessage(message);

    // 可以在这里添加更多的逻辑来处理鼠标移动事件
    // 这里要把鼠标的坐标发送出去

    // 调用基类的 mouseMoveEvent 来确保正常的事件处理不被阻断
    QWidget::mouseMoveEvent(event);
}

void RemoteMap::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        qDebug() << "Mouse left press";
    }
    else if (event->button() == Qt::RightButton)
    {
        qDebug() << "Mouse right press";
    }
    else
    {
        qDebug() << "Mouse other press";
    }

    QWidget::mousePressEvent(event);
}
