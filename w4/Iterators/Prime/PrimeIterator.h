#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

#include <iostream>
#include <cstdlib>
#include <cmath>

class InvalidParam {};
class OutOfMemory {};

class PrimeIterator {
	private:
		int* array;
		int number;
		int current;
		int limit;
	public:
		PrimeIterator(int number=50);
		~PrimeIterator();

		void next();
		void previous();
		bool over();
		int value();
		void begin();

		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
		int operator*();
};

#endif // PRIMEITERATOR_H

