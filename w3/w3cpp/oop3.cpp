# include <iostream>

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
    
    Car(double maxFuel, double currentFuel, double consumption) {
        std::cout << "constructing car" << std::endl;
        
        this->maxFuel = maxFuel;
        this->currentFuel = currentFuel;
        this->consumption = consumption;
        this->model = new char[50];
    }
    
    ~Car() {
        std::cout << "destructing car" << std::endl;
        delete this->model;
    }
    
    void drive(double distance) {
        double fuelNeeded = consumption * distance;
        
        if ( fuelNeeded > currentFuel ) {
            std::cout << "Not enougt fuel." << std::endl;
            return;
        }
        currentFuel -= fuelNeeded;
        std::cout << "Car traveled " << distance << " miles." << std::endl;
    }
    
    void refill(double fuel) {
        double maxRefillVolume = maxFuel - currentFuel;
        
        if ( fuel > maxRefillVolume ) {
            std::cout << "Max fuel amount exceeded!" << std::endl;
            return;
        }
        currentFuel += fuel;
        std::cout << "Car was successfully refilled!" << std::endl;
    }
    
    void report() {
        std::cout << "-- fuel capacity: " << this->maxFuel << std::endl;
        std::cout << "-- fuel amount: " << this->currentFuel << std::endl;
        std::cout << "-- fuel consumption: " << this->consumption << std::endl;
        std::cout << "-- model: " << this->model << std::endl;
    }
};

int main() {
    // Car toyota(50.0, 50.0, 0.18);
    Car toyota;
    
    toyota.report();
    toyota.drive(40.0);
    toyota.drive(30.0);
    toyota.refill(100.0);
    toyota.report();
    toyota.refill(30.0);
    toyota.report();
    
    return 0;
}
