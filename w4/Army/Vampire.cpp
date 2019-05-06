#include "Vampire.h"

Vampire::Vampire(const char* title, int hp, int physicalDmg)
    : Unit(title, hp, physicalDmg) {
        this->_attack = new AttackVampire(this);
}

Vampire::~Vampire() {
    
}