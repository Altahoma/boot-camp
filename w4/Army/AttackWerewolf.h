#ifndef ATTACKWEREWOLF_H
#define ATTACKWEREWOLF_H

#include "Attack.h"
#include "Unit.h"
#include "Werewolf.h"

class AttackWerewolf : public Attack {
    public:
        AttackWerewolf(Unit* instance);
        ~AttackWerewolf();
        
        virtual void attack(Unit *enemy);
        virtual void counterAttack(Unit *enemy);
        virtual void infect(Unit *enemy);
};

#endif // ATTACKWEREWOLF_H