#ifndef RDP_H
#define RDP_H
#include <QWidget>
#include <QLabel>
#include <list>
#include <vector>

class RdpSubWindows:public QWidget
{
    Q_OBJECT
public :
    RdpSubWindows(QWidget *parent = nullptr);

protected:
    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

private:
    void StartCommounicateThread();

private:
    QLabel *imageLabel;
    std::list<>
};

#endif // RDP_H
