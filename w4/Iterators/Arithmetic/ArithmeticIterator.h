#ifndef ARITHMETICITERATOR_H
#define ARITHMETICITERATOR_H

#include <iostream>

class InvalidParam {};

class ArithmeticIterator {
	private:
		int first;
		int step;
		int index;
		int current;
		int currentIndex;
	public:
		ArithmeticIterator(int first=0, int step=1, int index=10);
		~ArithmeticIterator();

		void next();
		void previous();
		bool over();
		int value();
		int begin();
		int end();

		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
		int operator*();
};

#endif // ARITHMETICITERATOR_H


