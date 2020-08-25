#include<fix.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>

fix::fix(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    query.exec(trUtf8("select room_num "
                      "from room "
                      "where  room_status != '已住房' and room_status != '停用房' "));
    while(query.next()){
        t++;
        comboBox->addItem(query.value(0).toString());
    }

    connect(pushButton,SIGNAL(clicked()),this,SLOT(submit()));
}

void fix::submit(){
    QString fixRoom = comboBox->currentText();
    QSqlQuery query(db);
    query.exec("update room set room_status = '"+trUtf8("停用房")+"' where room_num = '"+fixRoom+"'");
    for(int i=0;i<t;i++){
    comboBox->removeItem(i);
    }
    query.exec(trUtf8("select room_num "
                      "from room "
                      "where  room_status != '已住房' and room_status != '停用房'"));
    while(query.next()){

        comboBox->addItem(query.value(0).toString());
    }
    qDebug()<<"insert into checkIn(tourist_num,room_num,tip) values('3','"+fixRoom+"','"+lineEdit->text()+"')";
    query.exec("insert into checkIn(tourist_num,room_num,tip) values('3','"+fixRoom+"','"+lineEdit->text()+"')");

    QMessageBox::information(this,"succeed",trUtf8("该房间已设停用房！"));
    this->close();
}
