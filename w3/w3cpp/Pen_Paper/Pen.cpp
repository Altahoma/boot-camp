#include <iostream>
#include "Pen.h"
// #include "Paper.h"

Pen::Pen(int inkCapacity) {
    this->inkAmount = inkCapacity;
    this->inkCapacity = inkCapacity;
}

Pen::~Pen() {
    
}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    int inkNeeded = message.size();
    int spaceAmount = paper.getMaxSymbols() - paper.getSymbols();
    
    if ( !this->inkAmount ) {
        throw OutOfInk();
    }
    
    if ( inkNeeded > this->inkAmount ) {
        inkNeeded = this->inkAmount;
    }
    
    if ( inkNeeded > spaceAmount ) {
        inkNeeded = spaceAmount;
    }
    
    this->inkAmount -= inkNeeded;
    
    paper.addContent(message.substr(0, inkNeeded));
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}