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
    QPushButton *beachPush;
    QPushButton *userPush;

    void setupUi(QDialog *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(703, 466);
        beachPush = new QPushButton(mainpage);
        beachPush->setObjectName(QString::fromUtf8("beachPush"));
        beachPush->setGeometry(QRect(20, 20, 300, 430));
        userPush = new QPushButton(mainpage);
        userPush->setObjectName(QString::fromUtf8("userPush"));
        userPush->setGeometry(QRect(380, 20, 300, 430));

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QDialog *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Dialog", nullptr));
        beachPush->setText(QApplication::translate("mainpage", "\352\264\200\352\264\221\354\247\200 \354\240\225\353\263\264", nullptr));
        userPush->setText(QApplication::translate("mainpage", "\355\232\214\354\233\220\354\240\225\353\263\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
