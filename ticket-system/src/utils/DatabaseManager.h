#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>

class DatabaseManager {
public:
    DatabaseManager();
    ~DatabaseManager();

    bool connectToDatabase(const QString& dbName);
    void disconnectFromDatabase();
    bool executeQuery(const QString& query);
    QVariant getQueryResult(const QString& query);

private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H