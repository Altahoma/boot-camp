#ifndef STATEMAGIC_H
#define STATEMAGIC_H

#include <iostream>
#include "Exceptions.h"

class StateMagic {
	protected:
		int mp;
		int mpLimit;
	public:
		StateMagic(int mp);
		virtual ~StateMagic();

		int getMp() const;
		int getMpLimit() const;

		virtual void restoreMp(int mp);
		virtual void spendMp(int mp);
};

std::ostream& operator<<(std::ostream& out, const StateMagic& StateMagic);

#endif // STATEMAGIC_H

