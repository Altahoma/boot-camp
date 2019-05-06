#include "AttackPriest.h"

AttackPriest::AttackPriest(Unit* instance)
	: Attack(instance) {

}

AttackPriest::~AttackPriest() {

}

void AttackPriest::attack(Unit *enemy) {
	enemy->ensureIsAlive();

	if ( enemy->getTitle() == "Vampire" || enemy->getTitle() == "Necromancer" ) {
		enemy->takePhysicalDmg(this->instance->getPhysicalDmg()*2);
		enemy->counterAttack(this->instance);
		return;
	}

	enemy->takePhysicalDmg(this->instance->getPhysicalDmg());
	enemy->counterAttack(this->instance);
}
