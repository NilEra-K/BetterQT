#ifndef HELLOCOSBROWSER_H
#define HELLOCOSBROWSER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloCOSBrowser; }
QT_END_NAMESPACE

class HelloCOSBrowser : public QWidget
{
    Q_OBJECT

public:
    HelloCOSBrowser(QWidget *parent = nullptr);
    ~HelloCOSBrowser();

private slots:
    void showDialog();

private:
    Ui::HelloCOSBrowser *ui;
};
#endif // HELLOCOSBROWSER_H
