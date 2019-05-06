#include <iostream>
#include "ArrayIterator.h"

using namespace std;

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 10;
	
	ArrayIterator<int> seq(array, size);

	for (; !seq.over(); seq++) {
		cout << *seq << endl;
	}

	return 0;
}