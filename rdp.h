#ifndef RDP_H
#define RDP_H
#include <QWidget>
#include <QLabel>
#include <list>
#include <vector>
#include "RemoteCommunicate.h"
#include <memory>

class RdpSubWindows:public QWidget
{
    Q_OBJECT
public :
    RdpSubWindows(QWidget *parent = nullptr);

    ~RdpSubWindows();
protected:
    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void closeEvent(QCloseEvent *event) override;

private:
    void StartCommounicateThread();

private:
    QLabel *imageLabel;
    RemoteCommunicate* RemCPoint;
};

#endif // RDP_H
