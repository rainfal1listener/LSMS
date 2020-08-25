/********************************************************************************
** Form generated from reading UI file 'fixc15732.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FIXC15732_H
#define FIXC15732_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fix
{
public:
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *fix)
    {
        if (fix->objectName().isEmpty())
            fix->setObjectName(QString::fromUtf8("fix"));
        fix->resize(362, 355);
        fix->setStyleSheet(QString::fromUtf8("#fix {border-image: url(:/1/bgi/58b68cb323881.jpg);}\n"
"#fix *{border-image: url();}\n"
""));
        comboBox = new QComboBox(fix);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(240, 40, 87, 21));
        comboBox->setMaximumSize(QSize(87, 16777215));
        lineEdit = new QLineEdit(fix);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 160, 301, 81));
        lineEdit->setMinimumSize(QSize(0, 61));
        label = new QLabel(fix);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 45, 16));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        label_2 = new QLabel(fix);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(31, 32, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\271\274\345\234\206\";"));
        pushButton = new QPushButton(fix);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 300, 93, 28));
        pushButton->setMaximumSize(QSize(93, 16777215));

        retranslateUi(fix);

        QMetaObject::connectSlotsByName(fix);
    } // setupUi

    void retranslateUi(QDialog *fix)
    {
        fix->setWindowTitle(QApplication::translate("fix", "\346\267\273\345\212\240\345\201\234\347\224\250\346\210\277", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fix", "\345\216\237\345\233\240\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fix", "\351\200\211\346\213\251\350\246\201\345\201\234\347\224\250\347\232\204\346\210\277\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("fix", "\345\201\234\347\224\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fix: public Ui_fix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FIXC15732_H
