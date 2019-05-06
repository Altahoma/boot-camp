#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"

class Berserker : public Unit {
    public:
        Berserker(const char* title="Berserker", int hp=170, int physicalDmg=45);
        ~Berserker();
        
        void takeMagicalDmg(int dmg);
        void restoreHp(int dmg);
};

#endif // BERSERKER_H