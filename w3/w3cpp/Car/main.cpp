#include <iostream>
#include "Car.h"
#include "Point.h"

int main() {
    Car car;
    
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Location: " << car.getLocation() << std::endl;
    std::cout << "Fuel amount: " << car.getFuelAmount() << std::endl;
    std::cout << "Fuel capacity: " << car.getFuelCapacity() << std::endl;
    std::cout << "Fuel consumption: " << car.getFuelConsumption() << std::endl;
    
    std::cout << std::endl;
    
    car.refill(33);
    std::cout << "Fuel amount: " << car.getFuelAmount() << std::endl;
    
    car.refill(27);
    std::cout << "Fuel amount: " << car.getFuelAmount() << std::endl;
    
    // car.refill(27);
    // std::cout << "Fuel amount: " << car.getFuelAmount() << std::endl;
    
    std::cout << std::endl;
    std::cout << car << std::endl;
    
    std::cout << std::endl;
    
    car.drive(Point(5, 11));

    std::cout << "Location: " << car.getLocation() << std::endl;
    std::cout << "Fuel amount: " << car.getFuelAmount() << std::endl;
    
    std::cout << std::endl;
    std::cout << car << std::endl;
    
    std::cout << std::endl;
    car.drive(8, 16);
    std::cout << car << std::endl;
    
    // car.refill(1);
    // car.drive(79, 61);
    // std::cout << car << std::endl;
    
    // std::cout << car << std::endl;
    
    // car.drive(Point(5, 11));
    
    // std::cout << car << std::endl;
    
    return 0;
}
