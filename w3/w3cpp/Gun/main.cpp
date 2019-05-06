#include <iostream>
#include "Gun.h"

int main() {
    Gun gun;
    Gun beretta("Beretta", 2);
    
    std::cout << "Amount: " << beretta.getAmount() << std::endl;
    std::cout << "Capacity: " << beretta.getCapacity() << std::endl;
    std::cout << "Ready: " << beretta.ready() << std::endl;
    std::cout << "Model: " << beretta.getModel() << std::endl;
    std::cout << "Total shots: " << beretta.getTotalShots() << std::endl;
    
    std::cout << std::endl;
    
    beretta.prepare();
    std::cout << "Ready: " << beretta.ready() << std::endl;
    
    beretta.reload();
    std::cout << "Amount: " << beretta.getAmount() << std::endl;
    
    beretta.shoot();
    std::cout << "Amount: " << beretta.getAmount() << std::endl;
    std::cout << "Total shots: " << beretta.getTotalShots() << std::endl;
    beretta.shoot();
    std::cout << "Amount: " << beretta.getAmount() << std::endl;
    std::cout << "Total shots: " << beretta.getTotalShots() << std::endl;
    // beretta.shoot();
    // std::cout << "Amount: " << beretta.getAmount() << std::endl;
    // std::cout << "Total shots: " << beretta.getTotalShots() << std::endl;
    
    std::cout << beretta << std::endl;
    
    // std::cout << gun << std::endl;
    // std::cout << beretta << std::endl;
    
    // beretta.reload();
    // beretta.prepare();
    
    // beretta.shoot();
    
    // std::cout << gun << std::endl;
    // std::cout << beretta << std::endl;
    
    return 0;
}