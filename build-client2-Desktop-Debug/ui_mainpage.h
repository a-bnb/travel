/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QPushButton *reserv_btn;
    QPushButton *user_btn;
    QPushButton *exit_btn;

    void setupUi(QDialog *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(720, 420);
        reserv_btn = new QPushButton(mainpage);
        reserv_btn->setObjectName(QString::fromUtf8("reserv_btn"));
        reserv_btn->setGeometry(QRect(570, 90, 89, 25));
        user_btn = new QPushButton(mainpage);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(570, 160, 89, 25));
        exit_btn = new QPushButton(mainpage);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(570, 230, 89, 25));

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QDialog *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Dialog", nullptr));
        reserv_btn->setText(QApplication::translate("mainpage", "\354\230\210\354\225\275", nullptr));
        user_btn->setText(QApplication::translate("mainpage", "\355\232\214\354\233\220\354\240\225\353\263\264", nullptr));
        exit_btn->setText(QApplication::translate("mainpage", "\353\241\234\352\267\270\354\225\204\354\233\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
