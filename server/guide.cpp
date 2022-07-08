#include "guide.h"
#include "ui_guide.h"
#include "reserv.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"
#include "guide_add.h"

guide::guide(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guide)
{
    this->db = db;
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

guide::~guide()
{
    delete ui;
}

void guide::on_reserv_btn_clicked()
{
    this->close();
    reserv reserv(db);
    reserv.setModal(true);
    reserv.exec();
    this->show();
}

void guide::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void guide::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void guide::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void guide::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}

void guide::on_refresh_btn_clicked()
{
    int i, line=0;
    ui->guidetable->clearContents();
    QString temp;
    sprintf(query, "SELECT guidenum, guidename, charger, guidestate FROM guide");
    sql_query.exec(QString::fromLocal8Bit(query));
    int column = sql_query.record().count();
    ui->guidetable->setRowCount(sql_query.size());
    ui->guidetable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                ui->guidetable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->guidetable->show();
    }
}

void guide::on_add_btn_clicked()
{
    guide_add g(db);
    g.setModal(true);
    g.exec();
    this->on_refresh_btn_clicked();
}

void guide::on_remove_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->guidetable->currentRow();
    else
        return;

    QString id = ui->guidetable->takeItem(row, 0)->text();

    sprintf(query, "DELETE FROM guide WHERE guidenum='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        ui->guidetable->removeRow(row);
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
    check = false;
}

void guide::on_guidetable_itemClicked()
{
    check=true;
}

void guide::on_edit_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->guidetable->currentRow();
    else
        return;

    QString id = ui->guidetable->takeItem(row, 0)->text();
    check = false;
    guide_add g(id, db);
    g.setModal(true);
    g.exec();
    this->on_refresh_btn_clicked();
}
