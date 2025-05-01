#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QString>

class DatabaseManager {
public:
    explicit DatabaseManager(const QString& dbName); // Объявление конструктора

    QSqlDatabase getDatabase() const;

private:
    QSqlDatabase m_database; // Поле для хранения подключения к базе данных
};

#endif // DATABASEMANAGER_H