#include "user.h"
#include "ui_user.h"
#include "reserv.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"
#include "user_add.h"


user::user(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    this->db = db;
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

user::~user()
{
    delete ui;
}


void user::on_reserv_btn_clicked()
{
    this->close();
    reserv reserv(db);
    reserv.setModal(true);
    reserv.exec();
    this->show();
}


void user::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void user::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void user::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void user::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}


void user::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->usertable->clearContents();
    sprintf(query, "SELECT userid, username, usertype FROM user");
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->usertable->setRowCount(sql_query.size());
    ui->usertable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                ui->usertable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->usertable->show();

    }
}

void user::on_add_btn_clicked()
{
    user_add user_add(db);
    user_add.setModal(true);
    user_add.exec();
    this->on_refresh_btn_clicked();
}

void user::on_remove_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->usertable->currentRow();
    else
        return;

    QString id = ui->usertable->takeItem(row, 0)->text();
    sprintf(query, "INSERT INTO del_user_log select * FROM user WHERE userid='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "삭제 실패");
        return;
    }
    sprintf(query, "DELETE FROM user WHERE userid='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        ui->usertable->removeRow(row);
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
    check = false;
}

void user::on_del_log_btn_clicked()
{
    int i, column, line=0;
    QMessageBox::information(this, "message", "show deleted users");
    QString temp;
    ui->usertable->clearContents();
    sprintf(query, "SELECT userid, username, usertype FROM del_user_log");
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->usertable->setRowCount(sql_query.size());
    ui->usertable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                ui->usertable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->usertable->show();

    }
    else
    {
        QMessageBox::information(this, "error", "삭제된 유저 데이터를 찾을 수 없습니다");
    }
}

void user::on_usertable_itemClicked()
{
    check=true;
}

void user::on_edit_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->usertable->currentRow();
    else
        return;

    QString id = ui->usertable->takeItem(row, 0)->text();
    check = false;
    user_add u(id, db);
    u.setModal(true);
    u.exec();
    this->on_refresh_btn_clicked();

}
