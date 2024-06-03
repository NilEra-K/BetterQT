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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloCOSBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnHello;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QProgressBar *progressBar;

    void setupUi(QWidget *HelloCOSBrowser)
    {
        if (HelloCOSBrowser->objectName().isEmpty())
            HelloCOSBrowser->setObjectName(QString::fromUtf8("HelloCOSBrowser"));
        HelloCOSBrowser->resize(404, 128);
        verticalLayout = new QVBoxLayout(HelloCOSBrowser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnHello = new QPushButton(HelloCOSBrowser);
        btnHello->setObjectName(QString::fromUtf8("btnHello"));

        verticalLayout->addWidget(btnHello);

        groupBox = new QGroupBox(HelloCOSBrowser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addWidget(groupBox);


        retranslateUi(HelloCOSBrowser);

        QMetaObject::connectSlotsByName(HelloCOSBrowser);
    } // setupUi

    void retranslateUi(QWidget *HelloCOSBrowser)
    {
        HelloCOSBrowser->setWindowTitle(QCoreApplication::translate("HelloCOSBrowser", "HelloCOSBrowser", nullptr));
        btnHello->setText(QCoreApplication::translate("HelloCOSBrowser", "\344\275\240\345\245\275", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HelloCOSBrowser", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloCOSBrowser: public Ui_HelloCOSBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOCOSBROWSER_H
