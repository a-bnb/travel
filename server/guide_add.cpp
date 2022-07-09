#include "guide_add.h"
#include "ui_guide_add.h"
#include <QDebug>

guide_add::guide_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guide_add),
    db(dbs)
{
    ui->setupUi(this);
    this->g_id = "";

}
guide_add::guide_add(QString id, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guide_add),
    db(dbs),
    g_id(id)
{
    ui->setupUi(this);
    edit_set();

}

guide_add::~guide_add()
{
    delete ui;
}


void guide_add::edit_set()
{
    sprintf(query, "SELECT guidename, charger, guidestate FROM guide WHERE guidenum = %s", g_id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() != 0)
    {
        sql_query.next();
        ui->Name_text->setText(sql_query.value(0).toString());
        f_name = sql_query.value(0).toString();
        ui->charger_text->setText(sql_query.value(1).toString());
        ui->state_box->setCurrentText(sql_query.value(2).toString());
        ui->signup_btn->setText("정보 수정");
    }
    else
    {
        this->close();
    }
}

void guide_add::on_signup_btn_clicked()
{

    QString name = ui->Name_text->text();
    QString charger = ui->charger_text->text();
    QString state = ui->state_box->currentText();
    if(charger == "")
        charger = "None";
    if(f_name == name)
        check=true;

    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }
    if(g_id=="")
    {
        sprintf(query, "INSERT INTO guide(guidename, guidestate, charger) VALUES('%s', '%s', '%s')",
                name.toLocal8Bit().data(), state.toLocal8Bit().data(), charger.toLocal8Bit().data());
    }
    else
    {
        sprintf(query, "UPDATE guide SET guidename = '%s', guidestate='%s', charger='%s' where guidenum=%s",
                name.toLocal8Bit().data(), state.toLocal8Bit().data(), charger.toLocal8Bit().data(), g_id.toLocal8Bit().data());
    }
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
    }
    else
    {
        QMessageBox::information(this,"message", ui->signup_btn->text()+" 완료");
        this->close();
    }
}

void guide_add::on_exit_btn_clicked()
{
    this->close();
}

void guide_add::on_check_btn_clicked()
{
    QString name = ui->Name_text->text();
    if(name == "")
    {
        QMessageBox::information(this, "error", "공백");
        return;
    }
    sprintf(query, "SELECT * FROM guide WHERE guidename = '%s'", name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() == 0)
    {
        check = true;
        QMessageBox::information(this, "OK", "통과");
    }
    else
    {
        QMessageBox::information(this, "error", "중복");
    }
}
