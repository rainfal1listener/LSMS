#include<checkout.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>

checkOut::checkOut(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    tableWidget->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    tableWidget_2->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget_2->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    //使行列头自适应宽度，最后一列将会填充空白部分

    //找出已住房以供换出
    query.exec(trUtf8("select room.room_num,tourist_name,checkOut_time "
                      "from checkIn,tourist,room "
                      "where checkIn.tourist_num = tourist.tourist_num and checkIn.room_num = room.room_num and room_status = '已住房'"));


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



    connect(tableWidget,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(select()));
//    connect(tableWidget_2,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(selectOut()));
    connect(pushButton,SIGNAL(clicked()),this,SLOT(submit()));

}
void checkOut::select(){
    QSqlQuery query(db);
    //找出已住房以供退房
    qDebug()<<"select room_num,consumption,num,sum from consumptionRecord where room_num =  '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"'";
    query.exec("select room_num,consumption,num,sum from consumptionRecord where room_num =  '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"'");


    //插入待退房间表
    int t=0;
    while(query.next()){
        int rowIndex = tableWidget_2->rowCount();
        tableWidget_2->insertRow(rowIndex);
        for(int j =0;j<4;j++){
          tableWidget_2->setItem(t,j,new QTableWidgetItem(query.value(j).toString()));
        }
        t++;

    }
    query.exec("select deposit from checkIn where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"' and isCheckOut = '0'");
    query.next();
    QString deposit = query.value(0).toString();
    label_deposit->setText(deposit);
    query.exec("select cost from checkIn where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"' and isCheckOut = '0'");
    query.next();
    QString room = query.value(0).toString();
    label_room->setText(room);
    query.exec("select sum(sum) from consumptionRecord where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"'  and isPay = '0'");
    query.next();
    QString con = query.value(0).toString();
    label_consumption->setText(con);
    double debt = deposit.toDouble()-room.toDouble()-con.toDouble();
    lineEdit->setText(QString::number(debt,10,2));
}

void checkOut::submit(){
    lineEdit->setText('-'+lineEdit->text());
   QSqlQuery query(db);
   query.exec("update  checkIn set isCheckOut = '1' where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"' ");
   query.exec("update consumptionRecord set isPay = '1' where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"' ");
   if(comboBox->currentText() == trUtf8("现金"))
       query.exec("insert into money(date,cash) values(getdate(),'"+lineEdit->text()+"')");
   else
        if(comboBox->currentText() == trUtf8("银行卡"))
            query.exec("insert into money(date,credit) values(getdate(),'"+lineEdit->text()+"')");
        else
             if(comboBox->currentText() == trUtf8("微信"))
               query.exec("insert into money(date,wechat) values(getdate(),'"+lineEdit->text()+"')");
             else
                 if(comboBox->currentText() == trUtf8("支付宝"))
                     query.exec("insert into money(date,alipay) values(getdate(),'"+lineEdit->text()+"')");
   query.exec("update moneyRoot set checkIn =  checkIn+"+lineEdit->text()+"");
   query.exec("update room "
              "set room_status = '"+trUtf8("脏房")+"' "
              "where room_num = '"+tableWidget->item(tableWidget->currentRow(),0)->text()+"'");
   QMessageBox::information(this,"succeed",trUtf8("退房成功"));
   this->close();
}
