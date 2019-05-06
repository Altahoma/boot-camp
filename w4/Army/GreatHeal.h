#ifndef GREATHEAL_H
#define GREATHEAL_H

#include "Spell.h"

class GreatHeal : public Spell {
public:
	GreatHeal(int cost = 50, int points = 50);
	virtual ~GreatHeal();

	virtual void action(Unit* target);
};

#endif // GREATHEAL_H

