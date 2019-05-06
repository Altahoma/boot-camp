#include "SpellCaster.h"

SpellCaster::SpellCaster(const char* title, int hp, int dmg, int mp) 
	: Unit(title, hp, dmg) {
	this->_stateMagic = new StateMagic(mp);
	this->spellBook = new SpellBook();
}

SpellCaster::~SpellCaster() {
	delete this->_stateMagic;
	delete this->spellBook;
}

int SpellCaster::getMp() const {
	return this->_stateMagic->getMp();
}

int SpellCaster::getMpLimit() const {
	return this->_stateMagic->getMpLimit();
}

StateMagic& SpellCaster::getStateMagic() const {
	return *(this->_stateMagic);
}

void SpellCaster::spendMp(int mp) {
	this->state->ensureIsAlive();
	this->_stateMagic->spendMp(mp);
}

void SpellCaster::restoreMp(int mp) {
	this->state->ensureIsAlive();
	this->_stateMagic->restoreMp(mp);
}

void SpellCaster::newSpellBook(SpellBook* book) {
	this->spellBook = book;
}

void SpellCaster::cast(const char* spell, Unit* target) {
	target->ensureIsAlive();

	Spell* someSpell = this->spellBook->getSpell(spell);

	this->spendMp(someSpell->getCost());
	someSpell->action(target);
}

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster) {
	out << "Unit: " << spellCaster.getTitle() << "\n"
		<< "HP: " << spellCaster.getHp() << "/" << spellCaster.getHpLimit() << "\n"
		<< "MP: " << spellCaster.getMp() << "/" << spellCaster.getMpLimit() << "\n"
		<< "Physical damage: " << spellCaster.getPhysicalDmg()
		<< std::endl;

	return out;
}