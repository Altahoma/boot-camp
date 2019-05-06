#include "AttackWerewolf.h"

AttackWerewolf::AttackWerewolf(Unit* instance)
    : Attack(instance) {
    
}

AttackWerewolf::~AttackWerewolf() {
    
}

void AttackWerewolf::attack(Unit *enemy) {
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg());
    enemy->counterAttack(this->instance);
    this->infect(enemy);
}

void AttackWerewolf::counterAttack(Unit *enemy) {
    enemy->takePhysicalDmg(this->instance->getPhysicalDmg()/3);
}

void AttackWerewolf::infect(Unit *enemy) {
    enemy->ensureIsAlive();
    if ( enemy->getTitle() != "Vampire" && enemy->getTitle() != "Werewolf" ) {
        enemy->setState(new State("Werewolf", 200, 35));
        enemy->setAttack(new AttackWerewolf(enemy));
    }
}