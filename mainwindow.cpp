#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVBoxLayout>
#include <iostream>
#include <QDebug>
#include "rdp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("RDP");

    //设置圆角
    ui->toolButton->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->toolButton_2->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton_2->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton_3->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton_4->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton_5->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->pushButton_7->setStyleSheet("border: 2px solid #000; border-radius: 10px;");
    ui->lineEdit->setStyleSheet("border: 2px solid #000; border-radius: 10px;");

    // 设置widget颜色
    this->setStyleSheet("QWidget { background-color: white; }");
    ui->widget->setStyleSheet("QWidget { background-color: lightgray; }");
    ui->frame->setStyleSheet("QFrame { background-color: lightgray; }");

    //设置widget边框
    ui->widget_4->setStyleSheet(QString::fromUtf8("#widget_4{border:3px solid lightgray}"));
    ui->widget_5->setStyleSheet(QString::fromUtf8("#widget_5{border:3px solid lightgray}"));
    ui->widget_6->setStyleSheet(QString::fromUtf8("#widget_6{border:3px solid lightgray}"));
    ui->widget_8->setStyleSheet(QString::fromUtf8("#widget_8{border:3px solid lightgray}"));

    //设置widget背景图片
    ui->widget_7->setStyleSheet("border-image:url(C:/Users/mingpu.wu/Documents/RDPBoost/image/back.jpg);");

    //设置label字体
    QFont font("Arial", 12);
    font.setBold(true);
    ui->label->setFont(font);
    ui->label_3->setFont(font);
    ui->label_5->setFont(font);

    QFont font_1("Arial", 10);
    font_1.setBold(true);
    ui->label_12->setFont(font_1);

    //给label加图标
    QString filePath = "C:/Users/mingpu.wu/Documents/RDPBoost/image/red.png";
    QIcon icon = QIcon(filePath);
    QPixmap m_pic = icon.pixmap(icon.actualSize(QSize(10, 10)));
    ui->label_11->setPixmap(m_pic);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString connectId = ui->lineEdit->text();
    std::cout<<"connect:"<<connectId.toStdString()<<std::endl;

    RdpSubWindows* rdp = new RdpSubWindows();
    rdp->show();
}

