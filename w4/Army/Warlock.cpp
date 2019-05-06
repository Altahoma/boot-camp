#include "Warlock.h"

Warlock::Warlock(const char* title, int hp, int physicalDmg, int mp)
	: SpellCaster(title, hp, physicalDmg, mp) {
	this->spellBook->addSpell("FireBall", new FireBall());
	this->spellBook->addSpell("Heal", new Heal());
}

Warlock::~Warlock() {
	delete this->summon;
}

void Warlock::summonDemon() {
	this->spendMp(50);
	this->summon = new Demon();
}