#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "SpellCaster.h"
#include "IObserver.h"

class Necromancer : public SpellCaster, public IObserver {
	private:
		void observe(Unit* target);
	public:
		Necromancer(const char* title = "Necromancer", int hp = 135, int physicalDmg = 20, int mp = 160);
		~Necromancer();

		virtual void attack(Unit* enemy);
		virtual void cast(const char* spell, Unit* target);
};

#endif // NECROMANCER_H

