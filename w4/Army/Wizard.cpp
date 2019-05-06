#include "Wizard.h"

Wizard::Wizard(const char* title, int hp, int physicalDmg, int mp)
	: SpellCaster(title, hp, physicalDmg, mp) {
	this->spellBook->addSpell("FireBall", new FireBall());
	this->spellBook->addSpell("HydroBlast", new HydroBlast());
	this->spellBook->addSpell("Heal", new Heal(20, 10));
}

Wizard::~Wizard() {

}
