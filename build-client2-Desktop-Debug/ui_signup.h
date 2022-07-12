/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QPushButton *signup_btn;
    QLineEdit *Name_text;
    QLineEdit *ID_text;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *check_btn;
    QLabel *label_2;
    QLineEdit *PW_text;
    QLineEdit *PW2_text;
    QPushButton *exit_btn;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(720, 420);
        signup_btn = new QPushButton(signup);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(120, 360, 211, 31));
        Name_text = new QLineEdit(signup);
        Name_text->setObjectName(QString::fromUtf8("Name_text"));
        Name_text->setGeometry(QRect(120, 290, 211, 31));
        ID_text = new QLineEdit(signup);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(120, 50, 211, 31));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 67, 17));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 260, 67, 17));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 180, 67, 17));
        check_btn = new QPushButton(signup);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(370, 50, 101, 31));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 67, 17));
        PW_text = new QLineEdit(signup);
        PW_text->setObjectName(QString::fromUtf8("PW_text"));
        PW_text->setGeometry(QRect(120, 130, 211, 31));
        PW2_text = new QLineEdit(signup);
        PW2_text->setObjectName(QString::fromUtf8("PW2_text"));
        PW2_text->setGeometry(QRect(120, 210, 211, 31));
        exit_btn = new QPushButton(signup);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(380, 360, 211, 31));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "Dialog", nullptr));
        signup_btn->setText(QApplication::translate("signup", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        label->setText(QApplication::translate("signup", "ID", nullptr));
        label_4->setText(QApplication::translate("signup", "Name", nullptr));
        label_3->setText(QApplication::translate("signup", "PW check", nullptr));
        check_btn->setText(QApplication::translate("signup", "ID \354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        label_2->setText(QApplication::translate("signup", "PW", nullptr));
        exit_btn->setText(QApplication::translate("signup", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
