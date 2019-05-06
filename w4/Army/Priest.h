#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "AttackPriest.h"

class Priest : public SpellCaster {
	public:
		Priest(const char* title="Priest", int hp=100, int physicalDmg=15, int mp=200);
		~Priest();
};

#endif // PRIEST_H

