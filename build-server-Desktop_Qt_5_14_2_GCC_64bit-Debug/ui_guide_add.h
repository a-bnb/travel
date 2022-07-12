/********************************************************************************
** Form generated from reading UI file 'guide_add.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDE_ADD_H
#define UI_GUIDE_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_guide_add
{
public:
    QLabel *label_4;
    QPushButton *signup_btn;
    QLineEdit *Name_text;
    QPushButton *exit_btn;
    QLineEdit *charger_text;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *state_box;
    QPushButton *check_btn;

    void setupUi(QDialog *guide_add)
    {
        if (guide_add->objectName().isEmpty())
            guide_add->setObjectName(QString::fromUtf8("guide_add"));
        guide_add->resize(720, 420);
        label_4 = new QLabel(guide_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 60, 67, 17));
        signup_btn = new QPushButton(guide_add);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(130, 350, 211, 31));
        Name_text = new QLineEdit(guide_add);
        Name_text->setObjectName(QString::fromUtf8("Name_text"));
        Name_text->setGeometry(QRect(130, 90, 211, 31));
        exit_btn = new QPushButton(guide_add);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(390, 350, 211, 31));
        charger_text = new QLineEdit(guide_add);
        charger_text->setObjectName(QString::fromUtf8("charger_text"));
        charger_text->setGeometry(QRect(130, 170, 211, 31));
        label_5 = new QLabel(guide_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 140, 91, 17));
        label_6 = new QLabel(guide_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 220, 67, 17));
        state_box = new QComboBox(guide_add);
        state_box->addItem(QString());
        state_box->addItem(QString());
        state_box->setObjectName(QString::fromUtf8("state_box"));
        state_box->setGeometry(QRect(130, 250, 211, 25));
        check_btn = new QPushButton(guide_add);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(390, 90, 101, 31));

        retranslateUi(guide_add);

        QMetaObject::connectSlotsByName(guide_add);
    } // setupUi

    void retranslateUi(QDialog *guide_add)
    {
        guide_add->setWindowTitle(QCoreApplication::translate("guide_add", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("guide_add", "Name", nullptr));
        signup_btn->setText(QCoreApplication::translate("guide_add", "\352\260\200\354\235\264\353\223\234 \354\266\224\352\260\200", nullptr));
        exit_btn->setText(QCoreApplication::translate("guide_add", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label_5->setText(QCoreApplication::translate("guide_add", "\353\213\264\353\213\271\352\263\240\352\260\235\353\252\205", nullptr));
        label_6->setText(QCoreApplication::translate("guide_add", "\352\267\274\353\254\264\354\203\201\355\203\234", nullptr));
        state_box->setItemText(0, QCoreApplication::translate("guide_add", "break", nullptr));
        state_box->setItemText(1, QCoreApplication::translate("guide_add", "scheduled", nullptr));

        check_btn->setText(QCoreApplication::translate("guide_add", "ID \354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guide_add: public Ui_guide_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDE_ADD_H
