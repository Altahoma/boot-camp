#include "Werewolf.h"

Werewolf::Werewolf(const char* title, int hp, int physicalDmg)
    : Unit(title, hp, physicalDmg) {
        this->_attack = new AttackWerewolf(this);
        this->alternativeState = new State("Werewolf", 100, 25);
        this->alternativeAttack = new Attack(this);
}

Werewolf::~Werewolf() {
    delete this->alternativeState;
    delete this->alternativeAttack;
}

void Werewolf::transform() {
    this->ensureIsAlive();
    
    State* tempState = this->state;
    Attack* tempAttack = this->_attack;
    
    this->state = alternativeState;
    this->_attack = alternativeAttack;
    
    this->alternativeState = tempState;
    this->alternativeAttack = tempAttack;
}