#include "DeathSpike.h"

DeathSpike::DeathSpike(int cost, int points)
	: Spell(cost, points) {

}

DeathSpike::~DeathSpike() {

}

void DeathSpike::action(Unit* target) {
	target->takeMagicalDmg(this->points);
}