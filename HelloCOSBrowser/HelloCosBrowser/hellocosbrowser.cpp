#include "hellocosbrowser.h"
#include "ui_hellocosbrowser.h"

HelloCOSBrowser::HelloCOSBrowser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HelloCOSBrowser)
{
    ui->setupUi(this);
}

HelloCOSBrowser::~HelloCOSBrowser()
{
    delete ui;
}

void HelloCOSBrowser::showDialog()
{

}

