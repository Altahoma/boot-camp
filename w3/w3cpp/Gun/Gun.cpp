#include <iostream>
#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun() {
    
}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    isReady = !isReady;
}

void Gun::reload() {
    amount = capacity;
}

void Gun::shoot() {
    if ( !ready() ) {
        throw NotReady();
    }
    
    if ( amount == 0 ) {
        isReady = false;
        throw OutOfRounds();
    }
    
    amount -= 1;
    totalShots += 1;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << gun.getModel() << ' ' << "[Amount: " << gun.getAmount() << '/' << gun.getCapacity() << ']' << ' ';
    if ( gun.ready() ) {
        out << "[Ready]";
    } else {
        out << "[Not ready]";
    }
    out << ' ' << "[Total shots: " << gun.getTotalShots() << ']';
    return out;
}