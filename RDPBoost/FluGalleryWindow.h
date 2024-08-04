#pragma once

#include "../FluControls/FluFrameLessWidget.h"
#include "../FluControls/FluVNavigationView.h"
#include "../FluControls/FluVNavigationIconTextItem.h"
#include "FluHomePage.h"
#include <QStackedLayout>
#include "../FluControls/FluStackedLayout.h"
#include "../RDPCore/Server.h"
#include "../RDPCore/Logger.h"

#include <QPainter>
#include <QStyleOption>

class FluGalleryWindow : public FluFrameLessWidget
{
    Q_OBJECT
  public:
    FluGalleryWindow(QWidget *parent = nullptr);

    void makeHomeNavItem()
    {
        FluVNavigationIconTextItem *item = new FluVNavigationIconTextItem(FluAwesomeType::Home, "Home", this);
        m_navView->addItemToMidLayout(item);

        auto homePage = new FluHomePage;
        m_sLayout->addWidget("HomePage", homePage);
        connect(item, &FluVNavigationIconTextItem::itemClicked, [=]() {
            m_sLayout->setCurrentWidget("HomePage");
            //  FluMessageBox messageBox("Close Gallery Window?", "choose \"Ok\" to close. choose \"Cancel\" do nothing.", this);
            // int nExec = messageBox.exec();
        });

        ServerInstance = new Server;
        LoggerI()->info("Server Init");
        ServerInstance->Init();
        ServerInstance->StartScreenCapture();
    }

    void resizeEvent(QResizeEvent *event)
    {
        // if (event->size().width() == width())
        //     return;

        if (width() > 1000)
        {
            // check it
            if (!m_navView->isLong())
                m_navView->onMenuItemClicked();
        }
        else
        {
            if (m_navView->isLong())
                m_navView->onMenuItemClicked();
        }
    }

    void closeEvent(QCloseEvent *event);

    ///*void paintEvent(QPaintEvent* event)
    //{
    //    QStyleOption opt;
    //    opt.initFrom(this);
    //    QPainter painter(this);
    //    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
    //}*/

  public slots:
    void onThemeChanged();

  protected:
    FluVNavigationView *m_navView;
    FluStackedLayout *m_sLayout;

  private:
    Server *ServerInstance;
};
