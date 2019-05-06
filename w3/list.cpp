#include <iostream>
#include <cstdlib>
#include "list.h"

List::List() {
    this->capacity = 100;
    this->current = 0;
    
    int* temp = (int*)malloc(sizeof(int) * this->capacity);
    
    if ( *temp != 0 ) {
        this->array = temp;
    }
    
    std::cout << "List constructor." << std::endl;
}

int List::getCapacity() const {
    // this->capacity += 1;
    return this->capacity;
}
