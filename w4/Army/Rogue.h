#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "AttackRogue.h"

class Rogue : public Unit {
    public:
        Rogue(const char* title="Rogue", int hp=128, int physicalDmg=42);
        ~Rogue();
};

#endif // ROGUE_H