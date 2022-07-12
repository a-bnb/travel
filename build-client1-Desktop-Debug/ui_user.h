/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *exit_btn;
    QPushButton *inquiry1;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(879, 572);
        exit_btn = new QPushButton(user);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(440, 520, 400, 41));
        inquiry1 = new QPushButton(user);
        inquiry1->setObjectName(QString::fromUtf8("inquiry1"));
        inquiry1->setGeometry(QRect(30, 520, 400, 41));
        textBrowser = new QTextBrowser(user);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 811, 421));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QApplication::translate("user", "Dialog", nullptr));
        exit_btn->setText(QApplication::translate("user", "\353\202\230\352\260\200\352\270\260", nullptr));
        inquiry1->setText(QApplication::translate("user", "\354\241\260\355\232\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
