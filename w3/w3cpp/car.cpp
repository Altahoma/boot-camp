#include <iostream>
#include "car.h"

Car::Car() {
    std::cout << "constructing car" << std::endl;
    
    this->maxFuel = 100;
    this->currentFuel = 100;
    this->consumption = 0.18;
    this->model = new char[50];
}

Car::~Car() {
    std::cout << "destructing car" << std::endl;
    delete this->model;
}

double Car::getMaxFuel() const {
    return this->maxFuel;
}

double Car::getCurrentFuel() const {
    return this->currentFuel;
}

double Car::getConsumption() const {
    return this->consumption;
}

void Car::setMaxFuel(double maxFuel) {
    this->maxFuel = maxFuel;
}

void Car::setCurrentFuel(double currentFuel) {
    if ( currentFuel > this->maxFuel ) {
        currentFuel = this->maxFuel;
    } else if ( currentFuel < 0 ) {
        currentFuel = 0;
    }
    
    this->currentFuel = currentFuel;
}

void Car::setConsumption(double consumption) {
    this->consumption = consumption;
}
