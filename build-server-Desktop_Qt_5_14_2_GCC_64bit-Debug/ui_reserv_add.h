/********************************************************************************
** Form generated from reading UI file 'reserv_add.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERV_ADD_H
#define UI_RESERV_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_reserv_add
{
public:
    QLineEdit *beach_text;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QPushButton *signup_btn;
    QLabel *label_6;
    QLineEdit *lodge_text;
    QLineEdit *guide_text;
    QLineEdit *ID_text;
    QPushButton *exit_btn;
    QLabel *label_7;
    QLineEdit *date_text;

    void setupUi(QDialog *reserv_add)
    {
        if (reserv_add->objectName().isEmpty())
            reserv_add->setObjectName(QString::fromUtf8("reserv_add"));
        reserv_add->resize(720, 420);
        beach_text = new QLineEdit(reserv_add);
        beach_text->setObjectName(QString::fromUtf8("beach_text"));
        beach_text->setGeometry(QRect(370, 240, 211, 31));
        label_3 = new QLabel(reserv_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 210, 67, 17));
        label_4 = new QLabel(reserv_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 210, 67, 17));
        label = new QLabel(reserv_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 111, 17));
        signup_btn = new QPushButton(reserv_add);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(110, 340, 211, 31));
        label_6 = new QLabel(reserv_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 130, 67, 17));
        lodge_text = new QLineEdit(reserv_add);
        lodge_text->setObjectName(QString::fromUtf8("lodge_text"));
        lodge_text->setGeometry(QRect(110, 240, 211, 31));
        guide_text = new QLineEdit(reserv_add);
        guide_text->setObjectName(QString::fromUtf8("guide_text"));
        guide_text->setGeometry(QRect(370, 160, 211, 31));
        ID_text = new QLineEdit(reserv_add);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(110, 80, 211, 31));
        exit_btn = new QPushButton(reserv_add);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(370, 340, 211, 31));
        label_7 = new QLabel(reserv_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 130, 67, 17));
        date_text = new QLineEdit(reserv_add);
        date_text->setObjectName(QString::fromUtf8("date_text"));
        date_text->setGeometry(QRect(110, 160, 211, 31));

        retranslateUi(reserv_add);

        QMetaObject::connectSlotsByName(reserv_add);
    } // setupUi

    void retranslateUi(QDialog *reserv_add)
    {
        reserv_add->setWindowTitle(QCoreApplication::translate("reserv_add", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("reserv_add", "\354\227\254\355\226\211\354\247\200 \353\252\205", nullptr));
        label_4->setText(QCoreApplication::translate("reserv_add", "\354\210\231\354\206\214 \353\252\205", nullptr));
        label->setText(QCoreApplication::translate("reserv_add", "\352\263\240\352\260\235 ID", nullptr));
        signup_btn->setText(QCoreApplication::translate("reserv_add", "\354\230\210\354\225\275 \354\240\225\353\263\264 \353\223\261\353\241\235", nullptr));
        label_6->setText(QCoreApplication::translate("reserv_add", "\352\260\200\354\235\264\353\223\234\353\252\205", nullptr));
        exit_btn->setText(QCoreApplication::translate("reserv_add", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label_7->setText(QCoreApplication::translate("reserv_add", "\354\230\210\354\225\275\354\235\274\354\236\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reserv_add: public Ui_reserv_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERV_ADD_H
