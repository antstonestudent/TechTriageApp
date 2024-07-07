QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyApp
TEMPLATE = app

SOURCES += \
           mainuser.cpp \
           userinboxwindow.cpp \
           usermainwindow.cpp \
           usernewticketwindow.cpp \
           usernotificationswindow.cpp \
           usersettingswindow.cpp \
           useryourticketswindow.cpp

HEADERS  += \
            userinboxwindow.h \
            usermainwindow.h \
            usernewticketwindow.h \
            usernotificationswindow.h \
            usersettingswindow.h \
            useryourticketswindow.h

FORMS    += \
            userinboxwindow.ui \
            usermainwindow.ui \
            usernewticketwindow.ui \
            usernotificationswindow.ui \
            usersettingswindow.ui \
            useryourticketswindow.ui

RESOURCES += \
    resources.qrc \
    resources.qrc \
    resources.qrc \
    resources.qrc \
    resources.qrc \
    resources.qrc \
    userresources.qrc
