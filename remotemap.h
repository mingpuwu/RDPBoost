#ifndef REMOTEMAP_H
#define REMOTEMAP_H

#include <QWidget>
#include <QLabel>
#include <list>
#include <vector>
#include "RemoteCommunicate.h"
#include <memory>

namespace Ui {
class RemoteMap;
}

class RemoteMap : public QWidget
{
    Q_OBJECT

public:
    explicit RemoteMap(QWidget *parent = nullptr);
    ~RemoteMap();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void closeEvent(QCloseEvent *event) override;

private:
    void StartCommounicateThread();

private:
    QLabel *imageLabel;
    RemoteCommunicate* RemCPoint;
    Ui::RemoteMap *ui;
};

#endif // REMOTEMAP_H
