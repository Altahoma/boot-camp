#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"

class Wizard : public SpellCaster {
	public:
		Wizard(const char* title="Wizard", int hp=100, int physicalDmg=10, int mp=150);
		~Wizard();
};

#endif // WIZARD_H

