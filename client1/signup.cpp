#include "signup.h"
#include "ui_signup.h"

signup::signup(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    this->db = db;
    check = false;

    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}


void signup::on_check_btn_clicked()
{
    QString id = ui->ID_text->text();
    if(id == "")
    {
        QMessageBox::information(this, "error", "공백");
        return;
    }
    sprintf(query, "SELECT * FROM user WHERE userid = '%s'", id.toLocal8Bit().data());
    if(mysql_query(&db.conn,query)!=0)
    {
        check = true;
        QMessageBox::information(this, "OK", "통과");
    }
    else
    {
        QMessageBox::information(this, "error", "중복");
    }
}

void signup::on_signup_btn_clicked()
{
    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }
    QString id = ui->ID_text->text();
    QString pw = ui->PW_text->text();
    QString name = ui->Name_text->text();
    if(pw == "" || name == "")
        QMessageBox::information(this, "error", "공백");
    else
    {
        if(ui->PW_text->text() != ui->PW2_text->text())
            QMessageBox::information(this, "error", "비밀번호 불일치");
        else
        {
            db.sql_result = mysql_store_result(&db.conn);
            sprintf(query, "INSERT INTO user(userid, userpw, username) VALUES('%s','%s','%s')",
                    id.toLocal8Bit().data(), pw.toLocal8Bit().data(), name.toLocal8Bit().data());
            if(mysql_query(&db.conn,query)!=0)
            {
                QMessageBox::information(this, "error", "데이터베이스 접근 오류");
                fprintf(stderr, "Failed to connect to databases: Error: %s\n",
                mysql_error(&db.conn));
            }
            else
            {
                QMessageBox::information(this, "축", "축) 가입");
                mysql_free_result(db.sql_result);
                this->close();
            }

        }
    }

}

void signup::on_exit_btn_clicked()
{
    this->close();
}
