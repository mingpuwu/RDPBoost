#pragma once

#include "FluWidget.h"
#include <QLabel>

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QStyleOption>
#include <QPainter>
#include "../FluUtils/FluUtils.h"

#include "../FluUtils/FluStyleSheetUitls.h"
class FluHCard : public FluWidget
{
    Q_OBJECT
  public:
    FluHCard(QWidget* parent = nullptr) : FluWidget(parent)
    {
        setFixedSize(360, 90);

        auto mainLayout = new QHBoxLayout(this);
        mainLayout->setSpacing(0);
        setLayout(mainLayout);

        auto rightLayout = new QVBoxLayout();

        m_iconLabel = new QLabel(this);
        m_iconLabel->setFixedSize(50, 50);
        QPixmap pixmap = QPixmap("../res/ControlImages/Placeholder.png");
        pixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        m_iconLabel->setPixmap(pixmap);

        m_titleLabel = new QLabel("this");
        m_titleLabel->setText("AnimatedIcon");

        m_contextLabel = new QLabel(this);
        m_contextLabel->setText("An element that displays and controls an icon that animates when the user interacts with the controls.");

        m_titleLabel->setWordWrap(true);
        m_contextLabel->setWordWrap(true);

        m_iconLabel->setObjectName("iconLabel");
        m_titleLabel->setObjectName("titleLabel");
        m_contextLabel->setObjectName("contextLabel");

        mainLayout->addSpacing(20);
        mainLayout->addWidget(m_iconLabel);
        mainLayout->addSpacing(20);
        mainLayout->addLayout(rightLayout);
        rightLayout->addWidget(m_titleLabel);
        rightLayout->addWidget(m_contextLabel);

        QString qss = FluStyleSheetUitls::getQssByFileName("../StyleSheet/light/FluHCard.qss");
        setStyleSheet(qss);
    }

    FluHCard(QPixmap icon, QString titleText, QString contextText, QWidget* parent = nullptr) : FluHCard(parent)
    {
        QPixmap pixmap = icon.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        m_iconLabel->setPixmap(pixmap);
        m_titleLabel->setText(titleText);
        m_contextLabel->setText(contextText);
        // m_key = titleText;
    }

    void setKey(QString key)
    {
        m_key = key;
    }

    QString getKey()
    {
        return m_key;
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        emit clicked(m_key);
    }

    void paintEvent(QPaintEvent* event)
    {
        QStyleOption opt;
        opt.initFrom(this);
        QPainter painter(this);
        style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
    }

  signals:
    void clicked(QString key);
  public slots:
    void onThemeChanged()
    {
        if (FluThemeUtils::getUtils()->getTheme() == FluTheme::Light)
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluHCard.qss", this);
        }
        else
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/dark/FluHCard.qss", this);
        }
    }

  protected:
    QString m_key;
    QLabel* m_iconLabel;
    QLabel* m_titleLabel;
    QLabel* m_contextLabel;
};
