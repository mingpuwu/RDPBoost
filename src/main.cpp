#include "mainwindow.h"
#include "Logger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    InitLogger();
    QApplication a(argc, argv);
    MainWindow w;
    // w.setMouseTracking(true);
    w.show();
    return a.exec();
}
