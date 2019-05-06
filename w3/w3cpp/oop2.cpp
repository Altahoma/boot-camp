#include <iostream>

class Car {
public:
    double fuelCapacity;
    double fuelAmount;
    double fuelConsumption;
    
    Car(double capacity, double amount, double consumption) {
        fuelCapacity = capacity;
        fuelAmount = amount;
        fuelConsumption = consumption;
    }
    
    void drive(double distance) {
        double fuelNeeded = fuelConsumption * distance;
        
        if ( fuelNeeded > fuelAmount ) {
            std::cout << "Not enougt fuel." << std::endl;
            return;
        }
        fuelAmount -= fuelNeeded;
        std::cout << "Car traveled " << distance << " miles." << std::endl;
    }
    
    void refill(double fuel) {
        double maxRefillVolume = fuelCapacity - fuelAmount;
        
        if ( fuel > maxRefillVolume ) {
            std::cout << "Max fuel amount exceeded!" << std::endl;
            return;
        }
        fuelAmount += fuel;
        std::cout << "Car was successfully refilled!" << std::endl;
    }
    
    void report() {
        std::cout << "-- fuel capacity: " << fuelCapacity << std::endl;
        std::cout << "-- fuel amount: " << fuelAmount << std::endl;
        std::cout << "-- fuel consumption: " << fuelConsumption << std::endl;
    }
};

int main() {
    Car toyota(50.0, 50.0, 0.8);
    
    toyota.report();
    toyota.drive(40.0);
    toyota.drive(30.0);
    toyota.refill(100.0);
    toyota.report();
    toyota.refill(30.0);
    toyota.report();
    
    return 0;
}
