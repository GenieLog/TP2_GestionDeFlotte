#-------------------------------------------------
#
# Project created by QtCreator 2012-10-13T01:33:28
#
#-------------------------------------------------

QT       += core gui

TARGET = Projet2
TEMPLATE = app
CONFIG += debug console

SOURCES += main.cpp\
        mainwindow.cpp \
    modele/personne.cpp \
    modele/balade.cpp \
    modele/bateau.cpp \
    modele/skipper.cpp \
    modele/employe.cpp \
    modele/client.cpp \
    formclient.cpp \
    formbateau.cpp

HEADERS  += mainwindow.h \
    modele/personne.h \
    modele/balade.h \
    modele/bateau.h \
    modele/skipper.h \
    modele/employe.h \
    modele/client.h \
    serializable.h \
    formclient.h \
    formbateau.h

FORMS    += mainwindow.ui \
    formclient.ui \
    formbateau.ui
