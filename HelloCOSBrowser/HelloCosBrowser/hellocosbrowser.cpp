#include "hellocosbrowser.h"
#include "ui_hellocosbrowser.h"


HelloCOSBrowser::HelloCOSBrowser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HelloCOSBrowser)
{
    ui->setupUi(this);
    connect(ui->btnHello, &QPushButton::clicked, this, &HelloCOSBrowser::showDialog);
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(onSpinBoxValueChanged(int)));    // 连接信号与槽
    connect(this, SIGNAL(numChanged(int)), this, SLOT(onNumChanged(int)));    // 连接信号与槽
    setStyleSheet("QWidget{font-size: 12pt;}");     // QSS 语法和 CSS 语法类似

    // QIcon helloCosBrowserIcon;
    // helloCosBrowserIcon.addFile("D:/Bett erQT/HelloCOSBrowser/HelloCosBrowser/images/NewTGG.png");
    // setWindowIcon(helloCosBrowserIcon);

    // 设置窗口无标题栏
    // this->setWindowFlags(Qt::CustomizeWindowHint);

    // 设置窗口无边框
    // setWindowFlags(Qt::FramelessWindowHint);

    // 设置窗口置顶
    // setWindowFlags(Qt::WindowStaysOnTopHint);

    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
}

HelloCOSBrowser::~HelloCOSBrowser()
{
    delete ui;
}

void HelloCOSBrowser::onSpinBoxValueChanged(int value)
{
    qDebug("执行onSpinBoxValueChanged");
    qDebug("发送 numChanged() 信号");
    emit numChanged(value);
}

// 自定义槽函数
void HelloCOSBrowser::onNumChanged(int value)
{
    qDebug("执行onNumChanged");
    ui->progressBar->setValue(value);
}

void HelloCOSBrowser::showDialog()
{
    QMessageBox::information(this, QString::fromLocal8Bit("Welcome") ,QString::fromLocal8Bit("Hello, Welcome Use COSBrowser :D"));
}


