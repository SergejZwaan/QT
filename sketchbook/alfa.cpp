
#include <QApplication>
#include <QDebug>
#include <iostream>
#include <string>
#include "alfa.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>



    // public variables
    QString name;

    // public functions

    Alfa::Alfa(){
        QGraphicsScene * scene = new QGraphicsScene();


        // create an item to put into the scene
        QGraphicsRectItem * rect[100];

        for(int i = 0; i < 10; i++){
            for(int j= 0; j<10; j++){
                 rect[j*i]  = new QGraphicsRectItem();
                 qDebug() << "rect" << i << "created";
                 rect[j*i]->setRect(15 * i,15*j,10,10);
                 scene->addItem(rect[j*i]);
          }
        }
        // public objects


        QGraphicsView * view = new QGraphicsView(scene);
        view->show();
    }

    void Alfa::sayCoolStuff(){
        qDebug() <<"I am awsome";
    }

    void Alfa::setName(QString input){
        name = input;
    }

    QString Alfa::getName(){
        return name;
    }
