#include <iostream>
#include "Car.h"
#include "Point.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelAmount = 0;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {
    
}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel () const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeeded = location.distance(destination) * fuelConsumption;
    
    if ( fuelNeeded > fuelAmount ) {
        throw OutOfFuel();
    }
    
    this->fuelAmount -= fuelNeeded;
    this->location = destination;
}

void Car::drive(double x, double y) {
    double fuelNeeded = location.distance(Point(x, y)) * fuelConsumption;
    
    if ( fuelNeeded > fuelAmount ) {
        throw OutOfFuel();
    }
    
    this->fuelAmount -= fuelNeeded;
    this->location = Point(x, y);
}

void Car::refill(double fuel) {
    if ( fuel <= 0 ) {
        throw OutOfFuel();
    }
    
    if ( fuel > fuelCapacity - fuelAmount ) {
        throw ToMuchFuel();
    }
    
    this->fuelAmount += fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getModel() << ' ' << "[Amount fuel: " << car.getFuelAmount() << '/' << car.getFuelCapacity() << ']' << ' ' << "[Consumption: " << car.getFuelConsumption() << "] " << "[Location: " << car.getLocation() << ']';
    return out;
}