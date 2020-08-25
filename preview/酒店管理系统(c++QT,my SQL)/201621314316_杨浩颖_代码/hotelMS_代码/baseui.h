#ifndef BASEUI
#define BASEUI
#include<Ui_baseUi.h>
#include<QSqlDatabase>
#include<ui_changeroom.h>
#include<Ui_checkout.h>
#include<roomprice.h>
#include<clean.h>
#include<fix.h>

class baseUi : public QDialog,public Ui::baseUi
{
    Q_OBJECT

public:
    QSqlDatabase db;
     baseUi(QString adminName, QDialog *parent=0);
     QString adminName;
     QPushButton *temp = new QPushButton;//遍历房间的2个参数

     void setColour();//设置房间的颜色随房态的变化而变化
     void loop(int i);//遍历每个房间
     QString tt;

public slots:
    void logOut();//注销按钮

    void baseInform();//房间基本信息表





//    void orderButton();//预定按钮
    void checkInButton();//入住按钮
    void changeRoomButton();//换房按钮
    void checkOutButton();//退房按钮
    void consumptionButton();//消费按钮
    void roomPrice();//房价查询按钮
    void cleanButton();
    void fixButton();
    void handover();


};
#endif // BASEUI

