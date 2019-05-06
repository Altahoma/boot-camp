#include "GreatHeal.h"

GreatHeal::GreatHeal(int cost, int points) : Spell(cost, points) {

}

GreatHeal::~GreatHeal() {

}

void GreatHeal::action(Unit* target) {
	target->restoreHp(this->points);
}
