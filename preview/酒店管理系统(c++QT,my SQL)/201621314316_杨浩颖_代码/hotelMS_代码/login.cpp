#include "login.h"
#include "Ui_login.h"
#include<QtGui>
#include<connectionsql.h>
#include<baseui.h>
#include<Ui_baseUi.h>
#include<QWidget>
#include<regist.h>
#include<QSqlDatabase>

login::login(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    connect(pushButton,SIGNAL(clicked()),this,SLOT(log()));
    connect(pushButton_2,SIGNAL(clicked()),this,SLOT(registWindow()));
    lineEdit_2->setEchoMode(QLineEdit::Password);

}


void login::log()
{
             QString strU = lineEdit->text();
             QString strP = lineEdit_2->text();
             if(strU==NULL)
                 QMessageBox::warning(this,"warning",trUtf8("用户名不能为空！"));
             else
                 if(strP==NULL)
                     QMessageBox::warning(this,"waring",trUtf8("请输入密码！"));
             //验证帐密!
             connectionSql s;
             QSqlQuery query(s.db);
             query.exec("SELECT * FROM Users WHERE Users_name = '"+strU+"' and Users_password = '"+strP+"'");

             if(query.next()){
                 this->close();
                 baseUi h(query.value(0).toString());
                 h.db = s.db;

                 h.exec();
             }
             else
                 QMessageBox::critical(this,"fail",trUtf8("登陆失败"));

                         //进入主菜单
             qDebug()<<"select * from Users";

}
void login::registWindow()
{
        regist re(this);
        re.exec();
}







