#include<baseui.h>
#include<Ui_baseUi.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>
#include<login.h>
#include<checkin.h>
#include<changeroom.h>
#include<consumption.h>
#include<checkout.h>
#include<money.h>

baseUi::baseUi(QString adminName,QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    this->adminName = adminName;
    setColour();
    QSqlQuery query(db);
    label_admin->setText(this->adminName);
    connect(pushButton_logOut,SIGNAL(clicked()),this,SLOT(logOut()));
    connect(pushButton_changeRoom,SIGNAL(clicked()),this,SLOT(changeRoomButton()));
    connect(pushButton_checkIn,SIGNAL(clicked()),this,SLOT(checkInButton()));
    connect(pushButton_consumption,SIGNAL(clicked()),this,SLOT(consumptionButton()));
    connect(pushButton_checkOut,SIGNAL(clicked()),this,SLOT(checkOutButton()));
    connect(pushButton_price,SIGNAL(clicked()),this,SLOT(roomPrice()));
    connect(pushButton_clean,SIGNAL(clicked()),this,SLOT(cleanButton()));
    connect(pushButton_fix,SIGNAL(clicked()),this,SLOT(fixButton()));
    connect(pushButton_order,SIGNAL(clicked()),this,SLOT(checkInButton()));
    connect(pushButton_count,SIGNAL(clicked()),this,SLOT(handover()));
    query.exec(trUtf8("select count(*) from room where room_status = '空房'"));
    query.next();
    QString emptyRoomNum = query.value(0).toString();
    empty_room_number->display(emptyRoomNum);
    query.exec("select count(*) from room");
    query.next();
    qDebug()<<emptyRoomNum.toInt()/query.value(0).toInt();
    empty_room_bar->setValue(emptyRoomNum.toInt()*100/query.value(0).toInt());


    for(int i=0;i<23;i++){
        loop(i);
        connect(temp,SIGNAL(clicked()),this,SLOT(baseInform()));
    }
}

void baseUi::logOut()//注销按钮
{
    this->close();
    login l;
    l.exec();
}

void baseUi::baseInform()//房间基本信息表
{
    QPushButton *t = qobject_cast<QPushButton *>(sender());

    QSqlQuery query(db);
    qDebug()<<"select tourist_name,room_type,checkIn_time,checkOut_time,organization,tip "
              "from checkIn,room,tourist "
              "where CheckIn.room_num = room.room_num and checkIn.tourist_num = tourist.tourist_num and checkIn.room_num = '"+t->text()+"'";
    query.exec("select tourist_name,room_type,checkIn_time,checkOut_time,organization,tip "
               "from checkIn,room,tourist "
               "where CheckIn.room_num = room.room_num and checkIn.tourist_num = tourist.tourist_num and checkIn.room_num = '"+t->text()+"'");
    query.next();


    label_tourist_name->setText(query.value(0).toString());
    label_roomType->setText(query.value(1).toString());
    label_checkIn_time->setText(query.value(2).toString());
    label_checkOut->setText(query.value(3).toString());
    label_group->setText(query.value(4).toString());
    label_15->setText(query.value(5).toString());

}
void baseUi::checkInButton(){
    checkIn c(this);
    c.exec();
    setColour();
}
void baseUi:: changeRoomButton(){
    changeRoom c(this);
    c.exec();
    setColour();
}

void baseUi::consumptionButton(){
    consumption c(this);
    c.exec();
}
void baseUi::checkOutButton(){
    checkOut c(this);
    c.exec();
    setColour();
}

void baseUi::roomPrice(){
    room_price r(this);
    r.exec();
}

void baseUi::cleanButton(){
    clean c(this);
    c.exec();
    setColour();
}
void baseUi::fixButton(){
    fix f(this);
    f.exec();
    setColour();
}

void baseUi::handover(){
    money m(adminName);
    m.exec();
}

void baseUi::loop(int i){
    switch(i){
    case 0:
        temp = pushButton_101;
        break;
    case 1:
        temp = pushButton_102;
        break;
    case 2:
        temp = pushButton_103;
        break;
    case 3:
        temp = pushButton_104;
        break;
    case 4:
        temp = pushButton_105;
        break;
    case 5:
        temp = pushButton_106;
        break;
    case 6:
        temp = pushButton_107;
        break;
    case 7:
        temp = pushButton_108;
        break;
    case 8:
        temp = pushButton_201;
        break;
    case 9:
        temp = pushButton_202;
        break;
    case 10:
        temp = pushButton_203;
        break;
    case 11:
        temp = pushButton_204;
        break;
    case 12:
        temp = pushButton_205;
        break;
    case 13:
        temp = pushButton_206;
        break;
    case 14:
        temp = pushButton_207;
        break;
    case 15:
        temp = pushButton_208;
        break;
    case 16:
        temp = pushButton_209;
        break;
    case 17:
        temp = pushButton_301;
        break;
    case 18:
        temp = pushButton_302;
        break;
    case 19:
        temp = pushButton_303;
        break;
    case 20:
        temp = pushButton_304;
        break;
    case 21:
        temp = pushButton_305;
        break;
    case 22:
        temp = pushButton_306;
        break;
    }
}



void baseUi::setColour(){
    QSqlQuery query(db);
    qDebug()<<"select room_status from room";
    query.exec("select room_status from room");
    int c = -1;


    while(query.next()){
        c++;
        loop(c);
        if(query.value(0).toString()==trUtf8("空房                "))
           temp->setStyleSheet("background-color: rgb(170, 255, 127);");
        else
            if(query.value(0).toString()==trUtf8("已住房              "))
              temp->setStyleSheet("background-color: rgb(255, 255, 127);");
            else
                if(query.value(0).toString()==trUtf8("脏房                "))
                    temp->setStyleSheet("background-color: rgb(120, 120, 120);");
                else
                    if(query.value(0).toString()==trUtf8("停用房              ")){
                        temp->setStyleSheet("background-color: rgb(255, 106, 93);");
                        //记得添加停用原因
                    }
                    else
                        if(query.value(0).toString()==trUtf8("预定房              "))
                            temp->setStyleSheet("background-color: rgb(85, 170, 255);");

    }


}
