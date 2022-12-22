// -*- lsst-c++ -*-
/*
 * This file is part of Car Rental App.
 *
 * Develped for learning purposes by Derick, Sherpad, and Keamogetswe.
 * (https://github.com/SDI1).
 * See the LICENSE file at the top-level directory of this distribution
 * for details of code ownership.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the MIT License as published by
 * Massachusetts Institute of Technology.
 *
 * This software is provided as a demonstration, WITHOUT ANY WARRANTY,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * See the MIT License for more details.
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "car.h"
#include <QMessageBox>
#include <cstdlib>
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }
QString MainWindow ::  random()
{
    srand(time(0));
    QString five;
    int a;
    for(int i=0;i<5;i++)
    {
        a=rand() % 10;
        five=(five+(QString::number(a)));
    }
    return five;
}
int MainWindow :: calcNumDays(const QDate &startDate, const QDate &endDate)
{
    return startDate.daysTo(endDate);
}

void MainWindow::on_BeginButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
//INITIALIZATION OF A CAR CLASS BASED ON THE SELECTED CHOICE
    QString choice;
    choice=ui->CarOption->currentText();
    Car rental1;
        if(choice=="Option 1, VW")
        {
            rental1.setMake("VW");
            rental1.setModel("Polo");
            rental1.setPrice(649.00);
            rental1.setNumOfSeats(4);
            rental1.setTansmission("Manual");
        }
        else if (choice=="Option 2, Mercedes")
        {
            rental1.setMake("Mercedes");
            rental1.setModel("SLS");
            rental1.setPrice(699.00);
            rental1.setNumOfSeats(2);
            rental1.setTansmission("Automatic");
        }
        else if(choice=="Option 3, BMW")
        {
            rental1.setMake("BMW");
            rental1.setModel("M2");
            rental1.setPrice(739.90);
            rental1.setNumOfSeats(4);
            rental1.setTansmission("Manual");
        }
        else if(choice=="Option 4, Audi")
        {
            rental1.setMake("Audi");
            rental1.setModel("S8");
            rental1.setPrice(674.50);
            rental1.setNumOfSeats(4);
            rental1.setTansmission("Manual");
        }
        else if(choice=="Option 5, Rolls_Royce")
        {
            rental1.setMake("Rolls Royce");
            rental1.setModel("Ghost");
            rental1.setPrice(999.00);
            rental1.setNumOfSeats(4);
            rental1.setTansmission("Manual");
        }
////////////////////////////////////////////////////////////////////
// Find the number of days from the Date inputs
        QDate startDate = ui->bookingDate->date();
        QDate endDate = ui->returnDate->date();
        int numDays = MainWindow::calcNumDays(startDate, endDate);
////////////////////////////////////////////////////////////////////
//Then set the values of display labels

    ui->labelCar->setText(rental1.getMake()+" "+rental1.getModel());
    ui->labelDate1->setText(ui->bookingDate->text());
    ui->labelDate2->setText(ui->returnDate->text());
//Convert the Total price from float to Qstring
    QString b = QString::number(rental1.getTotalPrice(numDays),'f',2);
    ui->labelDue->setText("R"+b);
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString five1=MainWindow::random();
    QString message=("Thank you for booking a "+ui->labelCar->text()+" Your reference number is: ");
    message=message+five1+" please present it upon collection.Thank you for choosing us";
    QMessageBox::information(this,"THANK YOU",message);
    QApplication::exit();

}

