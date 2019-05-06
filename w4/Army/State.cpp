#include "State.h"

State::State(const char* title, int hp, int physicalDmg) {
    this->title = title;
    this->hp = hp;
    this->hpLimit = hp;
    this->physicalDmg = physicalDmg;
}

State::~State() {
    
}

const char* State::getTitle() const {
    return this->title;
}

int State::getHp() const {
    return this->hp;
}

int State::getHpLimit() const {
    return this->hpLimit;
}

int State::getPhysicalDmg() const {
    return this->physicalDmg;
}

void State::ensureIsAlive() {
    if ( this->hp == 0 ) {
        throw UnitIsDeadException();
    }
}

void State::takePhysicalDmg(int dmg) {
    this->ensureIsAlive();
    
    if ( dmg > this->hp ) {
        this->hp = 0;
        return;
    }
    
    this->hp -= dmg;
}

void State::takeMagicalDmg(int dmg) {
    this->ensureIsAlive();
    
    if ( dmg > this->hp ) {
        this->hp = 0;
        return;
    }
    
    this->hp -= dmg;
}

void State::restoreHp(int hp) {
    this->ensureIsAlive();
    
    if ( hp > this->hpLimit - this->hp ) {
        this->hp = this->hpLimit;
        return;
    }
    
    this->hp += hp;
}