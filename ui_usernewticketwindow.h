/********************************************************************************
** Form generated from reading UI file 'usernewticketwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERNEWTICKETWINDOW_H
#define UI_USERNEWTICKETWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label_7;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *logoutbutton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *settingsButton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *homeButton;
    QLabel *label_8;
    QLabel *label_9;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *notificationsButton;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_8;
    QPlainTextEdit *plainTextEdit_16;
    QPlainTextEdit *plainTextEdit_17;
    QPlainTextEdit *plainTextEdit_18;
    QPlainTextEdit *plainTextEdit_19;
    QLabel *label_6;
    QLabel *label_10;
    QWidget *widget_21;
    QPlainTextEdit *plainTextEdit_7;
    QPlainTextEdit *plainTextEdit_14;
    QWidget *widget_9;
    QWidget *widget_10;
    QWidget *widget_11;
    QWidget *widget_12;
    QPlainTextEdit *plainTextEdit_15;
    QWidget *widget_13;
    QWidget *widget_22;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *widget_23;
    QWidget *widget_24;
    QWidget *widget_25;
    QWidget *widget_26;
    QWidget *widget_27;
    QWidget *widget_28;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_5;
    QPlainTextEdit *plainTextEdit_6;
    QPlainTextEdit *plainTextEdit_8;
    QPlainTextEdit *plainTextEdit_9;
    QPlainTextEdit *plainTextEdit_10;
    QPlainTextEdit *plainTextEdit_11;
    QPlainTextEdit *plainTextEdit_12;
    QPlainTextEdit *plainTextEdit_13;
    QPlainTextEdit *plainTextEdit_20;
    QPlainTextEdit *plainTextEdit_21;
    QWidget *widget_6;
    QWidget *widget_7;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1918, 1093);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, -10, 1931, 1101));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 0, 551, 101));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 161, 111));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/TT.png")));
        label_7->setScaledContents(true);
        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(250, 20, 301, 81));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        plainTextEdit->setFont(font);
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(-10, 100, 281, 991));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        horizontalLayoutWidget = new QWidget(widget_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(200, 890, 71, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logoutbutton = new QPushButton(horizontalLayoutWidget);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setMaximumSize(QSize(60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imge/imge/log-out.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logoutbutton->setIcon(icon);
        logoutbutton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(logoutbutton);

        horizontalLayoutWidget_2 = new QWidget(widget_3);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(110, 890, 92, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        settingsButton = new QPushButton(horizontalLayoutWidget_2);
        settingsButton->setObjectName("settingsButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imge/imge/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settingsButton->setIcon(icon1);
        settingsButton->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(settingsButton);

        horizontalLayoutWidget_3 = new QWidget(widget_3);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(20, 890, 77, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(horizontalLayoutWidget_3);
        homeButton->setObjectName("homeButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imge/imge/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeButton->setIcon(icon2);
        homeButton->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(homeButton);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 210, 221, 211));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/man (1).png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(widget_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 420, 221, 121));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/details.png")));
        label_9->setScaledContents(true);
        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(1450, 20, 88, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        timeEdit->setFont(font1);
        timeEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        timeEdit->setLocale(QLocale(QLocale::English, QLocale::NewZealand));
        timeEdit->setFrame(false);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit->setAccelerated(false);
        timeEdit->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        timeEdit->setProperty("showGroupSeparator", QVariant(false));
        timeEdit->setTime(QTime(1, 0, 0));
        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(1620, 20, 111, 25));
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateEdit->setFrame(false);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setDate(QDate(2024, 7, 7));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(1410, 20, 31, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/clock.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1580, 20, 31, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/calendar.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1900, 20, 16, 16));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/close.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1870, 20, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/window.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1840, 20, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/minus.png")));
        label_5->setScaledContents(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1670, 1030, 251, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imge/imge/Report.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(700, 700));
        notificationsButton = new QPushButton(widget);
        notificationsButton->setObjectName("notificationsButton");
        notificationsButton->setGeometry(QRect(1730, 10, 41, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imge/imge/notification.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notificationsButton->setIcon(icon4);
        notificationsButton->setIconSize(QSize(30, 30));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(340, 200, 791, 821));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(450, 450, 791, 821));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(-10, 130, 331, 221));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        plainTextEdit_16 = new QPlainTextEdit(widget_8);
        plainTextEdit_16->setObjectName("plainTextEdit_16");
        plainTextEdit_16->setGeometry(QRect(100, 30, 161, 41));
        QFont font2;
        font2.setPointSize(13);
        plainTextEdit_16->setFont(font2);
        plainTextEdit_16->setFrameShape(QFrame::NoFrame);
        plainTextEdit_17 = new QPlainTextEdit(widget_8);
        plainTextEdit_17->setObjectName("plainTextEdit_17");
        plainTextEdit_17->setGeometry(QRect(100, 140, 51, 41));
        plainTextEdit_17->setFont(font2);
        plainTextEdit_17->setFrameShape(QFrame::NoFrame);
        plainTextEdit_18 = new QPlainTextEdit(widget_8);
        plainTextEdit_18->setObjectName("plainTextEdit_18");
        plainTextEdit_18->setGeometry(QRect(130, 140, 81, 41));
        plainTextEdit_18->setFont(font2);
        plainTextEdit_18->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_18->setFrameShape(QFrame::NoFrame);
        plainTextEdit_19 = new QPlainTextEdit(widget_8);
        plainTextEdit_19->setObjectName("plainTextEdit_19");
        plainTextEdit_19->setGeometry(QRect(190, 140, 71, 41));
        plainTextEdit_19->setFont(font2);
        plainTextEdit_19->setFrameShape(QFrame::NoFrame);
        label_6 = new QLabel(widget_8);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 80, 41, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/upload.png")));
        label_6->setScaledContents(true);
        label_10 = new QLabel(widget_8);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(240, 140, 31, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/folder.png")));
        label_10->setScaledContents(true);
        widget_21 = new QWidget(widget_5);
        widget_21->setObjectName("widget_21");
        widget_21->setGeometry(QRect(100, 40, 211, 31));
        widget_21->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        plainTextEdit_7 = new QPlainTextEdit(widget_5);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setGeometry(QRect(170, 0, 141, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        plainTextEdit_7->setFont(font3);
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_7->setFrameShape(QFrame::NoFrame);
        plainTextEdit_14 = new QPlainTextEdit(widget_5);
        plainTextEdit_14->setObjectName("plainTextEdit_14");
        plainTextEdit_14->setGeometry(QRect(80, 90, 201, 31));
        plainTextEdit_14->setFont(font3);
        plainTextEdit_14->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_14->setFrameShape(QFrame::NoFrame);
        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(40, 580, 311, 221));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(230, 80, 311, 221));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_11 = new QWidget(widget_9);
        widget_11->setObjectName("widget_11");
        widget_11->setGeometry(QRect(180, 90, 311, 221));
        widget_11->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName("widget_12");
        widget_12->setGeometry(QRect(230, 80, 311, 221));
        widget_12->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        plainTextEdit_15 = new QPlainTextEdit(widget_9);
        plainTextEdit_15->setObjectName("plainTextEdit_15");
        plainTextEdit_15->setGeometry(QRect(10, 0, 121, 41));
        plainTextEdit_15->setFont(font2);
        plainTextEdit_15->setFrameShape(QFrame::NoFrame);
        widget_13 = new QWidget(widget_4);
        widget_13->setObjectName("widget_13");
        widget_13->setGeometry(QRect(40, 490, 211, 31));
        widget_13->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_22 = new QWidget(widget_4);
        widget_22->setObjectName("widget_22");
        widget_22->setGeometry(QRect(300, 490, 211, 31));
        widget_22->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        checkBox = new QCheckBox(widget_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(80, 390, 131, 22));
        checkBox->setFont(font3);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        checkBox_2 = new QCheckBox(widget_4);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(270, 390, 78, 22));
        checkBox_2->setFont(font3);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        widget_23 = new QWidget(widget_4);
        widget_23->setObjectName("widget_23");
        widget_23->setGeometry(QRect(440, 350, 321, 31));
        widget_23->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_24 = new QWidget(widget_4);
        widget_24->setObjectName("widget_24");
        widget_24->setGeometry(QRect(440, 260, 321, 31));
        widget_24->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_25 = new QWidget(widget_4);
        widget_25->setObjectName("widget_25");
        widget_25->setGeometry(QRect(30, 260, 321, 31));
        widget_25->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_26 = new QWidget(widget_4);
        widget_26->setObjectName("widget_26");
        widget_26->setGeometry(QRect(30, 160, 731, 31));
        widget_26->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_27 = new QWidget(widget_4);
        widget_27->setObjectName("widget_27");
        widget_27->setGeometry(QRect(30, 50, 301, 31));
        widget_27->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        widget_28 = new QWidget(widget_4);
        widget_28->setObjectName("widget_28");
        widget_28->setGeometry(QRect(460, 50, 301, 31));
        widget_28->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        plainTextEdit_4 = new QPlainTextEdit(widget_4);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(170, 330, 104, 31));
        plainTextEdit_4->setFont(font3);
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_4->setFrameShape(QFrame::NoFrame);
        plainTextEdit_5 = new QPlainTextEdit(widget_4);
        plainTextEdit_5->setObjectName("plainTextEdit_5");
        plainTextEdit_5->setGeometry(QRect(100, 450, 104, 31));
        plainTextEdit_5->setFont(font3);
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_5->setFrameShape(QFrame::NoFrame);
        plainTextEdit_6 = new QPlainTextEdit(widget_4);
        plainTextEdit_6->setObjectName("plainTextEdit_6");
        plainTextEdit_6->setGeometry(QRect(350, 450, 141, 31));
        plainTextEdit_6->setFont(font3);
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_6->setFrameShape(QFrame::NoFrame);
        plainTextEdit_8 = new QPlainTextEdit(widget_4);
        plainTextEdit_8->setObjectName("plainTextEdit_8");
        plainTextEdit_8->setGeometry(QRect(440, 310, 141, 31));
        plainTextEdit_8->setFont(font3);
        plainTextEdit_8->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_8->setFrameShape(QFrame::NoFrame);
        plainTextEdit_9 = new QPlainTextEdit(widget_4);
        plainTextEdit_9->setObjectName("plainTextEdit_9");
        plainTextEdit_9->setGeometry(QRect(440, 220, 141, 31));
        plainTextEdit_9->setFont(font3);
        plainTextEdit_9->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_9->setFrameShape(QFrame::NoFrame);
        plainTextEdit_10 = new QPlainTextEdit(widget_4);
        plainTextEdit_10->setObjectName("plainTextEdit_10");
        plainTextEdit_10->setGeometry(QRect(30, 220, 141, 31));
        plainTextEdit_10->setFont(font3);
        plainTextEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_10->setFrameShape(QFrame::NoFrame);
        plainTextEdit_11 = new QPlainTextEdit(widget_4);
        plainTextEdit_11->setObjectName("plainTextEdit_11");
        plainTextEdit_11->setGeometry(QRect(30, 120, 141, 31));
        plainTextEdit_11->setFont(font3);
        plainTextEdit_11->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_11->setFrameShape(QFrame::NoFrame);
        plainTextEdit_12 = new QPlainTextEdit(widget_4);
        plainTextEdit_12->setObjectName("plainTextEdit_12");
        plainTextEdit_12->setGeometry(QRect(30, 10, 141, 31));
        plainTextEdit_12->setFont(font3);
        plainTextEdit_12->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_12->setFrameShape(QFrame::NoFrame);
        plainTextEdit_13 = new QPlainTextEdit(widget_4);
        plainTextEdit_13->setObjectName("plainTextEdit_13");
        plainTextEdit_13->setGeometry(QRect(150, 550, 104, 31));
        plainTextEdit_13->setFont(font3);
        plainTextEdit_13->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_13->setFrameShape(QFrame::NoFrame);
        plainTextEdit_20 = new QPlainTextEdit(widget_4);
        plainTextEdit_20->setObjectName("plainTextEdit_20");
        plainTextEdit_20->setGeometry(QRect(30, 80, 121, 41));
        QFont font4;
        font4.setPointSize(10);
        plainTextEdit_20->setFont(font4);
        plainTextEdit_20->setFrameShape(QFrame::NoFrame);
        plainTextEdit_21 = new QPlainTextEdit(widget_4);
        plainTextEdit_21->setObjectName("plainTextEdit_21");
        plainTextEdit_21->setGeometry(QRect(460, 80, 121, 41));
        plainTextEdit_21->setFont(font4);
        plainTextEdit_21->setFrameShape(QFrame::NoFrame);
        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(1170, 200, 691, 691));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(10, 30, 671, 651));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 108, 132);"));
        plainTextEdit_3 = new QPlainTextEdit(widget_7);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(10, 10, 121, 41));
        plainTextEdit_3->setFont(font2);
        plainTextEdit_3->setFrameShape(QFrame::NoFrame);
        plainTextEdit_2 = new QPlainTextEdit(widget_6);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(260, 0, 261, 21));
        plainTextEdit_2->setFont(font3);
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(250, 176, 5);"));
        plainTextEdit_2->setFrameShape(QFrame::NoFrame);
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1410, 920, 251, 71));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imge/imge/submit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(300, 300));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "NEW TICKET", nullptr));
        logoutbutton->setText(QString());
        settingsButton->setText(QString());
        homeButton->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_2->setText(QString());
        notificationsButton->setText(QString());
        plainTextEdit_16->setPlainText(QCoreApplication::translate("MainWindow", "DRAG AND DROP", nullptr));
        plainTextEdit_17->setPlainText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        plainTextEdit_18->setPlainText(QCoreApplication::translate("MainWindow", "SELECT", nullptr));
        plainTextEdit_19->setPlainText(QCoreApplication::translate("MainWindow", "A FILE", nullptr));
        label_6->setText(QString());
        label_10->setText(QString());
        plainTextEdit_7->setPlainText(QCoreApplication::translate("MainWindow", "URGENCY", nullptr));
        plainTextEdit_14->setPlainText(QCoreApplication::translate("MainWindow", "UPLOAD SCREENSHOTS", nullptr));
        plainTextEdit_15->setPlainText(QCoreApplication::translate("MainWindow", "TYPE HERE...", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "INDIVIDUAL", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "TEAM", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("MainWindow", "IMPACTED", nullptr));
        plainTextEdit_5->setPlainText(QCoreApplication::translate("MainWindow", "CATEGORY", nullptr));
        plainTextEdit_6->setPlainText(QCoreApplication::translate("MainWindow", "SUBCATEGORY", nullptr));
        plainTextEdit_8->setPlainText(QCoreApplication::translate("MainWindow", "COMPUTER ID", nullptr));
        plainTextEdit_9->setPlainText(QCoreApplication::translate("MainWindow", "COMPANY", nullptr));
        plainTextEdit_10->setPlainText(QCoreApplication::translate("MainWindow", "PHONE", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        plainTextEdit_12->setPlainText(QCoreApplication::translate("MainWindow", "NAME", nullptr));
        plainTextEdit_13->setPlainText(QCoreApplication::translate("MainWindow", "SYMPTOMS", nullptr));
        plainTextEdit_20->setPlainText(QCoreApplication::translate("MainWindow", "FIRST NAME", nullptr));
        plainTextEdit_21->setPlainText(QCoreApplication::translate("MainWindow", "LAST NAME", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("MainWindow", "TYPE HERE...", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("MainWindow", "DESCRIBE THE PROBLEM", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERNEWTICKETWINDOW_H
