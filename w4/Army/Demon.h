#ifndef DEMON_H
#define DEMON_H

#include "Unit.h"

class Demon : public Unit {
	public:
		Demon(const char* title="Demon", int hp=120, int physicalDmg=35);
		~Demon();
};

#endif // DEMON_H

