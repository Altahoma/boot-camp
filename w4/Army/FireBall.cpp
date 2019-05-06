#include "FireBall.h"

FireBall::FireBall(int cost, int points) : Spell(cost, points) {

}

FireBall::~FireBall() {

}

void FireBall::action(Unit* target) {
	target->takeMagicalDmg(this->points);
}