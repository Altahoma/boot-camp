#include <iostream>
#include "Unit.h"

int main() {
    Unit barbarian("Barbarian", 200, 20);
    Unit knight("Knight", 180, 25);
    
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    std::cout << std::endl;
    
    barbarian.attack(knight);
    
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    std::cout << std::endl;
    
    return 0;
}
