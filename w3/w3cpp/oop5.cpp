#include <iostream>

class Car {
private:
    double maxFuel;
    double currentFuel;
    double consumption;
    char* model;
public:
    Car() {
        std::cout << "constructing car" << std::endl;
        
        this->maxFuel = 100;
        this->currentFuel = 100;
        this->consumption = 0.18;
        this->model = new char[50];
    }
    
    ~Car() {
        std::cout << "destructing car" << std::endl;
        delete this->model;
    }
    
    void move(double distance) {
        double fuelNeeded = distance * this->consumption;
        
        if ( fuelNeeded > this->currentFuel ) {
            std::cout << "Can't move. Not enough fuel." << std::endl;
            return;
        }
        
        this->currentFuel -= fuelNeeded;
        std::cout << "Car traveled " << distance << " miles." << std::endl;
    }
};

class Driver {
public:
    void driveCar(Car* car, double distance) {
        car->move(distance);
    }
};

int main() {
    Car *toyota = new Car();
    Driver *andrey = new Driver();
    
    andrey->driveCar(toyota, 150);
    
    delete toyota;
    delete andrey;
    
    return 0;
}
