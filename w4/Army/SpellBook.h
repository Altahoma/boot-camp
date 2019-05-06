#ifndef SPELLBOOK_H
#define SPELLBOOL_H

#include <map>
#include "FireBall.h"
#include "HydroBlast.h"
#include "Heal.h"
#include "GreatHeal.h"
#include "MightOfHeaven.h"
#include "DeathSpike.h"

class SpellCaster;

class SpellBook {
	private:
		std::map<const char*, Spell*>* book;
	public:
		SpellBook();
		virtual ~SpellBook();

		std::map<const char*, Spell*>* getBook();
		Spell* getSpell(const char* spellName) const;
		
		void addSpell(const char* spellName, Spell* spell);
		void removeSpell(const char* spellName);
};

#endif // SPELLBOOK_H

