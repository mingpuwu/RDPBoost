/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *toolButton;
    QLabel *label_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QToolButton *toolButton_2;
    QWidget *widget_7;
    QWidget *widget_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QWidget *widget_6;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QWidget *widget_8;
    QLabel *label_10;
    QPushButton *pushButton_7;
    QWidget *widget_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QFrame *frame;
    QLabel *label_12;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 171, 551));
        formLayoutWidget = new QWidget(widget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        toolButton = new QToolButton(formLayoutWidget);
        toolButton->setObjectName("toolButton");

        formLayout->setWidget(0, QFormLayout::FieldRole, toolButton);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        formLayoutWidget_2 = new QWidget(widget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 90, 160, 80));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout_2);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        toolButton_2 = new QToolButton(formLayoutWidget_2);
        toolButton_2->setObjectName("toolButton_2");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, toolButton_2);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(0, 210, 171, 311));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(200, 10, 561, 131));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 40, 171, 25));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 69, 19));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 80, 61, 31));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 80, 71, 31));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(200, 520, 571, 31));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 107, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(200, 250, 561, 241));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(layoutWidget1);
        widget_5->setObjectName("widget_5");
        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 78, 69, 21));
        pushButton_4 = new QPushButton(widget_5);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(150, 77, 21, 21));

        gridLayout->addWidget(widget_5, 0, 1, 1, 1);

        widget_6 = new QWidget(layoutWidget1);
        widget_6->setObjectName("widget_6");
        label_8 = new QLabel(widget_6);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 78, 69, 21));
        pushButton_5 = new QPushButton(widget_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 77, 21, 21));

        gridLayout->addWidget(widget_6, 1, 0, 1, 1);

        widget_8 = new QWidget(layoutWidget1);
        widget_8->setObjectName("widget_8");
        label_10 = new QLabel(widget_8);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 78, 69, 21));
        pushButton_7 = new QPushButton(widget_8);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(150, 77, 21, 21));

        gridLayout->addWidget(widget_8, 1, 1, 1, 1);

        widget_4 = new QWidget(layoutWidget1);
        widget_4->setObjectName("widget_4");
        widget1 = new QWidget(widget_4);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 77, 148, 30));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_4->addWidget(pushButton_3);


        gridLayout->addWidget(widget_4, 0, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(200, 196, 561, 16));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 69, 19));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1234556", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\252\214\350\257\201\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1234556", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213ID", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\274\240\350\276\223\346\226\207\344\273\266", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "myicon", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ID:123", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ID:123", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "ID:123", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID:123", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
