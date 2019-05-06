#include "GeometricIterator.h"

GeometricIterator::GeometricIterator(int first, int step, int index) {
	if (first == 0 || step == 0) {
		throw InvalidParam();
	}

	this->first = first;
	this->step = step;
	this->index = index;
	this->current = first;
	this->currentIndex = 1;
}

GeometricIterator::~GeometricIterator() {

}

void GeometricIterator::next() {
	if ( this->over() ) {
		return;
	}
	this->current *= this->step;
	this->currentIndex += 1;
}
void GeometricIterator::previous() {
	int previous = this->current /= this->step;
	this->currentIndex -= 1;

	if ( this->currentIndex == 1 ) {
		return;
	}
}
bool GeometricIterator::over() {
	return (this->currentIndex > this->index);
}
int GeometricIterator::value() {
	return current;
}
int GeometricIterator::begin() {
	this->currentIndex = 1;
	return this->first;
}

void GeometricIterator::operator++() {
	this->next();
}
void GeometricIterator::operator++(int) {
	this->operator++();
}
void GeometricIterator::operator--() {
	this->previous();
}
void GeometricIterator::operator--(int) {
	this->operator--();
}
int GeometricIterator::operator*() {
	return this->value();
}