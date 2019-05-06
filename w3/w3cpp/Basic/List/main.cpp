#include <iostream>
#include "List.h"

int main() {
    List list;
    List list2;
    
    if ( list != list2 ) {
        std::cout << "no" << std::endl;
    } else {
        std::cout << "y" << std::endl;
    }
    
    for ( int i = 0; i < 1000; i++ ) {
        list.push_back(i);
        list2.push_back(i);
    }
    
    list.push_back(322);
    list2.push_back(228);
    
    if ( list != list2 ) {
        std::cout << "no" << std::endl;
    } else {
        std::cout << "y" << std::endl;
    }
    
    std::cout << list2[1000] << std::endl;
    
    return 0;
}
