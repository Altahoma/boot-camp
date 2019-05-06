#include "AttackVampire.h"

AttackVampire::AttackVampire(Unit* instance)
    : Attack(instance) {
    
}

AttackVampire::~AttackVampire() {
    
}

void AttackVampire::attack(Unit *enemy) {
    enemy->ensureIsAlive();
    if ( enemy->getHp() >= this->instance->getPhysicalDmg() ) {
        this->instance->restoreHp(this->instance->getPhysicalDmg()/3);
    } else {
        this->instance->restoreHp(enemy->getHp()/3);
    }
    
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg());
    enemy->counterAttack(this->instance);
    this->infect(enemy);
}

void AttackVampire::counterAttack(Unit *enemy) {
    enemy->ensureIsAlive();
    if ( enemy->getHp() >= this->instance->getPhysicalDmg() ) {
        this->instance->restoreHp(this->instance->getPhysicalDmg()/9);
    } else {
        this->instance->restoreHp(enemy->getHp()/9);
    }
    
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg()/3);
}

void AttackVampire::infect(Unit *enemy) {
    enemy->ensureIsAlive();
    if ( enemy->getTitle() != "Vampire" && enemy->getTitle() != "Werewolf" ) {
        enemy->setState(new State("Vampire", 90, 30));
        enemy->setAttack(new AttackVampire(enemy));
    }
}