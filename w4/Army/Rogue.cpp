#include "Rogue.h"

Rogue::Rogue(const char* title, int hp, int physicalDmg)
    : Unit(title, hp, physicalDmg) {
        this->_attack = new AttackRogue(this);
}

Rogue::~Rogue() {
    
}