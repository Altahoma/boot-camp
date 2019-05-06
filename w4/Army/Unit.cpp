#include "Unit.h"

Unit::Unit(const char* title, int hp, int physicalDmg) {
	this->observers = new std::map<int, Unit*>;
    this->state = new State(title, hp, physicalDmg);
    this->_attack = new Attack(this);
}

Unit::~Unit() {
    delete this->state;
    delete this->_attack;
	delete this->observers;
}

void Unit::addObserver(Unit* newObserver) {
	this->sizeObs += 1;
	this->observers->emplace(this->sizeObs, newObserver);
}

void Unit::notifyObservers() {
	for (; 0 < this->sizeObs; sizeObs--) {
		this->observers->find(this->sizeObs)->second->restoreHp(this->getHpLimit() / 10);
	}
}

const char* Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHp() const {
    return this->state->getHp();
}

int Unit::getHpLimit() const {
    return this->state->getHpLimit();
}

int Unit::getPhysicalDmg() const {
    return this->state->getPhysicalDmg();
}

void Unit::ensureIsAlive() {
    return this->state->ensureIsAlive();
}

void Unit::setState(State* state) {
    this->state = state;
}

void Unit::setAttack(Attack* attack) {
    this->_attack = attack;
}

void Unit::takePhysicalDmg(int dmg) {
    this->state->takePhysicalDmg(dmg);

	if ( this->state->getHp() == 0 ) {
		this->notifyObservers();
	}
}

void Unit::takeMagicalDmg(int dmg) {
    this->state->takeMagicalDmg(dmg);

	if (this->state->getHp() == 0) {
		this->notifyObservers();
	}
}

void Unit::restoreHp(int hp) {
    this->state->restoreHp(hp);
}

void Unit::attack(Unit* enemy) {
    this->_attack->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->_attack->counterAttack(enemy);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
	out << "Unit: " << unit.getTitle() << "\n"
		<< "HP: " << unit.getHp() << "/" << unit.getHpLimit() << "\n"
		<< "Physical damage: " << unit.getPhysicalDmg()
		<< std::endl;

	return out;
}