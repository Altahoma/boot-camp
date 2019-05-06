#include <iostream>
#include "GeometricIterator.h"

using namespace std;

int main() {
	GeometricIterator seq;

	for ( ; !seq.over(); seq++ ) {
		cout << *seq << endl;
	}

	return 0;
}