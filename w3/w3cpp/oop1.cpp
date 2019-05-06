#include <iostream>

class Car {
public:
    int maxSpeed;
    int currentSpeed;
    
    void accelerate() {
        this->accelerate(8);
    }
    
    void accelerate(int delta) {
        this->currentSpeed += delta;
        
        if ( this->currentSpeed > this-> maxSpeed ) {
            this->currentSpeed = this->maxSpeed;
        }
    }
    
    void deccelerate() {
        this->deccelerate(12);
    }
    
    void deccelerate(int delta) {
        this->currentSpeed -= delta;
        
        if ( this->currentSpeed < 0 ) {
            this->currentSpeed = 0;
        }
    }
};

int main() {
    Car car1, car2;
    
    car1.maxSpeed = 260;
    car2.maxSpeed = 180;
    
    car1.currentSpeed = 50;
    car2.currentSpeed = 50;
    
    std::cout << "maxSpeed:" << std::endl;
    std::cout << "  car1: " << car1.maxSpeed << std::endl;
    std::cout << "  car2: " << car2.maxSpeed << std::endl;
    std::cout << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << std::endl;
    
    car1.accelerate();
    car2.deccelerate();
    car2.deccelerate(20);
    
    std::cout << "currentSpeed:" << std::endl;
    std::cout << "  car1: " << car1.currentSpeed << std::endl;
    std::cout << "  car2: " << car2.currentSpeed << std::endl;
    
    return 0;
}
