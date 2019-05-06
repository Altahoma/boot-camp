#include <iostream>
#include "PrimeIterator.h"

using namespace std;

int main() {
	PrimeIterator seq;

	for (; !seq.over(); seq++) {
		cout << *seq << endl;
	}

	return 0;
}