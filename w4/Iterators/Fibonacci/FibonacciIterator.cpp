#include "FibonacciIterator.h"

FibonacciIterator::FibonacciIterator(int index) {
	this->currentIndex = 1;
	this->result = 1;
	this->previous = 0;
	this->index = index;

	if ( index < 0 ) {
		this->negative = true;
		this->index *= -1;
	} else if ( index == 0 ) {
		this->result = 0;
	}
}

FibonacciIterator::~FibonacciIterator() {

}

void FibonacciIterator::next() {
	if (this->over()) {
		return;
	}
	int temp = this->result;
	this->result += this->previous;
	this->previous = temp;
	this->currentIndex += 1;
}
bool FibonacciIterator::over() {
	if ( this->index == 0 ) {
		this->index += 1;
		return false;
	}
	return (this->currentIndex > this->index);
}
int FibonacciIterator::value() {
	if ( this->currentIndex % 2 == 0 && this->negative == true ) {
		return this->result * -1;
	}
	return this->result;
}
int FibonacciIterator::begin() {
	this->currentIndex = 1;
	this->result = 1;
	this->previous = 0;
	return this->result;
}

void FibonacciIterator::operator++() {
	this->next();
}
void FibonacciIterator::operator++(int) {
	this->operator++();
}
int FibonacciIterator::operator*() {
	return this->value();
}