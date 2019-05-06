#include <iostream>
#include "Date.h"

int main() {
    Date date(18, 06, 1997);
    
    std::cout << date << std::endl;
    
    try{
    Date date(1, 12, -1997);
    } catch (InvalidDate e) {
    std::cout<< e.text << std::endl;
    }
    
    return 0;
}
