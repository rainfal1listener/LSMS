#include<regist.h>
#include<Ui_regist.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>
regist::regist(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    connect(pushButton,SIGNAL(clicked()),this,SLOT(registButton()));
}
void regist::registButton(){
    QString strU = lineEdit->text();
    QString strP = lineEdit_2->text();
    QString strRP = lineEdit_3->text();

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    if(strU==NULL)
        QMessageBox::warning(NULL,"warning",codec->toUnicode("请输入员工号"));
    else
        if(strP==NULL)
            QMessageBox::warning(NULL,"waring",codec->toUnicode("请输入密码！"));
        else
            if(strRP==NULL)
                QMessageBox::warning(NULL,"waring",codec->toUnicode("请确认密码！"));

    connectionSql s;
    QSqlQuery query(s.db);
    qDebug()<<"INSERT INTO users(Users_name,Users_password) "
              "values('"+strU+"','"+strP+"')";
    if(query.exec("INSERT INTO users(Users_name,Users_password) "
                  "values('"+strU+"','"+strP+"')")){
        QMessageBox::information(this,codec->toUnicode("注册提示"),codec->toUnicode("注册成功"),QMessageBox::Yes);
    }

}
