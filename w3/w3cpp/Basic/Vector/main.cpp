#include <iostream>
#include "Vector.h"

int main() {
    Vector x(2, 7);
    Vector y(3, 8);
    Vector z;
    
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    
    std::cout << "Len: " << x.len() << std::endl;
    
    std::cout << "getX: " << x.getX() << std::endl;
    std::cout << "getY: " << x.getY() << std::endl;
    
    y.setX(4);
    y.setY(9);
    
    std::cout << "setX: " << y.getX() << std::endl;
    std::cout << "setY: " << y.getY() << std::endl;
    
    if ( x == y ) {
       std::cout << x << " is equal to " << y << std::endl;
    } else {
       std::cout << x << " is not equal to " << y << std::endl;
    }
    
    if ( x != y ) {
       std::cout << x << " is not equal to " << y << std::endl;
    } else {
       std::cout << x << " is equal to " << y << std::endl;
    }
    
    x += y;
    std::cout << "x += y: " << x << std::endl;
    
    x -= y;
    std::cout << "x -= y: " << x << std::endl;
    
    std::cout << "x + y: " << x+y << std::endl;
    std::cout << "x - y: " << x-y << std::endl;
    
    return 0;
}
