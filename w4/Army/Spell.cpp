#include "Spell.h"

Spell::Spell(int cost, int points) {
	this->cost = cost;
	this->points = points;
}

Spell::~Spell() {

}

int Spell::getCost() const {
	return this->cost;
}

int Spell::getPoints() const {
	return this->points;
}