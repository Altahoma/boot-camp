#ifndef GEOMETRICITERATOR_H
#define GEOMETRICITERATOR_H

#include <iostream>

class InvalidParam {};

class GeometricIterator {
	private:
		int first;
		int step;
		int index;
		int current;
		int currentIndex;
	public:
		GeometricIterator(int first = 1, int step = 2, int index = 10);
		~GeometricIterator();

		void next();
		void previous();
		bool over();
		int value();
		int begin();

		void operator++();
		void operator++(int);
		void operator--();
		void operator--(int);
		int operator*();
};

#endif // GEOMETRICITERATOR_H

