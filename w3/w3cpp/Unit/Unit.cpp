#include <iostream>
#include "Unit.h"

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->damage = dmg;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->name = name;
}

Unit::~Unit() {
    
}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    
    if ( hp > this->hitPointsLimit - this->hitPoints ) {
        this->hitPoints = this->hitPointsLimit;
        
        return;
    }
    
    this->hitPoints += hp;
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    
    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        
        return;
    }
    
    this->hitPoints -= dmg;
}

void Unit::attack(Unit& enemy) {
    enemy.takeDamage(this->damage);
    
    if ( enemy.getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void Unit::counterAttack(Unit& enemy) {
    int dmg = enemy.getDamage() / 2;
    
    takeDamage(dmg);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << ' ' << "[HP: " << unit.getHitPoints() << '/' << unit.getHitPointsLimit() << ']' << ' ' << "[DMG: " << unit.getDamage() << ']';
    return out;
}