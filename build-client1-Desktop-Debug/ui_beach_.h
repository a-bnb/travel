/********************************************************************************
** Form generated from reading UI file 'beach_.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEACH__H
#define UI_BEACH__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_beach_
{
public:
    QPushButton *pushButton;
    QPushButton *exit_btn;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *beach_)
    {
        if (beach_->objectName().isEmpty())
            beach_->setObjectName(QString::fromUtf8("beach_"));
        beach_->resize(875, 600);
        pushButton = new QPushButton(beach_);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 520, 400, 41));
        exit_btn = new QPushButton(beach_);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(440, 520, 400, 41));
        textBrowser = new QTextBrowser(beach_);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 60, 811, 421));

        retranslateUi(beach_);

        QMetaObject::connectSlotsByName(beach_);
    } // setupUi

    void retranslateUi(QDialog *beach_)
    {
        beach_->setWindowTitle(QApplication::translate("beach_", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("beach_", "\354\241\260\355\232\214", nullptr));
        exit_btn->setText(QApplication::translate("beach_", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beach_: public Ui_beach_ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEACH__H
