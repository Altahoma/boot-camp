#ifndef FIBOBACCIITERATOR_H
#define FIBOBACCIITERATOR_H

#include <iostream>

class FibonacciIterator {
	private:
		int index;
		int currentIndex;
		bool negative;
		int previous;
		int result;
	public:
		FibonacciIterator(int index=10);
		~FibonacciIterator();

		void next();
		bool over();
		int value();
		int begin();

		void operator++();
		void operator++(int);
		int operator*();
};

#endif // FIBOBACCIITERATOR_H

