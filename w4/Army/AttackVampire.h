#ifndef ATTACKVAMPIRE_H
#define ATTACKVAMPIRE_H

#include "Attack.h"
#include "Unit.h"

class AttackVampire : public Attack {
    public:
        AttackVampire(Unit* instance);
        ~AttackVampire();
        
        virtual void attack(Unit *enemy);
        virtual void counterAttack(Unit *enemy);
        virtual void infect(Unit *enemy);
};

#endif // ATTACKVAMPIRE_H