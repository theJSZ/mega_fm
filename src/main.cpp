#include <iostream>

#include <QThread>
#include <QApplication>
#include <QTimer>

#include <Stk.h>

#include "mainwindow.h"


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}