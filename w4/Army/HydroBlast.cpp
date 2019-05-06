#include "HydroBlast.h"

HydroBlast::HydroBlast(int cost, int points) : Spell(cost, points) {

}

HydroBlast::~HydroBlast() {

}

void HydroBlast::action(Unit* target) {
	target->takeMagicalDmg(this->points);
}