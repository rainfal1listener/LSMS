/********************************************************************************
** Form generated from reading UI file '��ס�Ǽ�W11236.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef _5165__4F4F__767B__8BB0_W11236_H
#define _5165__4F4F__767B__8BB0_W11236_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkIn
{
public:
    QLabel *label_13;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_sigle;
    QRadioButton *radioButton_group;
    QRadioButton *radioButton_order;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_6;
    QLineEdit *checkIn_id;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *phoneNum;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    QComboBox *checkIn_sex;
    QLabel *label_3;
    QSpinBox *checkIn_num;
    QLineEdit *deposit;
    QLabel *label_10;
    QLineEdit *checkIn_name;
    QLabel *label_11;
    QLineEdit *group;
    QLabel *label_12;
    QDateEdit *checkInTime;
    QLabel *label_8;
    QSpinBox *checkIn_days;
    QLabel *label_15;
    QComboBox *pay_type;
    QDoubleSpinBox *doubleSpinBox_discount;
    QLineEdit *tip;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *avaliable_table;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableWidget *avaliable_table_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_seaRoom;
    QRadioButton *radioButton_nomalRoom;
    QRadioButton *radioButton_europeRoom;
    QRadioButton *radioButton_allStyle;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_oneBed;
    QRadioButton *radioButton_twoBed;
    QRadioButton *radioButton_bigBed;
    QRadioButton *radioButton_allBed;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_serch;
    QPushButton *submit;
    QLabel *label_sum;
    QLabel *label_14;

    void setupUi(QDialog *checkIn)
    {
        if (checkIn->objectName().isEmpty())
            checkIn->setObjectName(QString::fromUtf8("checkIn"));
        checkIn->resize(907, 508);
        label_13 = new QLabel(checkIn);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 170, 45, 16));
        layoutWidget = new QWidget(checkIn);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 851, 157));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_sigle = new QRadioButton(groupBox);
        radioButton_sigle->setObjectName(QString::fromUtf8("radioButton_sigle"));

        horizontalLayout_2->addWidget(radioButton_sigle);

        radioButton_group = new QRadioButton(groupBox);
        radioButton_group->setObjectName(QString::fromUtf8("radioButton_group"));

        horizontalLayout_2->addWidget(radioButton_group);

        radioButton_order = new QRadioButton(groupBox);
        radioButton_order->setObjectName(QString::fromUtf8("radioButton_order"));

        horizontalLayout_2->addWidget(radioButton_order);


        gridLayout->addWidget(groupBox, 3, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 3, 1, 1);

        checkIn_id = new QLineEdit(layoutWidget);
        checkIn_id->setObjectName(QString::fromUtf8("checkIn_id"));

        gridLayout->addWidget(checkIn_id, 1, 4, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 6, 1, 1);

        phoneNum = new QLineEdit(layoutWidget);
        phoneNum->setObjectName(QString::fromUtf8("phoneNum"));

        gridLayout->addWidget(phoneNum, 1, 7, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 6, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        checkIn_sex = new QComboBox(layoutWidget);
        checkIn_sex->setObjectName(QString::fromUtf8("checkIn_sex"));

        gridLayout->addWidget(checkIn_sex, 0, 4, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 6, 1, 1);

        checkIn_num = new QSpinBox(layoutWidget);
        checkIn_num->setObjectName(QString::fromUtf8("checkIn_num"));
        checkIn_num->setContextMenuPolicy(Qt::CustomContextMenu);
        checkIn_num->setValue(1);

        gridLayout->addWidget(checkIn_num, 0, 7, 1, 1);

        deposit = new QLineEdit(layoutWidget);
        deposit->setObjectName(QString::fromUtf8("deposit"));

        gridLayout->addWidget(deposit, 2, 7, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        checkIn_name = new QLineEdit(layoutWidget);
        checkIn_name->setObjectName(QString::fromUtf8("checkIn_name"));

        gridLayout->addWidget(checkIn_name, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        group = new QLineEdit(layoutWidget);
        group->setObjectName(QString::fromUtf8("group"));

        gridLayout->addWidget(group, 4, 1, 1, 3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 3, 1, 1);

        checkInTime = new QDateEdit(layoutWidget);
        checkInTime->setObjectName(QString::fromUtf8("checkInTime"));
        checkInTime->setDateTime(QDateTime(QDate(2018, 7, 4), QTime(0, 0, 0)));

        gridLayout->addWidget(checkInTime, 3, 4, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 6, 1, 1);

        checkIn_days = new QSpinBox(layoutWidget);
        checkIn_days->setObjectName(QString::fromUtf8("checkIn_days"));
        checkIn_days->setContextMenuPolicy(Qt::CustomContextMenu);
        checkIn_days->setValue(1);

        gridLayout->addWidget(checkIn_days, 3, 7, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        pay_type = new QComboBox(layoutWidget);
        pay_type->setObjectName(QString::fromUtf8("pay_type"));

        gridLayout->addWidget(pay_type, 2, 1, 1, 1);

        doubleSpinBox_discount = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_discount->setObjectName(QString::fromUtf8("doubleSpinBox_discount"));
        doubleSpinBox_discount->setValue(10);

        gridLayout->addWidget(doubleSpinBox_discount, 2, 4, 1, 1);

        tip = new QLineEdit(checkIn);
        tip->setObjectName(QString::fromUtf8("tip"));
        tip->setGeometry(QRect(100, 170, 771, 21));
        tabWidget = new QTabWidget(checkIn);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 210, 321, 281));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\271\274\345\234\206\";"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        avaliable_table = new QTableWidget(tab_2);
        if (avaliable_table->columnCount() < 3)
            avaliable_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        avaliable_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        avaliable_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        avaliable_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        avaliable_table->setObjectName(QString::fromUtf8("avaliable_table"));
        avaliable_table->setGeometry(QRect(0, 0, 321, 251));
        avaliable_table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(checkIn);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(350, 210, 321, 281));
        tabWidget_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\271\274\345\234\206\";"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        avaliable_table_2 = new QTableWidget(tab_3);
        if (avaliable_table_2->columnCount() < 3)
            avaliable_table_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        avaliable_table_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        avaliable_table_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        avaliable_table_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        avaliable_table_2->setObjectName(QString::fromUtf8("avaliable_table_2"));
        avaliable_table_2->setGeometry(QRect(0, 0, 321, 251));
        avaliable_table_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        avaliable_table_2->verticalHeader()->setVisible(false);
        tabWidget_2->addTab(tab_3, QString());
        layoutWidget1 = new QWidget(checkIn);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(checkIn);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(checkIn);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(checkIn);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(691, 229, 201, 171));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_2->setFlat(true);
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 20, 117, 151));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_seaRoom = new QRadioButton(layoutWidget3);
        radioButton_seaRoom->setObjectName(QString::fromUtf8("radioButton_seaRoom"));

        verticalLayout->addWidget(radioButton_seaRoom);

        radioButton_nomalRoom = new QRadioButton(layoutWidget3);
        radioButton_nomalRoom->setObjectName(QString::fromUtf8("radioButton_nomalRoom"));

        verticalLayout->addWidget(radioButton_nomalRoom);

        radioButton_europeRoom = new QRadioButton(layoutWidget3);
        radioButton_europeRoom->setObjectName(QString::fromUtf8("radioButton_europeRoom"));

        verticalLayout->addWidget(radioButton_europeRoom);

        radioButton_allStyle = new QRadioButton(layoutWidget3);
        radioButton_allStyle->setObjectName(QString::fromUtf8("radioButton_allStyle"));

        verticalLayout->addWidget(radioButton_allStyle);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFlat(true);
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 117, 151));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_oneBed = new QRadioButton(layoutWidget_2);
        radioButton_oneBed->setObjectName(QString::fromUtf8("radioButton_oneBed"));

        verticalLayout_3->addWidget(radioButton_oneBed);

        radioButton_twoBed = new QRadioButton(layoutWidget_2);
        radioButton_twoBed->setObjectName(QString::fromUtf8("radioButton_twoBed"));

        verticalLayout_3->addWidget(radioButton_twoBed);

        radioButton_bigBed = new QRadioButton(layoutWidget_2);
        radioButton_bigBed->setObjectName(QString::fromUtf8("radioButton_bigBed"));

        verticalLayout_3->addWidget(radioButton_bigBed);

        radioButton_allBed = new QRadioButton(layoutWidget_2);
        radioButton_allBed->setObjectName(QString::fromUtf8("radioButton_allBed"));

        verticalLayout_3->addWidget(radioButton_allBed);


        horizontalLayout_5->addWidget(groupBox_3);

        widget2 = new QWidget(checkIn);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(691, 462, 195, 30));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_serch = new QPushButton(widget2);
        pushButton_serch->setObjectName(QString::fromUtf8("pushButton_serch"));

        horizontalLayout_7->addWidget(pushButton_serch);

        submit = new QPushButton(widget2);
        submit->setObjectName(QString::fromUtf8("submit"));

        horizontalLayout_7->addWidget(submit);

        label_sum = new QLabel(checkIn);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));
        label_sum->setGeometry(QRect(820, 420, 72, 16));
        label_14 = new QLabel(checkIn);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(690, 420, 98, 16));
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_13->raise();
        tip->raise();
        tabWidget->raise();
        tabWidget_2->raise();

        retranslateUi(checkIn);

        QMetaObject::connectSlotsByName(checkIn);
    } // setupUi

    void retranslateUi(QDialog *checkIn)
    {
        checkIn->setWindowTitle(QApplication::translate("checkIn", "Dialog", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("checkIn", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        radioButton_sigle->setText(QApplication::translate("checkIn", "\346\225\243\345\256\242", 0, QApplication::UnicodeUTF8));
        radioButton_group->setText(QApplication::translate("checkIn", "\345\233\242\344\275\223", 0, QApplication::UnicodeUTF8));
        radioButton_order->setText(QApplication::translate("checkIn", "\351\242\204\345\256\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("checkIn", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("checkIn", "\350\272\253\344\273\275\350\257\201", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("checkIn", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("checkIn", "\344\275\217\345\256\276\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("checkIn", "\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("checkIn", "\346\212\230\346\211\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("checkIn", "\346\212\274\351\207\221\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("checkIn", "\350\257\201\344\273\266\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        checkIn_sex->clear();
        checkIn_sex->insertItems(0, QStringList()
         << QApplication::translate("checkIn", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkIn", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("checkIn", "\344\272\272\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("checkIn", "\345\256\242\344\272\272\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("checkIn", "\345\215\217\350\256\256\345\215\225\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("checkIn", "\345\205\245\344\275\217\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("checkIn", "\345\205\245\344\275\217\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("checkIn", "\346\224\257\344\273\230\346\226\271\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        pay_type->clear();
        pay_type->insertItems(0, QStringList()
         << QApplication::translate("checkIn", "\347\216\260\351\207\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkIn", "\344\277\241\347\224\250\345\215\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkIn", "\345\276\256\344\277\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkIn", "\346\224\257\344\273\230\345\256\235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkIn", "\346\214\202\350\264\246", 0, QApplication::UnicodeUTF8)
        );
        QTableWidgetItem *___qtablewidgetitem = avaliable_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("checkIn", "\346\210\277\351\227\264\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = avaliable_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("checkIn", "\346\210\277\351\227\264\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = avaliable_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("checkIn", "\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("checkIn", "\345\217\257\351\200\211\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = avaliable_table_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("checkIn", "\346\210\277\351\227\264\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = avaliable_table_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("checkIn", "\346\210\277\351\227\264\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = avaliable_table_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("checkIn", "\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("checkIn", "\345\267\262\351\200\211\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        radioButton_seaRoom->setText(QApplication::translate("checkIn", "\346\265\267\346\231\257\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_nomalRoom->setText(QApplication::translate("checkIn", "\345\225\206\345\212\241\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_europeRoom->setText(QApplication::translate("checkIn", "\346\254\247\345\274\217\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_allStyle->setText(QApplication::translate("checkIn", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        radioButton_oneBed->setText(QApplication::translate("checkIn", "\345\215\225\345\272\212\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_twoBed->setText(QApplication::translate("checkIn", "\345\217\214\345\272\212\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_bigBed->setText(QApplication::translate("checkIn", "\345\244\247\345\272\212\346\210\277", 0, QApplication::UnicodeUTF8));
        radioButton_allBed->setText(QApplication::translate("checkIn", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        pushButton_serch->setText(QApplication::translate("checkIn", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        submit->setText(QApplication::translate("checkIn", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        label_sum->setText(QApplication::translate("checkIn", "0", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("checkIn", "\345\267\262\351\200\211\346\210\277\351\227\264\346\200\273\344\273\267:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class checkIn: public Ui_checkIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // _5165__4F4F__767B__8BB0_W11236_H
