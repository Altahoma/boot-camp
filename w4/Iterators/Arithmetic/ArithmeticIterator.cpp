#include "ArithmeticIterator.h"

ArithmeticIterator::ArithmeticIterator(int first, int step, int index) {
	if (step == 0) {
		throw InvalidParam();
	}

	this->first = first;
	this->step = step;
	this->index = index;
	this->current = first;
	this->currentIndex = 1;
}


ArithmeticIterator::~ArithmeticIterator() {

}

void ArithmeticIterator::next() {
	if ( this->over() ) {
		return;
	}
	this->current += this->step;
	this->currentIndex += 1;
}
void ArithmeticIterator::previous() {
	int previous = this->current -= this->step;
	
	if ( previous < this->first ) {
		return;
	}
}
bool ArithmeticIterator::over() {
	return (this->currentIndex > this->index);
}
int ArithmeticIterator::value() {
	return current;
}
int ArithmeticIterator::begin() {
	this->current = this->first;
	return this->first;
}
int ArithmeticIterator::end() {
	return this->index;
}

void ArithmeticIterator::operator++() {
	this->next();
}
void ArithmeticIterator::operator++(int) {
	this->operator++();
}
void ArithmeticIterator::operator--() {
	this->previous();
}
void ArithmeticIterator::operator--(int) {
	this->operator--();
}
int ArithmeticIterator::operator*() {
	return this->value();
}
