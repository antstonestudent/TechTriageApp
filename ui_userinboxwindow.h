/********************************************************************************
** Form generated from reading UI file 'userinboxwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINBOXWINDOW_H
#define UI_USERINBOXWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *widget_4;

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
        widget_2->setGeometry(QRect(10, 0, 431, 101));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 22, 41);"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 161, 111));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/TT.png")));
        label_7->setScaledContents(true);
        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(260, 10, 161, 91));
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
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(360, 190, 1471, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/e4.png")));
        label_6->setScaledContents(true);
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(640, 650, 1171, 361));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/e1.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 290, 241, 541));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/e3.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(630, 260, 1181, 371));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/imge/imge/e2.png")));
        label_12->setScaledContents(true);
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(610, 280, 31, 381));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "INBOX", nullptr));
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
        label_6->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINBOXWINDOW_H
