#include <QSqlDatabase>
#include <QDebug>

bool connectToDB() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("your_db");
    db.setUserName("your_user");
    db.setPassword("your_password");

    if (!db.open()) {
        qDebug() << "Failed to connect:" << db.lastError().text();
        return false;
    }
    qDebug() << "Database connected.";
    return true;
}
