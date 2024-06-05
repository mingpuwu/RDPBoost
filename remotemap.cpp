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

VideoWidget::VideoWidget(QVideoWidget *parent): QVideoWidget(parent)
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

RemoteMap::RemoteMap(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RemoteMap)
{
    ui->setupUi(this);

    RemCPoint = new RemoteCommunicate();
    if (RemCPoint == nullptr)
    {
        std::cout << "make shared remotecommunicate error" << std::endl;
    }

    this->resize(800, 600);

    VideoWidget *videoWidget = new VideoWidget(parent);
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
