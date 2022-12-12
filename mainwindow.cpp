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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }
