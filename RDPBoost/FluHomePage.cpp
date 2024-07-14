#include "FluHomePage.h"
#include "FluHomePageTitle.h"
#include "../FluControls/FluFlowLayout.h"
#include "../FluControls/FluHCard.h"

FluHomePage::FluHomePage(QWidget *parent /*= nullptr*/) : FluVScrollView(parent)
{
    m_vMainLayout->setContentsMargins(0, 0, 0, 0);
    m_vMainLayout->setAlignment(Qt::AlignTop);
    m_vMainLayout->setSpacing(45);

    auto titleWidget = new FluHomePageTitle();
    titleWidget->setMinimumHeight(450);

    auto recentlyAddedSamplesLabel = new QLabel;
    auto recentlyUpdatedSamplesLabel = new QLabel;
    recentlyAddedSamplesLabel->setText("Recently connection");
    auto recentlyAddedSamplesLayout = new FluFlowLayout;
    auto recentlyAddedSamplesLayoutWrap = new QWidget(this);
    recentlyAddedSamplesLayoutWrap->setLayout(recentlyAddedSamplesLayout);
    recentlyAddedSamplesLayout->setContentsMargins(40, 0, 40, 0);
    recentlyAddedSamplesLayout->setSpacing(10, 10);

    auto AnnotatedScrollBarCard = new FluHCard();
    recentlyAddedSamplesLayout->addWidget(AnnotatedScrollBarCard);

    auto infoBadgeCard = new FluHCard(QPixmap("../res/ControlImages/InfoBadge.png"), "ID1", "An non-instrusive Ui to display notifications or bring focus to an area");
    recentlyAddedSamplesLayout->addWidget(infoBadgeCard);

    auto itemsViewCard = new FluHCard(QPixmap("../res/ControlImages/ItemsView.png"), "ID2", "A control that presents a collection of items using various layouts");
    recentlyAddedSamplesLayout->addWidget(itemsViewCard);

    auto lineCard = new FluHCard(QPixmap("../res/ControlImages/Line.png"), "ID3", "Draws a straight line between two points");
    recentlyAddedSamplesLayout->addWidget(lineCard);

    m_vMainLayout->addWidget(titleWidget);
    m_vMainLayout->addWidget(recentlyAddedSamplesLabel);
    m_vMainLayout->addWidget(recentlyAddedSamplesLayoutWrap);

    titleWidget->setObjectName("titleWidget");
    titleWidget->setFixedHeight(350);
    recentlyAddedSamplesLabel->setObjectName("recentlyAddedSamplesLabel");

    QString qss = FluStyleSheetUitls::getQssByFileName("../StyleSheet/light/FluHomePage.qss");
    setStyleSheet(qss);
    connect(FluThemeUtils::getUtils(), &FluThemeUtils::themeChanged, [=](FluTheme theme) { onThemeChanged(); });
}
