#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class FireBall : public Spell {
	public:
		FireBall(int cost=30, int points=30);
		virtual ~FireBall();

		virtual void action(Unit* target);
};

#endif // FIREBALL_H

