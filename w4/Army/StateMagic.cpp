#include "StateMagic.h"

StateMagic::StateMagic(int mp) {
	this->mp = mp;
	this->mpLimit = mp;
}

StateMagic::~StateMagic() {

}

int StateMagic::getMp() const {
	return this->mp;
}

int StateMagic::getMpLimit() const {
	return this->mpLimit;
}

void StateMagic::restoreMp(int mp) {
	if ( mp > this->mpLimit - this->mp ) {
		this->mp = this->mpLimit;
		return;
	}

	this->mp += mp;
}

void StateMagic::spendMp(int mp) {
	if (this->mp == 0 || this->mp < mp) {
		throw OutOfManaException();
	}
	this->mp -= mp;
}

std::ostream& operator<<(std::ostream& out, const StateMagic& StateMagic) {
	out << "[mp: " << StateMagic.getMp() << "/" << StateMagic.getMpLimit() << "]";

	return out;
}
