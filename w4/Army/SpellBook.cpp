#include "SpellBook.h"

SpellBook::SpellBook() {
	this->book = new std::map <const char*, Spell*>();
}

SpellBook::~SpellBook() {
	delete this->book;
}

std::map<const char*, Spell*>* SpellBook::getBook() {
	return this->book;
}

Spell* SpellBook::getSpell(const char* spellName) const {
	return this->book->find(spellName)->second;
}

void SpellBook::addSpell(const char* spellName, Spell* spell) {
	this->book->emplace(spellName, spell);
}

void SpellBook::removeSpell(const char* spellName) {
	this->book->erase(spellName);
}