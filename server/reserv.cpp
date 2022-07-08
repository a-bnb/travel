#include "reserv.h"
#include "ui_reserv.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"
#include "reserv_add.h"

reserv::reserv(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv),
    db(dbs)
{
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

reserv::~reserv()
{
    delete ui;
}

void reserv::on_reserv_btn_clicked()
{
    this->close();
    reserv reserv(db);
    reserv.setModal(true);
    reserv.exec();
    this->show();
}


void reserv::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void reserv::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void reserv::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void reserv::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}


void reserv::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->reservtable->clearContents();
    sprintf(query, "SELECT * FROM reservation");
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->reservtable->setRowCount(sql_query.size());
    ui->reservtable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                if(sql_query.value(i) == "")
                    sql_query.value(i) = "0";
                ui->reservtable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->reservtable->show();
    }
}

void reserv::on_add_btn_clicked()
{
    reserv_add r(db);
    r.setModal(true);
    r.exec();
    this->on_refresh_btn_clicked();
}

void reserv::on_remove_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->reservtable->currentRow();
    else
        return;

    QString id = ui->reservtable->takeItem(row, 0)->text();
    sprintf(query, "DELETE FROM reservation WHERE reserv_id='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        ui->reservtable->removeRow(row);
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
    check = false;
}

void reserv::on_edit_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->reservtable->currentRow();
    else
        return;

    QString id = ui->reservtable->takeItem(row, 0)->text();
    check = false;
    reserv_add r(id, db);
    r.setModal(true);
    r.exec();
    this->on_refresh_btn_clicked();
}

void reserv::on_reservtable_itemClicked()
{
    check = true;
}
