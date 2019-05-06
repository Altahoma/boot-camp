#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "Exceptions.h"

class State {
    protected:
        const char* title;
        int hp;
        int hpLimit;
        int physicalDmg;
    public:
        State(const char* title, int hp, int physicalDmg);
        virtual ~State();
        
        const char* getTitle() const;
        int getHp() const;
        int getHpLimit() const;
        int getPhysicalDmg() const;
        void ensureIsAlive();
        
        virtual void takePhysicalDmg(int dmg);
        virtual void takeMagicalDmg(int dmg);
        virtual void restoreHp(int hp);
};

#endif // STATE_H