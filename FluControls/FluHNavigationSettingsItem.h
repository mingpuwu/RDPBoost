#pragma once

#include "FluHNavigationItem.h"
#include <QHBoxLayout>
#include "FluRotationButton.h"
#include <QPainter>
#include <QStyleOption>

class FluHNavigationSettingsItem : public FluHNavigationItem
{
    Q_OBJECT
  public:
    FluHNavigationSettingsItem(QWidget* parent = nullptr) : FluHNavigationItem(parent)
    {
        m_hMainLayout = new QHBoxLayout;
        setLayout(m_hMainLayout);

        m_hMainLayout->setContentsMargins(0, 0, 0, 0);

        m_icon = new FluRotationButton(FluAwesomeType::Settings);
        m_icon->setFixedSize(40, 40);
        m_icon->setIconSize(QSize(24, 24));
        m_icon->setIcon(FluIconUtils::getFluentIcon(FluAwesomeType::Settings));
        m_hMainLayout->addWidget(m_icon);

        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluHNavigationSettingsItem.qss", this);
    }

    FluHNavigationSettingsItem(FluAwesomeType awesomeType, QWidget* parent = nullptr) : FluHNavigationSettingsItem(parent)
    {
        m_awesomeType = awesomeType;
        m_icon->setAwesomeType(awesomeType);
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluHNavigationSettingsItem.qss", this);
    }

    void paintEvent(QPaintEvent* event)
    {
        QStyleOption opt;
        opt.initFrom(this);
        QPainter painter(this);
        style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
    }
  public slots:
    void onThemeChanged()
    {
        if (FluThemeUtils::getUtils()->getTheme() == FluTheme::Light)
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluHNavigationSettingsItem.qss", this);
        }
        else
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/dark/FluHNavigationSettingsItem.qss", this);
        }
    }

  protected:
    FluAwesomeType m_awesomeType;
    FluRotationButton* m_icon;
    QHBoxLayout* m_hMainLayout;
};
