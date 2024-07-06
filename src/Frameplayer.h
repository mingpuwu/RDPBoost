#ifndef FRAMEPLAYER_H
#define FRAMEPLAYER_H

#include <QWidget>
#include <QFile>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <cstdint>
#include <list>
#include <mutex>

class ViewFrame
{
public:
    ViewFrame(int width, int height,
              int fps, uint8_t* data,
              AVPixelFormat format):width(width),height(height),fps(fps),data(data),pixelFormat(format)
    {

    }

public:
    int width;
    int height;
    AVPixelFormat pixelFormat;
    int fps;
    uint8_t* data;
};

class FramePlayer : public QWidget {
    Q_OBJECT

public:
    enum State {
        Stopped = 0,
        Playing,
        Paused,
        Finished
    };

    explicit FramePlayer(QWidget *parent = nullptr);
    
    ~FramePlayer();

    void SendFrame(ViewFrame *frame);

    void play(int interval);

    void pause();

    void stop();

    bool isPlaying();

    void SetFrame(uint8_t* data, int size);

    State GetState();

signals:
    void stateChanged();

private:
    int _timerId = 0;
    State _state = Stopped;
    QImage *_currentImage = nullptr;
    QRect _dstRect;
    int _interval;
    int _imgSize = 0;

    void timerEvent(QTimerEvent *event);
    void paintEvent(QPaintEvent *event);
    void freeCurrentImage();
    void setState(State state);
    void stopTimer();
    std::mutex MutexLock;
};

#endif // FRAMEPLAYER_H
