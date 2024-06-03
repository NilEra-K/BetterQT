#include "hellocosbrowser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // 每个 QT 窗口应用程序都需要有一个 QApplication 对象
    HelloCOSBrowser w;          // 创建一个 HelloCOSBrowser 窗口
    w.show();                   // 展示窗口
    return a.exec();            // exec() 让程序进入时间循环, 作用: 接收来自用户的事件, 如鼠标事件、键盘事件
}
