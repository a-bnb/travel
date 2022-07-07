#include "guide_add.h"
#include "ui_guide_add.h"
#include <QDebug>

guide_add::guide_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guide_add),
    db(dbs)
{
    ui->setupUi(this);
}

guide_add::~guide_add()
{
    delete ui;
}

void guide_add::on_signup_btn_clicked()
{

    QString name = ui->Name_text->text();
    char state[100] = "break";
    char charger[100] = "None";
    sprintf(query, "INSERT INTO guide(guidename, guidestate, charger) VALUES('%s', '%s', '%s')",
            name.toLocal8Bit().data(), state, charger);
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
    }
    else
    {
        QMessageBox::information(this,"message","가이드 추가완료");
        this->close();
    }
}

void guide_add::on_exit_btn_clicked()
{
    this->close();
}
