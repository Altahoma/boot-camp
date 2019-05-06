#include "MightOfHeaven.h"

MightOfHeaven::MightOfHeaven(int cost, int points) : Spell(cost, points) {

}

MightOfHeaven::~MightOfHeaven() {

}

void MightOfHeaven::action(Unit* target) {
	if ( target->getTitle() == "Vampire" || target->getTitle() == "Necromancer" ) {
		target->takeMagicalDmg(this->points*2);
		return;
	}
	target->takeMagicalDmg(this->points);
}
