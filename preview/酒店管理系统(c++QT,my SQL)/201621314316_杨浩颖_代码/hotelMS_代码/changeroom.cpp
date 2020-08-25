#include<changeroom.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>

changeRoom::changeRoom(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    tableWidget->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    tableWidget_2->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget_2->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    //使行列头自适应宽度，最后一列将会填充空白部分
    tableWidget->horizontalHeader()->setStretchLastSection(true);
    tableWidget_2->horizontalHeader()->setStretchLastSection(true);
    //找出已住房以供换出
    query.exec(trUtf8("select room.room_num,tourist_name,cost "
                      "from checkIn,tourist,room "
                      "where checkIn.tourist_num = tourist.tourist_num and checkIn.room_num = room.room_num and room_status = '已住房' and isCheckOut = '0'"));


    //插入换出房间表
    int i=0;
    while(query.next()){
        int rowIndex = tableWidget->rowCount();
        tableWidget->insertRow(rowIndex);
        for(int j =0;j<3;j++){

          tableWidget->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));
        }
        i++;

    }

    //找出空房以供住客选择
    qDebug()<<trUtf8("select room_num,room.room_type,type_price"
                     "from room,room_price"
                     "where room.room_type = room_price.room_type and room_status = '空房'");
    query.exec(trUtf8("select room_num,room.room_type,type_price "
                      "from room,room_price "
                      "where room.room_type = room_price.room_type and room_status = '空房'"));


    //插入可选房间表avaliable_table
    int t=0;
    while(query.next()){
        int rowIndex = tableWidget_2->rowCount();
        tableWidget_2->insertRow(rowIndex);
        for(int j =0;j<3;j++){

          tableWidget_2->setItem(t,j,new QTableWidgetItem(query.value(j).toString()));
        }
        t++;

}

    connect(tableWidget,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(selectIn()));
    connect(tableWidget_2,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(selectOut()));
    connect(pushButton_submit,SIGNAL(clicked()),this,SLOT(submit()));

}
void changeRoom::selectIn(){

    int selectRowNum =  tableWidget->currentItem()->row();//得到所选房间行数
    rowNum = selectRowNum;
    label_out->setText(tableWidget->item(selectRowNum,0)->text());//显示所选房间房号




    //计算差价
//    qDebug()<<QString::number(lineEdit_cost->text().toInt()-tableWidget->item(selectRowNum,2)->text().toInt());
//    qDebug()<<tableWidget->item(selectRowNum,2)->text();


//    lineEdit_cost->setText(QString::number(lineEdit_cost->text().toInt()-tableWidget->item(selectRowNum,2)->text().toInt()));
}

void changeRoom::selectOut(){


    int selectRowNum =  tableWidget_2->currentItem()->row();//得到所选房间行数
    label_in->setText(tableWidget_2->item(selectRowNum,0)->text());//显示所选房间房号

    //计算差价
    double t = tableWidget_2->item(selectRowNum,2)->text().toDouble()-tableWidget->item(rowNum,2)->text().toDouble();
    lineEdit_cost->setText(QString::number(t,10,2));


}

void changeRoom::submit(){
    //得到换出房号
    int selectRowNum =  tableWidget->currentItem()->row();
    QString out = tableWidget->item(selectRowNum,0)->text();
    //得到换出房号
    int selectRowNum2 =  tableWidget_2->currentItem()->row();
    QString in = tableWidget_2->item(selectRowNum2,0)->text();

    QSqlQuery query(db);
    //把换房信息放入changeRoomRecord
    qDebug()<<"insert "
              "into changeRoomRecord "
              "values(GETDATE(),'"+out+"','"+in+"','"+lineEdit_cost->text()+"','"+lineEdit_changeRoomReason->text()+"','"+tableWidget->item(selectRowNum,1)->text()+"','1')";
    query.exec("insert "
               "into changeRoomRecord "
               "values(GETDATE(),'"+out+"','"+in+"','"+lineEdit_cost->text()+"','"+lineEdit_changeRoomReason->text()+"','"+tableWidget->item(selectRowNum,1)->text()+"','1')");

    //更新checkIN表的房间号和消费
    double costs = lineEdit_cost->text().toDouble();
    query.exec("select cost from checkIn where room_num = '"+out+"'");
    query.next();
    QString sumCost = QString::number(costs+query.value(0).toDouble(),10,2);
    qDebug()<<"update checkIn "
              "set room_num = '"+in+"',cost = "+sumCost+" "
              "where room_num = '"+out+"'";
    query.exec("update checkIn "
               "set room_num = '"+in+"',cost = "+sumCost+" "
               "where room_num = '"+out+"'");
    //更新房态

    query.exec("update room "
               "set room_status = '"+trUtf8("已住房")+"' "
               "where room_num = '"+in+"'");

    query.exec("update room "
               "set room_status = '"+trUtf8("脏房")+"' "
               "where room_num = '"+out+"'");

    QMessageBox::information(this,"succeed",trUtf8("换房成功"));

    this->close();
}
