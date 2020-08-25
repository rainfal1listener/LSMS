#include "Ui_login.h"
#include <QApplication>
#include<QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include<QTextCodec>
#include"login.h"
#include<iostream>
#include<QWidget>



bool OpenDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    qDebug()<<"ODBC driver?"<<db.isValid();
    QString dsn = QString::fromLocal8Bit("QTDSN");      //数据源名称
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");

    db.setHostName(codec->toUnicode("浩颖的光影精灵"));                        //选择本地主机，127.0.1.1
    db.setDatabaseName(dsn);                            //设置数据源名称
    db.setUserName("sa");                               //登录用户
    db.setPassword("123");                           //密码
    if(!db.open())                                      //打开数据库
    {
//        qDebug()<<db.lastError();
//        QMessageBox::critical(0, QObject::tr("Database error"), db.lastError().text());
        return false;                                   //打开失败
    }
    else
        qDebug()<<"database open success!";
    return true;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if(!OpenDatabase())
        return 1;
//    QSqlQuery query(db);
    login l;
    l.exec();
    return a.exec();
}
