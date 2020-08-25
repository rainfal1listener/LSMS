#ifndef LOGINSOLT
#define LOGINSOLT
#include<Ui_login.h>
#include<QtGui>
#include<QMessageBox>
#include<QPalette>
#include<QPainter>
#include<qpixmap.h>
#include<qwidget.h>
#include<QTextCodec>
#include"connectionsql.h"
#include<QSQLError>
#include<QSqlQuery>


class login : public QDialog,public Ui::Dialog
{
    Q_OBJECT

public:
     login(QDialog *parent=0);
     QString adminName;

public slots:
     void log();//登陆按钮槽
     void registWindow();//打开注册窗口槽

};
#endif // LOGINSOLT

