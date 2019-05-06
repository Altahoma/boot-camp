#include "AttackRogue.h"

AttackRogue::AttackRogue(Unit* instance)
    : Attack(instance) {
    
}

AttackRogue::~AttackRogue() {
    
}

void AttackRogue::attack(Unit *enemy) {
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg());
}