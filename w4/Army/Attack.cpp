#include "Attack.h"

Attack::Attack(Unit* instance)
    : instance(instance) {
    
}

Attack::~Attack() {
    
}

void Attack::attack(Unit* enemy) {
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg());
    enemy->counterAttack(this->instance);
}

void Attack::counterAttack(Unit* enemy) {
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg()/3);
}