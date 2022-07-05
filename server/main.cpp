#include "user.h"
#include "database.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    Database db;
    db.database_init();
    QApplication a(argc, argv);
    user u(db);

    u.show();
    return u.exec();
}
