#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
	public:
		Heal(int cost=20, int points=20);
		virtual ~Heal();

		virtual void action(Unit* target);
};

#endif // HEAL_H

