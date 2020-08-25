#include<consumption.h>
#include<QtGui>
#include<connectionsql.h>
#include<QMessageBox>
consumption::consumption(QDialog *parent) :QDialog(parent)
{
    setupUi(this);
    QSqlQuery query(db);
    tableWidget->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    tableWidget_2->setSelectionBehavior ( QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    tableWidget_2->setSelectionMode ( QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    //使行列头自适应宽度，最后一列将会填充空白部分
//    tableWidget->horizontalHeader()->setStretchLastSection(true);
//    tableWidget_2->horizontalHeader()->setStretchLastSection(true);
//     tableWidget_3->horizontalHeader()->setStretchLastSection(true);
    //找出已住房以供选择消费项
    query.exec(trUtf8("select room.room_num,tourist_name "
                      "from checkIn,tourist,room "
                      "where checkIn.tourist_num = tourist.tourist_num and checkIn.room_num = room.room_num and room_status = '已住房' and isCheckOut = '0'" ));


    //插入
    int i=0;
    while(query.next()){
        int rowIndex = tableWidget->rowCount();
        tableWidget->insertRow(rowIndex);
        for(int j =0;j<3;j++){
          tableWidget->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));
        }
        i++;

    }

    //找出消费项
    query.exec(trUtf8("select * "
                      "from consumption "
                      "where stockNum>0"));


    //插入
    int t=0;
    while(query.next()){
        int rowIndex2 = tableWidget_2->rowCount();
        tableWidget_2->insertRow(rowIndex2);
        for(int j =0;j<3;j++){

          tableWidget_2->setItem(t,j,new QTableWidgetItem(query.value(j).toString()));
        }
        t++;
    }

    connect(tableWidget_2,SIGNAL(itemPressed(QTableWidgetItem*)),this,SLOT(add()));
    connect(pushButton,SIGNAL(clicked()),this,SLOT(submit()));
}

void consumption::add(){
    int roomRowNum =  tableWidget->currentItem()->row();//得到所选房间行数
    int consumptionRowNum = tableWidget_2->currentItem()->row();//得到所选消费项行数
    QString roomNum = tableWidget->item(roomRowNum,0)->text();//所选房号
    QString consumptionName = tableWidget_2->item(consumptionRowNum,0)->text();//所选消费项
    QString consumptionStock = tableWidget_2->item(consumptionRowNum,1)->text();//所选消费项库存
    double consumptionPrice = tableWidget_2->item(consumptionRowNum,2)->text().toDouble();//所选消费项单价
    qDebug()<<consumptionStock;
    if(consumptionStock.toInt()<1)//判断库存是否充足
        QMessageBox::warning(this,"fail",trUtf8("库存不足！"));
    else{
        //库存减一
        tableWidget_2->setItem(consumptionRowNum,1,new QTableWidgetItem(QString::number(consumptionStock.toInt()-1)));
        if(f==0){
            f=1;
            int rowIndex = tableWidget_3->rowCount();//插入一行
            tableWidget_3->insertRow(rowIndex);
            tableWidget_3->setItem(tableWidget_3->rowCount()-1,0,new QTableWidgetItem(roomNum));//插入房号
            tableWidget_3->setItem(tableWidget_3->rowCount()-1,1,new QTableWidgetItem(consumptionName));//插入消费项
            tableWidget_3->setItem(tableWidget_3->rowCount()-1,2,new QTableWidgetItem("1"));//插入数量1
            tableWidget_3->setItem(tableWidget_3->rowCount()-1,3,new QTableWidgetItem(QString::number(consumptionPrice,10,2)));//插入总价
        }
        else{
            ff = 0;
            for(int i=0;i<tableWidget_3->rowCount();i++){//逐行查找出对应的消费项
                if(consumptionName==tableWidget_3->item(i,1)->text()){//已有重复项
                    ff = 1;
                    qDebug()<<"tableWidget_3->item(i,1)->text() = "<<tableWidget_3->item(i,1)->text();
                    int newNum = tableWidget_3->item(i,2)->text().toInt()+1;
                    qDebug()<<newNum;
                    tableWidget_3->setItem(i,2,new QTableWidgetItem(QString::number(newNum)));//更新数量
                    double sum = consumptionPrice*newNum;
                     tableWidget_3->setItem(i,3,new QTableWidgetItem(QString::number(sum)));//更新总价
                    break;
                }
            }
            if(ff==0){//插入新的一行
                int rowIndex = tableWidget_3->rowCount();//插入一行
                tableWidget_3->insertRow(rowIndex);
                tableWidget_3->setItem(tableWidget_3->rowCount()-1,0,new QTableWidgetItem(roomNum));//插入房号
                tableWidget_3->setItem(tableWidget_3->rowCount()-1,1,new QTableWidgetItem(consumptionName));//插入消费项
                tableWidget_3->setItem(tableWidget_3->rowCount()-1,2,new QTableWidgetItem("1"));//插入数量1
                tableWidget_3->setItem(tableWidget_3->rowCount()-1,3,new QTableWidgetItem(QString::number(consumptionPrice,10,2)));//插入总价
            }
        }
        sumCost+=consumptionPrice;
        lineEdit_3->setText(QString::number(sumCost));
     }


}

void consumption::submit(){
    QSqlQuery query(db);
    for(int i=0;i<tableWidget_3->rowCount();i++){
        qDebug()<<"update consumption "
                  "set stockNum = '"+tableWidget_2->item(i,1)->text()+"' "
                 " where consumption = '"+tableWidget_3->item(i,1)->text()+"'";
        query.exec("update consumption "
                   "set stockNum = '"+tableWidget_2->item(i,1)->text()+"' "
                  " where consumption = '"+tableWidget_3->item(i,1)->text()+"'");
        qDebug()<<"insert into consumptionRecord values('"+tableWidget->item(tableWidget->currentRow(),1)->text()+"','"+tableWidget->item(tableWidget->currentRow(),0)->text()+"',"
                                                        "'"+tableWidget_3->item(i,1)->text()+"',getdate(),'"+tableWidget_3->item(i,2)->text()+"',"
                                                        "'"+tableWidget_3->item(i,3)->text()+"','0')";
        query.exec("insert into consumptionRecord values('"+tableWidget->item(tableWidget->currentRow(),1)->text()+"','"+tableWidget->item(tableWidget->currentRow(),0)->text()+"',"
                                                         "'"+tableWidget_3->item(i,1)->text()+"',getdate(),'"+tableWidget_3->item(i,2)->text()+"',"
                                                         "'"+tableWidget_3->item(i,3)->text()+"','0')");
    }
    query.exec("update moneyRoot set checkIn =  checkIn+"+lineEdit_3->text()+"");
    QMessageBox::information(this,"succeed",trUtf8("消费录入成功！"));
    this->close();


}
