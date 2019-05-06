#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "AttackVampire.h"

class Vampire : public Unit {
    public:
        Vampire(const char* title="Vampire", int hp=90, int physicalDmg=30);
        ~Vampire();
};

#endif // VAMPIRE_H