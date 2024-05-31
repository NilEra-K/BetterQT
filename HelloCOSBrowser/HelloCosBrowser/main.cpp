#include "hellocosbrowser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloCOSBrowser w;
    w.show();
    return a.exec();
}
