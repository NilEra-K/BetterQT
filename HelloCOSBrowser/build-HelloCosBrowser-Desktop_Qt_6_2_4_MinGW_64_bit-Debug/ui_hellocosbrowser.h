/********************************************************************************
** Form generated from reading UI file 'hellocosbrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOCOSBROWSER_H
#define UI_HELLOCOSBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloCOSBrowser
{
public:
    QPushButton *btnHello;

    void setupUi(QWidget *HelloCOSBrowser)
    {
        if (HelloCOSBrowser->objectName().isEmpty())
            HelloCOSBrowser->setObjectName(QString::fromUtf8("HelloCOSBrowser"));
        HelloCOSBrowser->resize(293, 212);
        btnHello = new QPushButton(HelloCOSBrowser);
        btnHello->setObjectName(QString::fromUtf8("btnHello"));
        btnHello->setGeometry(QRect(60, 100, 93, 29));

        retranslateUi(HelloCOSBrowser);

        QMetaObject::connectSlotsByName(HelloCOSBrowser);
    } // setupUi

    void retranslateUi(QWidget *HelloCOSBrowser)
    {
        HelloCOSBrowser->setWindowTitle(QCoreApplication::translate("HelloCOSBrowser", "HelloCOSBrowser", nullptr));
        btnHello->setText(QCoreApplication::translate("HelloCOSBrowser", "\344\275\240\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloCOSBrowser: public Ui_HelloCOSBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOCOSBROWSER_H
