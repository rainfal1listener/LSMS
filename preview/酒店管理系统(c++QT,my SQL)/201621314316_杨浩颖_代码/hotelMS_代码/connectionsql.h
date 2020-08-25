#ifndef CONNECTIONSQL_H
#define CONNECTIONSQL_H
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include<QTextCodec>
#include<QSQLError>
#include<QSqlQuery>

class connectionSql
{
public:
    connectionSql();
    QSqlDatabase db;
};

#endif // CONNECTIONSQL_H
