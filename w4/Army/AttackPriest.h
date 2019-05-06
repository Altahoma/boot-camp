#ifndef ATTACKPRIES_H
#define ATTACKPRIES_H

#include "Attack.h"
#include "Unit.h"

class AttackPriest : public Attack {
	public:
		AttackPriest(Unit* instance);
		~AttackPriest();

		virtual void attack(Unit *enemy);
};

#endif // ATTACKPRIES_H

