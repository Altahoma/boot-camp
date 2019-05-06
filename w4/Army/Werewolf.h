#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "AttackWerewolf.h"

class Werewolf : public Unit {
    protected:
        State* alternativeState;
        Attack* alternativeAttack;
    public:
        Werewolf(const char* title="Werewolf", int hp=200, int physicalDmg=35);
        ~Werewolf();
        
        void transform();
};

#endif // WEREWOLF_H