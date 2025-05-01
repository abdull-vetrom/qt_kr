#include "DatabaseManager.h"
#include <QSqlError>
#include <QDebug>

DatabaseManager::DatabaseManager(const QString& dbName) {
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName(dbName);

    if (!m_database.open()) {
        qDebug() << "Failed to connect to database:" << m_database.lastError().text();
    } else {
        qDebug() << "Connected to database:" << dbName;
    }
}

QSqlDatabase DatabaseManager::getDatabase() const {
    return m_database;
}