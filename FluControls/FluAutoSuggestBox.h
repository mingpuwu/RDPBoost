#pragma once

#include "FluDef.h"
#include "../FluUtils/FluUtils.h"
#include "FluWidget.h"

#include <vector>
#include "FluMenu.h"

#include <QLineEdit>
#include <QPushButton>

#include <QPaintEvent>
#include <QStyleOption>
#include <QPainter>

class FluAutoSuggestBox : public FluWidget
{
    Q_OBJECT
  public:
    FluAutoSuggestBox(QWidget* parent = nullptr) : FluWidget(parent)
    {
        m_hMainLayout = new QHBoxLayout;
        setLayout(m_hMainLayout);
        m_hMainLayout->setContentsMargins(1, 0, 1, 0);
        m_hMainLayout->setSpacing(0);
        m_hMainLayout->setAlignment(Qt::AlignHCenter);

        m_lineEdit = new QLineEdit;

        m_lineEdit->setFixedHeight(30);
        m_lineEdit->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        m_hMainLayout->addWidget(m_lineEdit);
        m_hMainLayout->addSpacing(4);

        setFixedHeight(32);

        m_lineEdit->installEventFilter(this);

        m_completerMenu = new FluMenu;
        m_completerMenu->installEventFilter(this);

        connect(m_lineEdit, &QLineEdit::textEdited, [=](QString text) {
            m_completerMenu->clear();
            m_completerMenu->hide();

            std::vector<QString> keys;
            for (auto key : m_keys)
            {
                if (key.contains(text) && !text.isEmpty())
                {
                    keys.push_back(key);
                }
            }

            if (keys.empty())
            {
                return;
            }

            for (auto key : keys)
            {
                m_completerMenu->addAction(new FluAction(key));
            }

            // show menu;
            QPoint leftBottomPos = rect().bottomLeft();
            leftBottomPos = mapToGlobal(leftBottomPos);
            leftBottomPos.setY(leftBottomPos.y() + 3);
            m_completerMenu->setFixedWidth(width());
            m_completerMenu->exec(leftBottomPos);
        });

        connect(m_completerMenu, &FluMenu::triggered, [=](QAction* action) {
            m_lineEdit->setText(action->text());
            emit currentTextChanged(action->text());
            int nIndex = 0;
            for (auto tmpAct : m_completerMenu->actions())
            {
                if (tmpAct == action)
                {
                    break;
                }

                nIndex++;
            }
            emit currentIndexChanged(nIndex);
        });

        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluAutoSuggestBox.qss", this);
    }

    void setKeys(std::vector<QString> keys)
    {
        m_keys = keys;
    }

    bool eventFilter(QObject* watched, QEvent* event)
    {
        if (watched == m_lineEdit)
        {
            if (event->type() == QEvent::FocusIn)
            {
                setProperty("isFocused", true);
                style()->polish(this);
            }
            else if (event->type() == QEvent::FocusOut)
            {
                setProperty("isFocused", false);
                style()->polish(this);
            }
        }
        else if (watched == m_completerMenu)
        {
            if (event->type() == QEvent::KeyPress)
            {
                m_lineEdit->event(event);
            }
        }

        return QWidget::eventFilter(watched, event);
    }

    void paintEvent(QPaintEvent* event)
    {
        QStyleOption opt;
        opt.initFrom(this);
        QPainter painter(this);
        style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
    }
  signals:
    void searchBtnClicked();

    void currentTextChanged(QString text);
    void currentIndexChanged(int nIndex);

  public slots:
    void onThemeChanged()
    {
        if (FluThemeUtils::getUtils()->getTheme() == FluTheme::Light)
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluAutoSuggestBox.qss", this);
        }
        else
        {
            FluStyleSheetUitls::setQssByFileName("../StyleSheet/dark/FluAutoSuggestBox.qss", this);
        }
    }

  protected:
    std::vector<QString> m_keys;

    QLineEdit* m_lineEdit;
    QHBoxLayout* m_hMainLayout;

    FluMenu* m_completerMenu;
};
