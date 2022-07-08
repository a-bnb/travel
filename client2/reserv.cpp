#include "reserv.h"
#include "ui_reserv.h"
#include "reserv_add.h"

reserv::reserv(QString id, Database dbs,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv),
    db(dbs),
    id(id)
{
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

reserv::~reserv()
{
    delete ui;
}


void reserv::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->reservtable->clearContents();
    sprintf(query, "SELECT * FROM reservation WHERE client_id = '%s'", id.toLocal8Bit().data());
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
    reserv_add r(false, id, db);
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
    reserv_add r(true, id, db);
    r.setModal(true);
    r.exec();
    this->on_refresh_btn_clicked();
}

void reserv::on_reservtable_itemClicked()
{
    check = true;
}
