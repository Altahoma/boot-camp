#include "Priest.h"

Priest::Priest(const char* title, int hp, int physicalDmg, int mp) 
	: SpellCaster(title, hp, physicalDmg, mp) {
	this->_attack = new AttackPriest(this);

	this->spellBook->addSpell("FireBall", new FireBall(30, 15));
	this->spellBook->addSpell("Heal", new Heal());
	this->spellBook->addSpell("GreatHeal", new GreatHeal());
	this->spellBook->addSpell("MightOfHeaven", new MightOfHeaven());
}

Priest::~Priest() {

}
