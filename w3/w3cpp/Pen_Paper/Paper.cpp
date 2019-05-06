#include <iostream>
#include "Paper.h"

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
}

Paper::~Paper() {
    
}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int spaceNeeded = message.size();
    int spaceAmount = this->maxSymbols - this->symbols;
    
    if ( this->symbols == this->maxSymbols ) {
        throw OutOfSpace();
    }
    
    if ( spaceAmount < spaceNeeded ) {
        spaceNeeded = spaceAmount;
    }
    
    this->symbols += spaceNeeded;
    
    content += message.substr(0, spaceAmount);
}

void Paper::show() const {
    std::cout << content << std::endl;
}