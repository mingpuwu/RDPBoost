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

    void play(int interval);

    void pause();

    void stop();

    bool isPlaying();

    void setFrame(uint8_t* data, int size);

    State getState();

signals:
    void stateChanged();

private:
    int _timerId = 0;
    State _state = Stopped;
    QRect _dstRect;
    int _interval;
    int _imgSize = 0;

    void timerEvent(QTimerEvent *event);
    void paintEvent(QPaintEvent *event);
    void setState(State state);
    void stopTimer();
    std::mutex MutexLock;
};

#endif // FRAMEPLAYER_H
