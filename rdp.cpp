#include "rdp.h"
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>

RdpSubWindows::RdpSubWindows(QWidget *parent):QWidget(parent)
{
    imageLabel = new QLabel;
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(imageLabel);
    setLayout(layout);
    this->resize(800, 600);
    // set
}
