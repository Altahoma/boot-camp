#include <iostream>
#include "FactorialIterator.h"

using namespace std;

int main() {
	FactorialIterator seq;

	for ( ; !seq.over(); seq++ ) {
		cout << *seq << endl;
	}

	return 0;
}