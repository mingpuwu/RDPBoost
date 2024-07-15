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

uint8_t RbgaFrameBuffer[1920*1080*4];

FramePlayer::FramePlayer(QWidget *parent) : QWidget(parent)
{
    // 初始化代码...
    QRect ParentRect = parent->rect();
    _dstRect = QRect(0, 0, ParentRect.width(), ParentRect.height());
}

FramePlayer::~FramePlayer()
{
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

void FramePlayer::setFrame(uint8_t* data, int size)
{
    memcpy(&RbgaFrameBuffer[0], data, size);
}

void FramePlayer::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == this->_timerId)
    {
        update();
    }
}

void FramePlayer::paintEvent(QPaintEvent *event)
{
    QImage Image(RbgaFrameBuffer, 1920,
                 1080, 1920 * 4,
                 QImage::Format_RGBA8888); 

    QPainter(this).drawImage(_dstRect, Image);
}

void FramePlayer::stopTimer()
{
    if (_timerId)
    {
        killTimer(_timerId);
        _timerId = 0;
    }
}
