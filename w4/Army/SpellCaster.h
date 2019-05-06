#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "Unit.h"
#include "StateMagic.h"
#include "SpellBook.h"

class SpellCaster : public Unit {
	protected:
		StateMagic* _stateMagic;
		SpellBook* spellBook;
	public:
		SpellCaster(const char* title, int hp, int dmg, int mp);
		virtual ~SpellCaster();

		int getMp() const;
		int getMpLimit() const;
		StateMagic& getStateMagic() const;

		virtual void spendMp(int mp);
		virtual void restoreMp(int mp);

		virtual void newSpellBook(SpellBook* book);
		virtual void cast(const char* spell, Unit* target);
};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster);

#endif // SPELLCASTER_H

