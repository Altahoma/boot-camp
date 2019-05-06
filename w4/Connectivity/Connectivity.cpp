#include <iostream>
#include "Item.h"
#include "Category.h"

using namespace std;

int main() {
	Category* phones = new Category("Phones");
	Item* iphone5 = new Item("IPhone 5", phones);

	cout << iphone5 << endl;
	cout << phones << endl;

	return 0;
}