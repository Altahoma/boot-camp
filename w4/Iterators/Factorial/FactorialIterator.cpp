#include "FactorialIterator.h"

FactorialIterator::FactorialIterator(int index) {
	if (index < 0) {
		throw InvalidParam();
	}
	this->index = index;
	this->current = 1;
	this->result = 1;
}

FactorialIterator::~FactorialIterator() {

}

void FactorialIterator::next() {
	if (this->over()) {
		return;
	}
	this->result *= this->current;
	this->current += 1;
}
void FactorialIterator::previous() {
	this->result /= this->current;
	this->current -= 1;

	if (this->current < 1) {
		return;
	}
}
bool FactorialIterator::over() {
	return (this->current > this->index+1);
}
int FactorialIterator::value() {
	return this->result;
}
int FactorialIterator::begin() {
	this->result = 1;
	this->current = 1;
	return 1;
}

void FactorialIterator::operator++() {
	this->next();
}
void FactorialIterator::operator++(int) {
	this->operator++();
}
void FactorialIterator::operator--() {
	this->previous();
}
void FactorialIterator::operator--(int) {
	this->operator--();
}
int FactorialIterator::operator*() {
	return this->value();
}