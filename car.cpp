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

#include "car.h"

Car::Car(string newCarMake, string newCarModel, float newCarPrice,
         int newCarNumOfSeats, string newCarTransmission)
    : make(newCarMake), model(newCarModel), price(newCarPrice),
      numOfSeats(newCarNumOfSeats), transmission(newCarTransmission) {}

string Car::getMake() const { return make; }

string Car::getModel() const { return model; }

float Car::getPrice() const { return price; }

int Car::getNumOfSeats() const { return numOfSeats; }

string Car::getTansmission() const { return transmission; }

void Car::setMake(string newMake) { make = newMake; }

void Car::setModel(string newModel) { model = newModel; }

void Car::setPrice(float newPrice) { price = newPrice; }

void Car::setNumOfSeats(int newNumOfSeats) { numOfSeats = newNumOfSeats; }

void Car::setTansmission(string newTansmission) {transmission = newTansmission;}
