#ifndef RDP_H
#define RDP_H
#include <QWidget>
#include <QLabel>

class RdpSubWindows:public QWidget
{
    Q_OBJECT
public :
    explicit RdpSubWindows(QWidget *parent = nullptr);

private:
    QLabel *imageLabel;
};

#endif // RDP_H
