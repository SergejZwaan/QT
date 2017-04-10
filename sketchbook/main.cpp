
#include <QApplication>
#include <QDebug>
#include <iostream>
#include <string>
#include <QPushButton>
#include <QObject>
#include "alfa.h"


//
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    qDebug() <<"hellow world";

    // place code here
    //Beta * beta = new Beta();
    Alfa * alfa = new Alfa();


    alfa->sayCoolStuff();
    alfa->setName("robbert");

    qDebug() << alfa->getName();




    return a.exec();
}

void printPress(){
    qDebug() <<"buttenpushed";
}

