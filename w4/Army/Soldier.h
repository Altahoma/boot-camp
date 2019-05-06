#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(const char* title="Soldier", int hp=100, int physicalDmg=25);
        ~Soldier();
};

#endif // SOLDIER_H