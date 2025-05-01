#include "DatabaseManager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>

DatabaseManager::DatabaseManager(const QString& dbName) {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
}

bool DatabaseManager::open() {
    if (!db.open()) {
        qDebug() << "Error: Unable to open database" << db.lastError().text();
        return false;
    }
    return true;
}

void DatabaseManager::close() {
    db.close();
}

QSqlQuery DatabaseManager::executeQuery(const QString& queryStr) {
    QSqlQuery query;
    query.prepare(queryStr);
    if (!query.exec()) {
        qDebug() << "Error: Unable to execute query" << query.lastError().text();
    }
    return query;
}

QSqlQuery DatabaseManager::executeQuery(const QString& queryStr, const QVariantList& params) {
    QSqlQuery query;
    query.prepare(queryStr);
    for (const QVariant& param : params) {
        query.addBindValue(param);
    }
    if (!query.exec()) {
        qDebug() << "Error: Unable to execute query" << query.lastError().text();
    }
    return query;
}