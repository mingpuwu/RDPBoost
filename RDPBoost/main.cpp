#include <QApplication>
#include "../FluControls/FluWidget.h"

#include "FluGalleryWindow.h"
#include "../FluUtils/FluLogUtils.h"
#include "../RDPCore/Logger.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    InitLogger();
    FluGalleryWindow w;
    w.show();

    return app.exec();
}
