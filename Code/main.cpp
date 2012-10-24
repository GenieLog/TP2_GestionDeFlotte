#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QDir>

int main(int argc, char *argv[])
{
    if(!QDir("bdd").exists())
        QDir().mkdir("bdd");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
