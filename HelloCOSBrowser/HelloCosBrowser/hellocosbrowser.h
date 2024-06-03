#ifndef HELLOCOSBROWSER_H
#define HELLOCOSBROWSER_H

#include <QWidget>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloCOSBrowser; }
QT_END_NAMESPACE

class HelloCOSBrowser : public QWidget  // QWidget 是所有应用程序窗口的基类
{
    Q_OBJECT    // Qt的宏, 支持 Qt 的特性, 如信号与槽、对象树、元对象等

public:
    // 这里 HelloCOSBrowser 指定父窗口指针为 nullptr, 则它会作为一个独立的窗口进行展示, 否则则会作为父窗口的一个控件
    // 关于这个父窗口指针, 一个很典型的应用就是 微信
    // 当我们创建新窗口的时候, 如果不指定父窗口, 就会弹出一个独立的新窗口, 即电脑任务栏的图标会多出来一个
    // 如果指定了父窗口, 则不会创建一个独立的窗口, 即电脑任务栏处的图标不会增加
    HelloCOSBrowser(QWidget *parent = nullptr);
    ~HelloCOSBrowser();

signals:
    void numChanged(int value);                  // * 自定义信号函数

private slots:
    void onSpinBoxValueChanged(int value);
    void onNumChanged(int value);                // * 自定义槽函数
    void showDialog();

private:
    Ui::HelloCOSBrowser *ui;
};

 #endif // HELLOCOSBROWSER_H
