#include<fix.h>
#include<QtGui>
#include<money.h>
#include<QMessageBox>
#include<connection.h>

money::money(QString admin, QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    query.exec("select getdate()");
    query.last();
    label_thisTime->setText(query.value(0).toString());
    query.exec("select * from money");
    query.next();
    label_lastTime->setText(query.value(1).toString());
    label_admin->setText(admin);
    label_allIncome->setText(QString::number(query.value(1).toDouble()+query.value(2).toDouble()+query.value(3).toDouble()+query.value(4).toDouble(),10,2));
    label_roomIncome->setText(QString::number(query.value(1).toDouble()+query.value(2).toDouble(),10,2));
    label_consumptionIncome->setText(query.value(4).toString());
    label_otherIncome->setText(0);
    label_depositOutcome->setText(query.value(3).toString());
    query.exec("select sum(cash) from money");
    query.next();
    label_cash->setText(query.value(0).toString());
    query.exec("select sum(credit) from money");
    query.next();
    label_creadit->setText(query.value(0).toString());
    query.exec("select sum(wechat) from money");
    query.next();
    label_wechat->setText(query.value(0).toString());
    query.exec("select sum(alipay) from money");
    query.next();
    label_alipay->setText(query.value(0).toString());
    label_all->setText(QString::number(label_cash->text().toDouble()+label_creadit->text().toDouble()+label_wechat->text().toDouble()+label_alipay->text().toDouble(),10,2));
    label_lastCash->setText("0.00");
    label_lastCredit->setText("0.00");
    label_lastWechat->setText("0.00");
    label_lastAlipay->setText("0.00");
    label_addCash->setText(label_cash->text());
    label_addCredit->setText(label_creadit->text());
    label_addWechat->setText(label_wechat->text());
    label_addAlipay->setText(label_alipay->text());
    label_nowCash->setText(QString::number(label_lastCash->text().toDouble()+label_addCash->text().toDouble(),10,2));
    label_nowCredit->setText(QString::number(label_creadit->text().toDouble()+label_addCredit->text().toDouble(),10,2));
    label_nowWechat->setText(QString::number(label_lastWechat->text().toDouble()+label_addWechat->text().toDouble(),10,2));
    label_nowAlipay->setText(QString::number(label_lastAlipay->text().toDouble()+label_addAlipay->text().toDouble(),10,2));




    connect(pushButton,SIGNAL(clicked()),this,SLOT(cancel()));
    connect(pushButton_2,SIGNAL(clicked()),this,SLOT(submit()));



//    connect(pushButton,SIGNAL(clicked()),this,SLOT(submit()));
}
void money::cancel(){
    this->close();
}

void money::submit(){
    QSqlQuery query(db);
    query.exec("delete from money");
    query.exec("update moneyRoot set checkIn = 0,changeRoom = 0,checkOut = 0,consumption = 0");

}
