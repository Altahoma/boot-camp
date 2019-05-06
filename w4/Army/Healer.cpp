#include "Healer.h"

Healer::Healer(const char* title, int hp, int physicalDmg, int mp) 
	: SpellCaster(title, hp, physicalDmg, mp) {
	this->spellBook->addSpell("FireBall", new FireBall(30, 15));
	this->spellBook->addSpell("Heal", new Heal());
	this->spellBook->addSpell("GreatHeal", new GreatHeal());
}


Healer::~Healer() {

}
