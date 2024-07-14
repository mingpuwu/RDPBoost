#pragma once

#include "FluLogUtils.h"
#include <QByteArray>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QString>
#include <map>
#include <QWidget>
#include <QTimer>

class FluStyleSheetUitls : public QObject
{
  private:
    FluStyleSheetUitls(QObject *object = nullptr);

  public:
    static QString getQssByFileName(const QString &fileName);
    static void setQssByFileName(const QString &fileName, QWidget *widget, bool bDebugQss = false);

    static QString getQssByFileName(const QString &jsonVars, const QString &fileName);
    static void setQssByFileName(const QString &jsonVar, const QString &fileName, QWidget *widget);

    static QString getQssByFileName(const std::map<QString, QString> &kvMap, const QString &fileName);
    static void setQssByFileName(const std::map<QString, QString> &kvMap, const QString &fileName, QWidget *widget);

    static void replaceVar(const QString &jsonVars, QString &styleSheet);
    static void replaceVar(const std::map<QString, QString> &kvMap, QString &styleSheet);

    static FluStyleSheetUitls *getUtils()
    {
        if (m_styleSheetUtils == nullptr)
            m_styleSheetUtils = new FluStyleSheetUitls;
        return m_styleSheetUtils;
    }

    // #ifdef _DEBUG_QSS
    static QTimer *getTimer()
    {
        return FluStyleSheetUitls::getUtils()->m_timer;
    }
    // #endif

    static void __init()
    {
        getUtils();
        FluStyleSheetUitls::getUtils()->setStyleSheetDir("../StyleSheet/light/");
    }

    static void __deInit()
    {
        if (m_styleSheetUtils == nullptr)
            return;
        delete m_styleSheetUtils;
        m_styleSheetUtils = nullptr;
    }

    void setStyleSheetDir(QString styleSheetDir)
    {
        m_styleSheetDir = styleSheetDir;
    }

    QString getStyleSheetDir()
    {
        return m_styleSheetDir;
    }

  protected:
    QString m_styleSheetDir;
    // #ifdef _DEBUG_QSS
    //   update stylesheet by timer
    QTimer *m_timer;
    // #endif
  private:
    static FluStyleSheetUitls *m_styleSheetUtils;
};
