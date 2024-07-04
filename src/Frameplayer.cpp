#include "Frameplayer.h"
#include <QDebug>
#include <QPainter>
#include <QTimerEvent>
#include <QImage>
#include <QWidget>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <iostream>

FramePlayer::FramePlayer(QWidget *parent) : QWidget(parent)
{
    // 初始化代码...
    _dstRect = QRect(0, 0, 640, 480);
}

FramePlayer::~FramePlayer()
{
    freeCurrentImage();
    stopTimer();
}

void FramePlayer::play(int interval)
{
    if (_state == Playing) return;
    std::cout<<"set interval "<<std::endl;
    _timerId = startTimer(interval);
    setState(Playing);
}

void FramePlayer::pause()
{
    if (_state != Playing) return;
    stopTimer();
    setState(Paused);
}

void FramePlayer::stop()
{
    if (_state == Stopped) return;
    freeCurrentImage();
    stopTimer();
    update();
    setState(Stopped);
}

bool FramePlayer::isPlaying()
{
    return _state == Playing;
}

FramePlayer::State FramePlayer::getState()
{
    return _state;
}

void FramePlayer::setState(State state)
{
    if (state == _state) return;

    if (state == Stopped || state == Finished)
    {

    }
    _state = state;
    emit stateChanged();
}

void FramePlayer::setFrame(ViewFrame &Frame)
{
    // 打开文件、设置间隔、计算图像大小等...
    if(Frame.pixelFormat == AV_PIX_FMT_RGBA)
    {
        if(_currentImage)
        {
            freeCurrentImage();
        }

        _currentImage = new QImage(Frame.data, Frame.width,
                                   Frame.height, Frame.width * 4,
                                   QImage::Format_RGBA8888); 
    }
    else
    {
        std::cout<<"frame foramt error"<<std::endl;
    }
}

static void FramePlayer::setFrame2(uint8_t* data, int size)
{
    ViewFrame FrameI(1920,1080,30,data,AV_PIX_FMT_RGBA);
    setFrame(FrameI);
}

void FramePlayer::SendFrame(ViewFrame *frame)
{

}

void FramePlayer::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == this->_timerId)
    {
        // std::cout<<"update...."<<std::endl;
        update();
    }
}

void FramePlayer::paintEvent(QPaintEvent *event)
{
    if (_currentImage)
    {
        // std::cout<<"paintEvent"<<std::endl;
        // qDebug() << "Image size:" << _currentImage->size();
        // qDebug() << "Draw rect:" << _dstRect;
        QPainter(this).drawImage(_dstRect, *_currentImage);
    }
}

void FramePlayer::freeCurrentImage()
{
    if (_currentImage)
    {
        delete _currentImage;
        _currentImage = nullptr;
    }
}

void FramePlayer::stopTimer()
{
    if (_timerId)
    {
        killTimer(_timerId);
        _timerId = 0;
    }
}
