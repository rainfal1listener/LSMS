#include<clean.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>

clean::clean(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    query.exec(trUtf8("select room_num "
                      "from room "
                      "where  room_status = '脏房'"));
    while(query.next()){
        t++;
        comboBox->addItem(query.value(0).toString());
    }

    connect(pushButton,SIGNAL(clicked()),this,SLOT(submit()));


}
void clean::submit(){
    QString cleanRoom = comboBox->currentText();
    QSqlQuery query(db);
    query.exec("update room set room_status = '"+trUtf8("空房")+"' where room_num = '"+cleanRoom+"'");
    for(int i=0;i<t;i++){
    comboBox->removeItem(i);
    }
    query.exec(trUtf8("select room_num "
                      "from room "
                      "where  room_status = '脏房'"));
    while(query.next()){
        t++;
        comboBox->addItem(query.value(0).toString());
    }
    query.exec("insert into checkIn(tourist_num,room_num,tip) values('34','"+cleanRoom+"','"+trUtf8("房扫请联系房扫员")+"')");
    QMessageBox::information(this,"succeed",trUtf8("该房间已设为干净房！"));
}
