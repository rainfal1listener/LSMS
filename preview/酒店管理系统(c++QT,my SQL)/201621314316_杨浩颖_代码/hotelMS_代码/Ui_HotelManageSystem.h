#ifndef UI_HOTELMANAGESYSTEM
#define UI_HOTELMANAGESYSTEM
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HotelManageSystem
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_107;
    QPushButton *pushButton_202;
    QPushButton *pushButton_209;
    QPushButton *pushButton_201;
    QPushButton *pushButton_108;
    QPushButton *pushButton_106;
    QPushButton *pushButton_105;
    QPushButton *pushButton_104;
    QPushButton *pushButton_103;
    QPushButton *pushButton_11;
    QPushButton *pushButton_305;
    QPushButton *pushButton_208;
    QPushButton *pushButton_205;
    QPushButton *pushButton_204;
    QPushButton *pushButton_203;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_301;
    QPushButton *pushButton_20;
    QPushButton *pushButton_302;
    QPushButton *pushButton_304;
    QPushButton *pushButton_23;
    QPushButton *pushButton_303;
    QPushButton *pushButton_306;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QLabel *label_9;
    QPushButton *pushButton_102;
    QPushButton *pushButton_79;
    QPushButton *pushButton_101;
    QPushButton *pushButton_207;
    QPushButton *pushButton_206;
    QWidget *tabWidgetPage2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_B101;
    QPushButton *pushButton_B103;
    QPushButton *pushButton_B202;
    QPushButton *pushButton_B201;
    QPushButton *pushButton_B203;
    QPushButton *pushButton_B105;
    QPushButton *pushButton_B102;
    QPushButton *pushButton_B301;
    QPushButton *pushButton_B104;
    QPushButton *pushButton_checkOut;
    QPushButton *pushButton_consumption;
    QPushButton *pushButton_order;
    QPushButton *pushButton_checkIn;
    QPushButton *pushButton_changeRoom;
    QLabel *label_62;
    QPushButton *pushButton_price;
    QPushButton *pushButton_288;
    QLabel *label_70;
    QWidget *layoutWidget;
    QHBoxLayout *tourist_base_inform;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_61;
    QLabel *label_66;
    QLabel *label_69;
    QLabel *label_63;
    QLabel *label_65;
    QLabel *label_64;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_tourist_name;
    QLabel *label_checkIn_time;
    QLabel *label_left_time;
    QLabel *label_phoneNum;
    QLabel *label_tourist_type;
    QLabel *label_money;
    QWidget *layoutWidget1;
    QVBoxLayout *empty_room_view;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_60;
    QLCDNumber *order_room_number;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_59;
    QLCDNumber *empty_room_number;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_58;
    QLCDNumber *available_room_number;
    QHBoxLayout *horizontalLayout;
    QLabel *label_57;
    QProgressBar *empty_room_bar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_71;
    QLabel *label_admin;
    QPushButton *pushButton_logOut;

    void setupUi(QWidget *HotelManageSystem)
    {
        if (HotelManageSystem->objectName().isEmpty())
            HotelManageSystem->setObjectName(QString::fromUtf8("HotelManageSystem"));
        HotelManageSystem->resize(1520, 1000);
        HotelManageSystem->setMinimumSize(QSize(1000, 1000));
        HotelManageSystem->setMaximumSize(QSize(16777215, 16777215));
        scrollArea = new QScrollArea(HotelManageSystem);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(210, 80, 1311, 1000));
        scrollArea->setMinimumSize(QSize(1000, 1000));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1288, 1000));
        scrollAreaWidgetContents->setMinimumSize(QSize(1000, 1000));
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 16777215));
        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1301, 1561));
        tabWidget->setMinimumSize(QSize(0, 1091));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setMovable(false);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        label = new QLabel(tabWidgetPage1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 60, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(tabWidgetPage1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 120, 141, 101));
        pushButton_107 = new QPushButton(tabWidgetPage1);
        pushButton_107->setObjectName(QString::fromUtf8("pushButton_107"));
        pushButton_107->setGeometry(QRect(1050, 120, 141, 101));
        pushButton_202 = new QPushButton(tabWidgetPage1);
        pushButton_202->setObjectName(QString::fromUtf8("pushButton_202"));
        pushButton_202->setGeometry(QRect(200, 380, 141, 101));
        pushButton_209 = new QPushButton(tabWidgetPage1);
        pushButton_209->setObjectName(QString::fromUtf8("pushButton_209"));
        pushButton_209->setGeometry(QRect(200, 500, 141, 101));
        pushButton_201 = new QPushButton(tabWidgetPage1);
        pushButton_201->setObjectName(QString::fromUtf8("pushButton_201"));
        pushButton_201->setGeometry(QRect(40, 380, 141, 101));
        pushButton_108 = new QPushButton(tabWidgetPage1);
        pushButton_108->setObjectName(QString::fromUtf8("pushButton_108"));
        pushButton_108->setGeometry(QRect(40, 250, 141, 101));
        pushButton_106 = new QPushButton(tabWidgetPage1);
        pushButton_106->setObjectName(QString::fromUtf8("pushButton_106"));
        pushButton_106->setGeometry(QRect(870, 120, 141, 101));
        pushButton_105 = new QPushButton(tabWidgetPage1);
        pushButton_105->setObjectName(QString::fromUtf8("pushButton_105"));
        pushButton_105->setGeometry(QRect(690, 120, 141, 101));
        pushButton_104 = new QPushButton(tabWidgetPage1);
        pushButton_104->setObjectName(QString::fromUtf8("pushButton_104"));
        pushButton_104->setGeometry(QRect(520, 120, 141, 101));
        pushButton_103 = new QPushButton(tabWidgetPage1);
        pushButton_103->setObjectName(QString::fromUtf8("pushButton_103"));
        pushButton_103->setGeometry(QRect(360, 120, 141, 101));
        pushButton_11 = new QPushButton(tabWidgetPage1);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(200, 120, 141, 101));
        pushButton_305 = new QPushButton(tabWidgetPage1);
        pushButton_305->setObjectName(QString::fromUtf8("pushButton_305"));
        pushButton_305->setGeometry(QRect(200, 770, 141, 101));
        pushButton_208 = new QPushButton(tabWidgetPage1);
        pushButton_208->setObjectName(QString::fromUtf8("pushButton_208"));
        pushButton_208->setGeometry(QRect(40, 500, 141, 101));
        pushButton_205 = new QPushButton(tabWidgetPage1);
        pushButton_205->setObjectName(QString::fromUtf8("pushButton_205"));
        pushButton_205->setGeometry(QRect(690, 380, 141, 101));
        pushButton_204 = new QPushButton(tabWidgetPage1);
        pushButton_204->setObjectName(QString::fromUtf8("pushButton_204"));
        pushButton_204->setGeometry(QRect(520, 380, 141, 101));
        pushButton_203 = new QPushButton(tabWidgetPage1);
        pushButton_203->setObjectName(QString::fromUtf8("pushButton_203"));
        pushButton_203->setGeometry(QRect(360, 380, 141, 101));
        label_3 = new QLabel(tabWidgetPage1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 350, 91, 31));
        label_3->setFont(font);
        label_4 = new QLabel(tabWidgetPage1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 610, 91, 31));
        label_4->setFont(font);
        pushButton_301 = new QPushButton(tabWidgetPage1);
        pushButton_301->setObjectName(QString::fromUtf8("pushButton_301"));
        pushButton_301->setGeometry(QRect(40, 650, 141, 101));
        pushButton_20 = new QPushButton(tabWidgetPage1);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(40, 910, 141, 101));
        pushButton_302 = new QPushButton(tabWidgetPage1);
        pushButton_302->setObjectName(QString::fromUtf8("pushButton_302"));
        pushButton_302->setGeometry(QRect(200, 650, 141, 101));
        pushButton_304 = new QPushButton(tabWidgetPage1);
        pushButton_304->setObjectName(QString::fromUtf8("pushButton_304"));
        pushButton_304->setGeometry(QRect(40, 770, 141, 101));
        pushButton_23 = new QPushButton(tabWidgetPage1);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(40, 1310, 141, 101));
        pushButton_303 = new QPushButton(tabWidgetPage1);
        pushButton_303->setObjectName(QString::fromUtf8("pushButton_303"));
        pushButton_303->setGeometry(QRect(360, 650, 141, 101));
        pushButton_306 = new QPushButton(tabWidgetPage1);
        pushButton_306->setObjectName(QString::fromUtf8("pushButton_306"));
        pushButton_306->setGeometry(QRect(360, 770, 141, 101));
        pushButton_26 = new QPushButton(tabWidgetPage1);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(50, 1190, 141, 101));
        pushButton_27 = new QPushButton(tabWidgetPage1);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(30, 1060, 141, 101));
        label_9 = new QLabel(tabWidgetPage1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(390, 10, 121, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        pushButton_102 = new QPushButton(tabWidgetPage1);
        pushButton_102->setObjectName(QString::fromUtf8("pushButton_102"));
        pushButton_102->setGeometry(QRect(200, 120, 141, 101));
        pushButton_79 = new QPushButton(tabWidgetPage1);
        pushButton_79->setObjectName(QString::fromUtf8("pushButton_79"));
        pushButton_79->setGeometry(QRect(40, 120, 141, 101));
        pushButton_101 = new QPushButton(tabWidgetPage1);
        pushButton_101->setObjectName(QString::fromUtf8("pushButton_101"));
        pushButton_101->setGeometry(QRect(40, 120, 141, 101));
        pushButton_207 = new QPushButton(tabWidgetPage1);
        pushButton_207->setObjectName(QString::fromUtf8("pushButton_207"));
        pushButton_207->setGeometry(QRect(1050, 380, 141, 101));
        pushButton_206 = new QPushButton(tabWidgetPage1);
        pushButton_206->setObjectName(QString::fromUtf8("pushButton_206"));
        pushButton_206->setGeometry(QRect(870, 380, 141, 101));
        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        label_5 = new QLabel(tabWidgetPage2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 10, 121, 61));
        label_5->setFont(font1);
        label_6 = new QLabel(tabWidgetPage2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(tabWidgetPage2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 530, 91, 31));
        label_7->setFont(font);
        label_8 = new QLabel(tabWidgetPage2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 320, 91, 31));
        label_8->setFont(font);
        pushButton_B101 = new QPushButton(tabWidgetPage2);
        pushButton_B101->setObjectName(QString::fromUtf8("pushButton_B101"));
        pushButton_B101->setGeometry(QRect(40, 100, 141, 101));
        pushButton_B103 = new QPushButton(tabWidgetPage2);
        pushButton_B103->setObjectName(QString::fromUtf8("pushButton_B103"));
        pushButton_B103->setGeometry(QRect(370, 100, 141, 101));
        pushButton_B202 = new QPushButton(tabWidgetPage2);
        pushButton_B202->setObjectName(QString::fromUtf8("pushButton_B202"));
        pushButton_B202->setGeometry(QRect(210, 350, 141, 101));
        pushButton_B201 = new QPushButton(tabWidgetPage2);
        pushButton_B201->setObjectName(QString::fromUtf8("pushButton_B201"));
        pushButton_B201->setGeometry(QRect(40, 350, 141, 101));
        pushButton_B203 = new QPushButton(tabWidgetPage2);
        pushButton_B203->setObjectName(QString::fromUtf8("pushButton_B203"));
        pushButton_B203->setGeometry(QRect(380, 350, 141, 101));
        pushButton_B105 = new QPushButton(tabWidgetPage2);
        pushButton_B105->setObjectName(QString::fromUtf8("pushButton_B105"));
        pushButton_B105->setGeometry(QRect(210, 210, 141, 101));
        pushButton_B102 = new QPushButton(tabWidgetPage2);
        pushButton_B102->setObjectName(QString::fromUtf8("pushButton_B102"));
        pushButton_B102->setGeometry(QRect(210, 100, 141, 101));
        pushButton_B301 = new QPushButton(tabWidgetPage2);
        pushButton_B301->setObjectName(QString::fromUtf8("pushButton_B301"));
        pushButton_B301->setGeometry(QRect(40, 550, 141, 101));
        pushButton_B104 = new QPushButton(tabWidgetPage2);
        pushButton_B104->setObjectName(QString::fromUtf8("pushButton_B104"));
        pushButton_B104->setGeometry(QRect(40, 210, 141, 101));
        tabWidget->addTab(tabWidgetPage2, QString());
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_checkOut = new QPushButton(HotelManageSystem);
        pushButton_checkOut->setObjectName(QString::fromUtf8("pushButton_checkOut"));
        pushButton_checkOut->setGeometry(QRect(630, 0, 141, 81));
        pushButton_consumption = new QPushButton(HotelManageSystem);
        pushButton_consumption->setObjectName(QString::fromUtf8("pushButton_consumption"));
        pushButton_consumption->setGeometry(QRect(770, 0, 141, 81));
        pushButton_order = new QPushButton(HotelManageSystem);
        pushButton_order->setObjectName(QString::fromUtf8("pushButton_order"));
        pushButton_order->setGeometry(QRect(210, 0, 141, 81));
        pushButton_checkIn = new QPushButton(HotelManageSystem);
        pushButton_checkIn->setObjectName(QString::fromUtf8("pushButton_checkIn"));
        pushButton_checkIn->setGeometry(QRect(350, 0, 141, 81));
        pushButton_changeRoom = new QPushButton(HotelManageSystem);
        pushButton_changeRoom->setObjectName(QString::fromUtf8("pushButton_changeRoom"));
        pushButton_changeRoom->setGeometry(QRect(490, 0, 141, 81));
        label_62 = new QLabel(HotelManageSystem);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(40, 260, 121, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(12);
        label_62->setFont(font2);
        pushButton_price = new QPushButton(HotelManageSystem);
        pushButton_price->setObjectName(QString::fromUtf8("pushButton_price"));
        pushButton_price->setGeometry(QRect(910, 0, 141, 81));
        pushButton_288 = new QPushButton(HotelManageSystem);
        pushButton_288->setObjectName(QString::fromUtf8("pushButton_288"));
        pushButton_288->setGeometry(QRect(1050, 0, 141, 81));
        label_70 = new QLabel(HotelManageSystem);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(0, -20, 211, 181));
        label_70->setStyleSheet(QString::fromUtf8("image: url(:/login/gb_login.jpg);"));
        layoutWidget = new QWidget(HotelManageSystem);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 290, 211, 301));
        tourist_base_inform = new QHBoxLayout(layoutWidget);
        tourist_base_inform->setObjectName(QString::fromUtf8("tourist_base_inform"));
        tourist_base_inform->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_61 = new QLabel(layoutWidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(10);
        label_61->setFont(font3);

        verticalLayout_2->addWidget(label_61);

        label_66 = new QLabel(layoutWidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setFont(font3);

        verticalLayout_2->addWidget(label_66);

        label_69 = new QLabel(layoutWidget);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setFont(font3);

        verticalLayout_2->addWidget(label_69);

        label_63 = new QLabel(layoutWidget);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setFont(font3);

        verticalLayout_2->addWidget(label_63);

        label_65 = new QLabel(layoutWidget);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setFont(font3);

        verticalLayout_2->addWidget(label_65);

        label_64 = new QLabel(layoutWidget);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setFont(font3);

        verticalLayout_2->addWidget(label_64);


        tourist_base_inform->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_tourist_name = new QLabel(layoutWidget);
        label_tourist_name->setObjectName(QString::fromUtf8("label_tourist_name"));
        label_tourist_name->setFont(font3);

        verticalLayout_3->addWidget(label_tourist_name);

        label_checkIn_time = new QLabel(layoutWidget);
        label_checkIn_time->setObjectName(QString::fromUtf8("label_checkIn_time"));
        label_checkIn_time->setFont(font3);

        verticalLayout_3->addWidget(label_checkIn_time);

        label_left_time = new QLabel(layoutWidget);
        label_left_time->setObjectName(QString::fromUtf8("label_left_time"));
        label_left_time->setFont(font3);

        verticalLayout_3->addWidget(label_left_time);

        label_phoneNum = new QLabel(layoutWidget);
        label_phoneNum->setObjectName(QString::fromUtf8("label_phoneNum"));
        label_phoneNum->setFont(font3);

        verticalLayout_3->addWidget(label_phoneNum);

        label_tourist_type = new QLabel(layoutWidget);
        label_tourist_type->setObjectName(QString::fromUtf8("label_tourist_type"));
        label_tourist_type->setFont(font3);

        verticalLayout_3->addWidget(label_tourist_type);

        label_money = new QLabel(layoutWidget);
        label_money->setObjectName(QString::fromUtf8("label_money"));
        label_money->setFont(font3);

        verticalLayout_3->addWidget(label_money);


        tourist_base_inform->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(HotelManageSystem);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 872, 211, 131));
        empty_room_view = new QVBoxLayout(layoutWidget1);
        empty_room_view->setObjectName(QString::fromUtf8("empty_room_view"));
        empty_room_view->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_60 = new QLabel(layoutWidget1);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_4->addWidget(label_60);

        order_room_number = new QLCDNumber(layoutWidget1);
        order_room_number->setObjectName(QString::fromUtf8("order_room_number"));

        horizontalLayout_4->addWidget(order_room_number);


        empty_room_view->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_59 = new QLabel(layoutWidget1);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_2->addWidget(label_59);

        empty_room_number = new QLCDNumber(layoutWidget1);
        empty_room_number->setObjectName(QString::fromUtf8("empty_room_number"));

        horizontalLayout_2->addWidget(empty_room_number);


        empty_room_view->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_58 = new QLabel(layoutWidget1);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_3->addWidget(label_58);

        available_room_number = new QLCDNumber(layoutWidget1);
        available_room_number->setObjectName(QString::fromUtf8("available_room_number"));

        horizontalLayout_3->addWidget(available_room_number);


        empty_room_view->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_57 = new QLabel(layoutWidget1);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout->addWidget(label_57);

        empty_room_bar = new QProgressBar(layoutWidget1);
        empty_room_bar->setObjectName(QString::fromUtf8("empty_room_bar"));
        empty_room_bar->setValue(24);

        horizontalLayout->addWidget(empty_room_bar);


        empty_room_view->addLayout(horizontalLayout);

        widget = new QWidget(HotelManageSystem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 140, 214, 30));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_71 = new QLabel(widget);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        horizontalLayout_6->addWidget(label_71);

        label_admin = new QLabel(widget);
        label_admin->setObjectName(QString::fromUtf8("label_admin"));

        horizontalLayout_6->addWidget(label_admin);

        pushButton_logOut = new QPushButton(widget);
        pushButton_logOut->setObjectName(QString::fromUtf8("pushButton_logOut"));

        horizontalLayout_6->addWidget(pushButton_logOut);

        layoutWidget->raise();
        label_70->raise();
        scrollArea->raise();
        pushButton_checkOut->raise();
        pushButton_consumption->raise();
        pushButton_order->raise();
        pushButton_checkIn->raise();
        pushButton_changeRoom->raise();
        layoutWidget->raise();
        label_62->raise();
        pushButton_price->raise();
        pushButton_288->raise();
        label_71->raise();
        label_admin->raise();

        retranslateUi(HotelManageSystem);
        QObject::connect(pushButton_logOut, SIGNAL(clicked()), HotelManageSystem, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HotelManageSystem);
    } // setupUi

    void retranslateUi(QWidget *HotelManageSystem)
    {
        HotelManageSystem->setWindowTitle(QApplication::translate("HotelManageSystem", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\270\200\345\261\202", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("HotelManageSystem", "<html><head/><body><p>\344\275\217\345\256\242\357\274\232aa</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("HotelManageSystem", "101", 0, QApplication::UnicodeUTF8));
        pushButton_107->setText(QApplication::translate("HotelManageSystem", "107", 0, QApplication::UnicodeUTF8));
        pushButton_202->setText(QApplication::translate("HotelManageSystem", "202", 0, QApplication::UnicodeUTF8));
        pushButton_209->setText(QApplication::translate("HotelManageSystem", "209", 0, QApplication::UnicodeUTF8));
        pushButton_201->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        pushButton_108->setText(QApplication::translate("HotelManageSystem", "108", 0, QApplication::UnicodeUTF8));
        pushButton_106->setText(QApplication::translate("HotelManageSystem", "106", 0, QApplication::UnicodeUTF8));
        pushButton_105->setText(QApplication::translate("HotelManageSystem", "105", 0, QApplication::UnicodeUTF8));
        pushButton_104->setText(QApplication::translate("HotelManageSystem", "104", 0, QApplication::UnicodeUTF8));
        pushButton_103->setText(QApplication::translate("HotelManageSystem", "103", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("HotelManageSystem", "102", 0, QApplication::UnicodeUTF8));
        pushButton_305->setText(QApplication::translate("HotelManageSystem", "305", 0, QApplication::UnicodeUTF8));
        pushButton_208->setText(QApplication::translate("HotelManageSystem", "208", 0, QApplication::UnicodeUTF8));
        pushButton_205->setText(QApplication::translate("HotelManageSystem", "205", 0, QApplication::UnicodeUTF8));
        pushButton_204->setText(QApplication::translate("HotelManageSystem", "204", 0, QApplication::UnicodeUTF8));
        pushButton_203->setText(QApplication::translate("HotelManageSystem", "203", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\272\214\345\261\202", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\270\211\345\261\202", 0, QApplication::UnicodeUTF8));
        pushButton_301->setText(QApplication::translate("HotelManageSystem", "301", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        pushButton_302->setText(QApplication::translate("HotelManageSystem", "302", 0, QApplication::UnicodeUTF8));
        pushButton_304->setText(QApplication::translate("HotelManageSystem", "304", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        pushButton_303->setText(QApplication::translate("HotelManageSystem", "303", 0, QApplication::UnicodeUTF8));
        pushButton_306->setText(QApplication::translate("HotelManageSystem", "306", 0, QApplication::UnicodeUTF8));
        pushButton_26->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        pushButton_27->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("HotelManageSystem", "A\346\240\213", 0, QApplication::UnicodeUTF8));
        pushButton_102->setText(QApplication::translate("HotelManageSystem", "102", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton_79->setWhatsThis(QApplication::translate("HotelManageSystem", "<html><head/><body><p>\344\275\217\345\256\242\357\274\232aa</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_79->setText(QApplication::translate("HotelManageSystem", "101", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton_101->setWhatsThis(QApplication::translate("HotelManageSystem", "<html><head/><body><p>\344\275\217\345\256\242\357\274\232aa</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_101->setText(QApplication::translate("HotelManageSystem", "101", 0, QApplication::UnicodeUTF8));
        pushButton_207->setText(QApplication::translate("HotelManageSystem", "207", 0, QApplication::UnicodeUTF8));
        pushButton_206->setText(QApplication::translate("HotelManageSystem", "206", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("HotelManageSystem", "A\346\240\213", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("HotelManageSystem", "B\346\240\213", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\270\200\345\261\202", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\270\211\345\261\202", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("HotelManageSystem", "\347\254\254\344\272\214\345\261\202", 0, QApplication::UnicodeUTF8));
        pushButton_B101->setText(QApplication::translate("HotelManageSystem", "101", 0, QApplication::UnicodeUTF8));
        pushButton_B103->setText(QApplication::translate("HotelManageSystem", "103", 0, QApplication::UnicodeUTF8));
        pushButton_B202->setText(QApplication::translate("HotelManageSystem", "202", 0, QApplication::UnicodeUTF8));
        pushButton_B201->setText(QApplication::translate("HotelManageSystem", "201", 0, QApplication::UnicodeUTF8));
        pushButton_B203->setText(QApplication::translate("HotelManageSystem", "203", 0, QApplication::UnicodeUTF8));
        pushButton_B105->setText(QApplication::translate("HotelManageSystem", "105", 0, QApplication::UnicodeUTF8));
        pushButton_B102->setText(QApplication::translate("HotelManageSystem", "102", 0, QApplication::UnicodeUTF8));
        pushButton_B301->setText(QApplication::translate("HotelManageSystem", "301", 0, QApplication::UnicodeUTF8));
        pushButton_B104->setText(QApplication::translate("HotelManageSystem", "104", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("HotelManageSystem", "B\346\240\213", 0, QApplication::UnicodeUTF8));
        pushButton_checkOut->setText(QApplication::translate("HotelManageSystem", "\351\200\200\346\210\277", 0, QApplication::UnicodeUTF8));
        pushButton_consumption->setText(QApplication::translate("HotelManageSystem", "\345\242\236\345\212\240\346\266\210\350\264\271", 0, QApplication::UnicodeUTF8));
        pushButton_order->setText(QApplication::translate("HotelManageSystem", "\351\242\204\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_checkIn->setText(QApplication::translate("HotelManageSystem", "\345\205\245\344\275\217", 0, QApplication::UnicodeUTF8));
        pushButton_changeRoom->setText(QApplication::translate("HotelManageSystem", "\346\215\242\346\210\277", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("HotelManageSystem", "\344\275\217\345\256\242\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        pushButton_price->setText(QApplication::translate("HotelManageSystem", "\346\210\277\344\273\267\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_288->setText(QApplication::translate("HotelManageSystem", "\344\272\244\347\217\255", 0, QApplication::UnicodeUTF8));
        label_70->setText(QString());
        label_61->setText(QApplication::translate("HotelManageSystem", "\344\275\217\345\256\242\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("HotelManageSystem", "\345\205\245\344\275\217\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_69->setText(QApplication::translate("HotelManageSystem", "\351\200\200\346\210\277\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("HotelManageSystem", "\346\211\213\346\234\272\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("HotelManageSystem", "\344\275\217\345\256\242\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("HotelManageSystem", "\346\266\210\350\264\271\344\275\231\351\242\235", 0, QApplication::UnicodeUTF8));
        label_tourist_name->setText(QString());
        label_checkIn_time->setText(QString());
        label_left_time->setText(QString());
        label_phoneNum->setText(QString());
        label_tourist_type->setText(QString());
        label_money->setText(QString());
        label_60->setText(QApplication::translate("HotelManageSystem", "  \351\242\204\345\256\232\346\210\277\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("HotelManageSystem", "   \347\251\272\346\210\277\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("HotelManageSystem", " \345\217\257\347\224\250\346\210\277\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("HotelManageSystem", "  \347\251\272\346\210\277\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("HotelManageSystem", "\346\223\215\344\275\234\345\221\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_admin->setText(QApplication::translate("HotelManageSystem", "\346\235\250\346\265\251\351\242\226", 0, QApplication::UnicodeUTF8));
        pushButton_logOut->setText(QApplication::translate("HotelManageSystem", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HotelManageSystem: public Ui_HotelManageSystem {};
} // namespace Ui

QT_END_NAMESPACE
#endif // UI_HOTELMANAGESYSTEM

