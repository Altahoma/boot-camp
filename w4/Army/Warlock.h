#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "Demon.h"

class Warlock : public SpellCaster {
	public:
		Demon* summon;

		Warlock(const char* title="Warlock", int hp=120, int physicalDmg=15, int mp=120);
		~Warlock();

		void summonDemon();
};

#endif // WARLOCK_H

