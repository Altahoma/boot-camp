#include "Necromancer.h"

Necromancer::Necromancer(const char* title, int hp, int physicalDmg, int mp)
	: SpellCaster(title, hp, physicalDmg, mp) {
	this->spellBook->addSpell("FireBall", new FireBall());
	this->spellBook->addSpell("Heal", new Heal(20, 10));
	this->spellBook->addSpell("DeathSpike", new DeathSpike());
}

Necromancer::~Necromancer() {

}

void Necromancer::observe(Unit* target) {
	target->addObserver(this);
}

void Necromancer::attack(Unit* enemy) {
	this->_attack->attack(enemy);

	this->observe(enemy);
}

void Necromancer::cast(const char* spell, Unit* target) {
	target->ensureIsAlive();

	Spell* someSpell = this->spellBook->getSpell(spell);

	this->spendMp(someSpell->getCost());
	someSpell->action(target);

	this->observe(target);
}