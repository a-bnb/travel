/********************************************************************************
** Form generated from reading UI file 'user_add.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ADD_H
#define UI_USER_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_user_add
{
public:
    QLabel *label;
    QPushButton *check_btn;
    QLineEdit *PW_text;
    QPushButton *signup_btn;
    QLineEdit *ID_text;
    QLineEdit *PW2_text;
    QLabel *label_4;
    QPushButton *exit_btn;
    QLineEdit *Name_text;
    QLabel *label_3;
    QLabel *label_2;
    QCheckBox *VIP_Check;

    void setupUi(QDialog *user_add)
    {
        if (user_add->objectName().isEmpty())
            user_add->setObjectName(QString::fromUtf8("user_add"));
        user_add->resize(720, 420);
        label = new QLabel(user_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 67, 17));
        check_btn = new QPushButton(user_add);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(390, 40, 101, 31));
        PW_text = new QLineEdit(user_add);
        PW_text->setObjectName(QString::fromUtf8("PW_text"));
        PW_text->setGeometry(QRect(140, 120, 211, 31));
        signup_btn = new QPushButton(user_add);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(140, 350, 211, 31));
        ID_text = new QLineEdit(user_add);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(140, 40, 211, 31));
        PW2_text = new QLineEdit(user_add);
        PW2_text->setObjectName(QString::fromUtf8("PW2_text"));
        PW2_text->setGeometry(QRect(140, 200, 211, 31));
        label_4 = new QLabel(user_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 250, 67, 17));
        exit_btn = new QPushButton(user_add);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(400, 350, 211, 31));
        Name_text = new QLineEdit(user_add);
        Name_text->setObjectName(QString::fromUtf8("Name_text"));
        Name_text->setGeometry(QRect(140, 280, 211, 31));
        label_3 = new QLabel(user_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 170, 67, 17));
        label_2 = new QLabel(user_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 90, 67, 17));
        VIP_Check = new QCheckBox(user_add);
        VIP_Check->setObjectName(QString::fromUtf8("VIP_Check"));
        VIP_Check->setGeometry(QRect(390, 280, 92, 23));

        retranslateUi(user_add);

        QMetaObject::connectSlotsByName(user_add);
    } // setupUi

    void retranslateUi(QDialog *user_add)
    {
        user_add->setWindowTitle(QCoreApplication::translate("user_add", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("user_add", "ID", nullptr));
        check_btn->setText(QCoreApplication::translate("user_add", "ID \354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        signup_btn->setText(QCoreApplication::translate("user_add", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        label_4->setText(QCoreApplication::translate("user_add", "Name", nullptr));
        exit_btn->setText(QCoreApplication::translate("user_add", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label_3->setText(QCoreApplication::translate("user_add", "PW check", nullptr));
        label_2->setText(QCoreApplication::translate("user_add", "PW", nullptr));
        VIP_Check->setText(QCoreApplication::translate("user_add", "VIP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_add: public Ui_user_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ADD_H
