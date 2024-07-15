#ifndef MAPPAGE_H
#define MAPPAGE_H
#include "../FluControls/FluFrameLessWidget.h"
#include "../FluControls/FluStackedLayout.h"
#include "../RDPCore/Communicate.h"

class MapPage: public FluFrameLessWidget
{
    Q_OBJECT
    public:
        MapPage(QWidget *parent = nullptr);

    protected:
        void mouseMoveEvent(QMouseEvent *event) override;

        void mousePressEvent(QMouseEvent *event) override;

        void closeEvent(QCloseEvent *event) override;

    private:
        void StartCommounicateThread();

    private:
        Communicate* RemCPoint;
};

#endif  // MAPPAGE_H
