#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    Database db;
    db.database_init();
    QApplication a(argc, argv);
    login w(db);
    w.move(590, 265);
    w.show();
    return a.exec();
}
