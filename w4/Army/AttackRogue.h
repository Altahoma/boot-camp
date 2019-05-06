#ifndef ATTACKROGUE_H
#define ATTACKROGUE_H

#include "Attack.h"
#include "Unit.h"

class AttackRogue : public Attack {
    public:
        AttackRogue(Unit* instance);
        ~AttackRogue();
        
        virtual void attack(Unit *enemy);
};


#endif // ATTACKROGUE_H