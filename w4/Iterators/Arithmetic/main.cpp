#include <iostream>
#include "ArithmeticIterator.h"

using namespace std;

int main() {
	ArithmeticIterator seq1;
    
	for ( ; !seq1.over(); seq1++ ) {
		cout << *seq1 << endl;
	}

	return 0;
}