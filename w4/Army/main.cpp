#include <iostream>
#include "Soldier.h"
#include "Rogue.h"
#include "Berserker.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Wizard.h"
#include "Healer.h"
#include "Priest.h"
#include "Warlock.h"
#include "Necromancer.h"

int main() {
	setlocale(LC_CTYPE, "rus");

	Soldier* soldier = new Soldier();
	Rogue* rogue = new Rogue();
	Berserker* berserker = new Berserker();
	Vampire* vampire = new Vampire();
	Werewolf* werewolf = new Werewolf();
	Wizard* wizard = new Wizard();
	Healer* healer = new Healer();
	Priest* priest = new Priest();
	Warlock* warlock = new Warlock();
	Necromancer* necromancer = new Necromancer();

	//before
	std::cout << *warlock << std::endl;
	warlock->summonDemon();
	std::cout << *warlock->summon << std::endl;
	std::cout << *wizard << std::endl;
	std::cout << *werewolf << std::endl;
	std::cout << *healer << std::endl;
	std::cout << *berserker << std::endl;

	

	warlock->summon->attack(berserker);
	wizard->cast("HydroBlast", werewolf);
	healer->cast("Heal", berserker);

	//after
	std::cout << "-----------------------------------" << std::endl;
	std::cout << *warlock << std::endl;
	std::cout << *warlock->summon << std::endl;
	std::cout << *wizard << std::endl;
	std::cout << *werewolf << std::endl;
	std::cout << *healer << std::endl;
	std::cout << *berserker << std::endl;

	return 0;
}
