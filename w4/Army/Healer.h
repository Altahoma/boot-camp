#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"

class Healer : public SpellCaster {
	public:
		Healer(const char* title="Healer", int hp=100, int physicalDmg=10, int mp=200);
		~Healer();
};

#endif // HEALER_H
