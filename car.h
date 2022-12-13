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

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

/**
 * @brief Implementation of the Car class
 */
class Car {
private:
  string make;
  string model;
  float price;
  int numOfSeats;
  string transmission;

public:
  /**
   * @brief constructor
   */
  Car(string newCarMake, string newCarModel, float newCarPrice,
      int newCarNumOfSeats, string newCarTransmission);

  /**
   * accessor functions
   */
  string getMake() const;
  string getModel() const;
  float getPrice() const;
  int getNumOfSeats() const;
  string getTansmission() const;

  /**
   * mutator functions
   */
  void setMake(string newMake);
  void setModel(string newModel);
  void setPrice(float newPrice);
  void setNumOfSeats(int newNumOfSeats);
  void setTansmission(string newTansmission);
};

#endif // CAR_H
