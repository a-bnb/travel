/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QPushButton *exit_btn;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *PW_text;
    QLineEdit *ID_text;
    QPushButton *login_btn;
    QPushButton *signup_btn;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(800, 600);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(270, 400, 211, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 190, 67, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 120, 67, 17));
        PW_text = new QLineEdit(centralwidget);
        PW_text->setObjectName(QString::fromUtf8("PW_text"));
        PW_text->setGeometry(QRect(270, 220, 211, 31));
        ID_text = new QLineEdit(centralwidget);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(270, 150, 211, 31));
        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(270, 300, 211, 31));
        signup_btn = new QPushButton(centralwidget);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(270, 350, 211, 31));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        exit_btn->setText(QApplication::translate("login", "\354\242\205\353\243\214", nullptr));
        label_2->setText(QApplication::translate("login", "PW", nullptr));
        label->setText(QApplication::translate("login", "ID", nullptr));
        login_btn->setText(QApplication::translate("login", "\353\241\234\352\267\270\354\235\270", nullptr));
        signup_btn->setText(QApplication::translate("login", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
