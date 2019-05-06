#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <map>
#include "IObservable.h"
#include "Exceptions.h"
#include "State.h"
#include "Attack.h"

class Attack;

class Unit : public IObservable {
    protected:
		std::map<int, Unit*>* observers;
		int sizeObs = 0;
        State* state;
        Attack* _attack;
    public:
        Unit(const char* title, int hp, int physicalDmg);
        virtual ~Unit();

		void addObserver(Unit* newObserver) override;
		void notifyObservers() override;

        const char* getTitle() const;
        int getHp() const;
        int getHpLimit() const;
        int getPhysicalDmg() const;
        void ensureIsAlive();
        
        void setState(State* state);
        void setAttack(Attack* attack);
        
        virtual void takePhysicalDmg(int dmg);
        virtual void takeMagicalDmg(int dmg);
        virtual void restoreHp(int hp);
        
        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H