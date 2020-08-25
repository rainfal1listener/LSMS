/********************************************************************************
** Form generated from reading UI file 'checkOutc10804.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHECKOUTC10804_H
#define CHECKOUTC10804_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_checkOut
{
public:
    QTableWidget *tableWidget_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *label_deposit;
    QLabel *label_5;
    QLabel *label_room;
    QLabel *label_7;
    QLabel *label_consumption;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *checkOut)
    {
        if (checkOut->objectName().isEmpty())
            checkOut->setObjectName(QString::fromUtf8("checkOut"));
        checkOut->resize(760, 367);
        tableWidget_2 = new QTableWidget(checkOut);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(340, 30, 411, 291));
        tabWidget = new QTabWidget(checkOut);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 311, 231));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 311, 211));
        tabWidget->addTab(tab_2, QString());
        label_3 = new QLabel(checkOut);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 271, 75, 16));
        label_deposit = new QLabel(checkOut);
        label_deposit->setObjectName(QString::fromUtf8("label_deposit"));
        label_deposit->setGeometry(QRect(116, 271, 91, 16));
        label_5 = new QLabel(checkOut);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 294, 60, 16));
        label_room = new QLabel(checkOut);
        label_room->setObjectName(QString::fromUtf8("label_room"));
        label_room->setGeometry(QRect(116, 294, 51, 16));
        label_7 = new QLabel(checkOut);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(11, 316, 75, 16));
        label_consumption = new QLabel(checkOut);
        label_consumption->setObjectName(QString::fromUtf8("label_consumption"));
        label_consumption->setGeometry(QRect(116, 316, 81, 16));
        widget = new QWidget(checkOut);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 332, 301, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(checkOut);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(348, 332, 401, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(checkOut);

        QMetaObject::connectSlotsByName(checkOut);
    } // setupUi

    void retranslateUi(QDialog *checkOut)
    {
        checkOut->setWindowTitle(QApplication::translate("checkOut", "\351\200\200\346\210\277\347\231\273\350\256\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("checkOut", "\346\210\277\351\227\264\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("checkOut", "\346\266\210\350\264\271\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("checkOut", "\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("checkOut", "\346\200\273\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("checkOut", "\346\210\277\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("checkOut", "\344\275\217\345\256\242", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("checkOut", "\351\200\200\346\210\277\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tableWidget->setWhatsThis(QApplication::translate("checkOut", "<html><head/><body><p>\347\202\271\345\207\273\351\200\211\346\213\251\350\246\201\351\200\200\347\232\204\346\210\277\351\227\264\345\217\267</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("checkOut", "\351\200\211\346\213\251\350\246\201\351\200\200\346\210\277\347\232\204\346\210\277\351\227\264", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("checkOut", "\345\267\262\346\224\266\346\212\274\351\207\221\357\274\232", 0, QApplication::UnicodeUTF8));
        label_deposit->setText(QApplication::translate("checkOut", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("checkOut", "\345\267\262\344\272\244\346\210\277\350\264\271", 0, QApplication::UnicodeUTF8));
        label_room->setText(QApplication::translate("checkOut", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("checkOut", "\351\242\235\345\244\226\346\266\210\350\264\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_consumption->setText(QApplication::translate("checkOut", "0", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("checkOut", "\347\216\260\351\207\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkOut", "\344\277\241\347\224\250\345\215\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkOut", "\345\276\256\344\277\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkOut", "\346\224\257\344\273\230\345\256\235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkOut", "\346\214\202\350\264\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("checkOut", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("checkOut", "<html><head/><body><p>+\350\241\250\347\244\272\345\272\224\351\200\200\351\207\221\351\242\235\357\274\214-\350\241\250\347\244\272\345\272\224\346\224\266\351\207\221\351\242\235</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("checkOut", "\345\272\224\344\272\244/\351\200\200\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("checkOut", "\351\200\200\346\210\277\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("checkOut", "\351\200\200\346\210\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class checkOut: public Ui_checkOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHECKOUTC10804_H

