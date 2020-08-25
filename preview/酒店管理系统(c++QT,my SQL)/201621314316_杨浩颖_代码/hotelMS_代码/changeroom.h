#ifndef CHANGEROOM
#define CHANGEROOM
#include<ui_changeroom.h>
#include<QSqlDatabase>
#include<QDialog>


class changeRoom: public QDialog  ,public Ui::changeRoom
{
    Q_OBJECT

public:
    QSqlDatabase db;
    changeRoom(QDialog *parent=0);
    int rowNum;


public slots:
    void selectIn();//选择要换出的房间
    void selectOut();//选择要换入的房间
//    void cost();
    void submit();




};
#endif // CHANGEROOM

