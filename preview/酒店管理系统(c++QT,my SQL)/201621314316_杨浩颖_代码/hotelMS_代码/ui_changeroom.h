/********************************************************************************
** Form generated from reading UI file 'changeRoomRh6808.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHANGEROOMRH6808_H
#define CHANGEROOMRH6808_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeRoom
{
public:
    QTabWidget *tabWidget;
    QWidget *widget;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget_2;
    QWidget *widget1;
    QTableWidget *tableWidget_2;
    QLabel *label_3;
    QLineEdit *lineEdit_changeRoomReason;
    QLabel *label_4;
    QLineEdit *lineEdit_cost;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_out;
    QLabel *label_7;
    QLabel *label_in;
    QPushButton *pushButton_nextChange;
    QPushButton *pushButton_submit;

    void setupUi(QDialog *changeRoom)
    {
        if (changeRoom->objectName().isEmpty())
            changeRoom->setObjectName(QString::fromUtf8("changeRoom"));
        changeRoom->resize(635, 394);
        tabWidget = new QTabWidget(changeRoom);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 311, 281));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 311, 261));
        tabWidget->addTab(widget, QString());
        tabWidget_2 = new QTabWidget(changeRoom);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(320, 30, 311, 281));
        widget1 = new QWidget();
        widget1->setObjectName(QString::fromUtf8("widget1"));
        tableWidget_2 = new QTableWidget(widget1);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 311, 261));
        tabWidget_2->addTab(widget1, QString());
        label_3 = new QLabel(changeRoom);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 321, 41, 16));
        lineEdit_changeRoomReason = new QLineEdit(changeRoom);
        lineEdit_changeRoomReason->setObjectName(QString::fromUtf8("lineEdit_changeRoomReason"));
        lineEdit_changeRoomReason->setGeometry(QRect(50, 320, 261, 61));
        label_4 = new QLabel(changeRoom);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 320, 75, 21));
        lineEdit_cost = new QLineEdit(changeRoom);
        lineEdit_cost->setObjectName(QString::fromUtf8("lineEdit_cost"));
        lineEdit_cost->setGeometry(QRect(440, 320, 190, 21));
        widget2 = new QWidget(changeRoom);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(340, 350, 294, 30));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_out = new QLabel(widget2);
        label_out->setObjectName(QString::fromUtf8("label_out"));

        horizontalLayout_2->addWidget(label_out);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_in = new QLabel(widget2);
        label_in->setObjectName(QString::fromUtf8("label_in"));

        horizontalLayout_2->addWidget(label_in);

        pushButton_nextChange = new QPushButton(widget2);
        pushButton_nextChange->setObjectName(QString::fromUtf8("pushButton_nextChange"));

        horizontalLayout_2->addWidget(pushButton_nextChange);

        pushButton_submit = new QPushButton(widget2);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));

        horizontalLayout_2->addWidget(pushButton_submit);

        tabWidget->raise();
        tabWidget_2->raise();
        tableWidget->raise();
        tableWidget_2->raise();
        label_3->raise();
        lineEdit_changeRoomReason->raise();
        label_4->raise();
        label_out->raise();
        label_in->raise();
        label_7->raise();
        label_4->raise();
        lineEdit_cost->raise();

        retranslateUi(changeRoom);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(changeRoom);
    } // setupUi

    void retranslateUi(QDialog *changeRoom)
    {
        changeRoom->setWindowTitle(QApplication::translate("changeRoom", "\346\215\242\346\210\277\347\231\273\350\256\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("changeRoom", "\346\210\277\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("changeRoom", "\344\275\217\345\256\242", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("changeRoom", "\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("changeRoom", "\350\246\201\346\215\242\345\207\272\347\232\204\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("changeRoom", "\346\210\277\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("changeRoom", "\346\210\277\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("changeRoom", "\346\210\277\344\273\267", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(widget1), QApplication::translate("changeRoom", "\350\246\201\346\215\242\345\205\245\347\232\204\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("changeRoom", "\345\216\237\345\233\240\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("changeRoom", "\346\215\242\346\210\277\345\267\256\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_out->setText(QApplication::translate("changeRoom", "101", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("changeRoom", "\346\215\242\345\210\260", 0, QApplication::UnicodeUTF8));
        label_in->setText(QApplication::translate("changeRoom", "101", 0, QApplication::UnicodeUTF8));
        pushButton_nextChange->setText(QApplication::translate("changeRoom", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_submit->setText(QApplication::translate("changeRoom", "\346\215\242\346\210\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class changeRoom: public Ui_changeRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHANGEROOMRH6808_H
