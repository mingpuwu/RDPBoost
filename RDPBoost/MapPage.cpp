#include "MapPage.h"
#include "../RDPCore/Logger.h"
#include "../RDPCore/Communicate.h"
#include "../RDPCore/Frameplayer.h"
#include "../RDPCore/Logger.h"
#include <QMouseEvent>

MapPage::MapPage(QWidget *parent)
{
    setWindowTitle("RemoteDesk");

    resize(1200, 800);

    RemCPoint = new Communicate();
    if (RemCPoint == nullptr)
    {
        LoggerI()->info("make shared remotecommunicate error");
    }

    FramePlayer *framePlayerInstance = new FramePlayer(this);
    framePlayerInstance->setObjectName("video_play");
    m_contentLayout->addWidget(framePlayerInstance);
    framePlayerInstance->play(500);

    RemCPoint->RegisterCallBack(CommunicateMessageType::MESSAGE_TYPE_VIDEO,
                                        [framePlayerInstance](uint8_t* data, int datasize){
                                            framePlayerInstance->setFrame(data,datasize);
                                        }
    );

    RemCPoint->Start();
}

void MapPage::mouseMoveEvent(QMouseEvent *event)
{
    // 当鼠标在窗口内移动时，这个函数会被调用
    // 'event' 参数包含了鼠标事件的详细信息

    // 打印鼠标当前位置的坐标
    // qDebug() << "Mouse is at:" << event->pos();

    std::shared_ptr<RemoteMessage> message = std::make_shared<RemoteMouseMessage>();
    RemCPoint->SendMessage(message);

    // 可以在这里添加更多的逻辑来处理鼠标移动事件
    // 这里要把鼠标的坐标发送出去

    // 调用基类的 mouseMoveEvent 来确保正常的事件处理不被阻断
    QWidget::mouseMoveEvent(event);
}

void MapPage::mousePressEvent(QMouseEvent *event)
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

void MapPage::closeEvent(QCloseEvent *event)
{
    // 在窗口关闭事件发生时执行的代码
    LoggerI()->info("MapPage Window is closing");

    //RemCPoint->DisConnect();
    delete RemCPoint;
    // 如果你想阻止窗口关闭，可以调用以下方法
    // event->ignore();

    // 如果你想让窗口继续关闭，可以调用以下方法
    // event->accept();

    // 调用父类的 closeEvent 方法
    QWidget::closeEvent(event);
}

void MapPage::StartCommounicateThread()
{

}
