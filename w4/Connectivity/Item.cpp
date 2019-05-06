#include "Item.h"

int Item::nextItemId = 0;
std::set<Item*> Item::itemList{};

Item::Item(const char* itemName, Category* category) {
	this->itemId = nextItemId += 1;
	this->itemName = itemName;
	this->itemCategory = category;

	itemList.emplace(this);
	category->addItem(this);
}

Item::~Item() {
	this->itemCategory = NULL;
}

int Item::getItemId() const {
	return this->itemId;
}

const char* Item::getItemName() const {
	return this->itemName;
}

Category* Item::getItemCategory() const {
	return this->itemCategory;
}

const std::set<Item*>& Item::getItemList() {
	//std::set<Item*>::iterator it;
	
	//for ( it = Item::itemList.begin(); it != Item::itemList.end(); it++ ) {
	//	std::cout << *it << "\n" << std::endl;
	//}

	return itemList;
}

std::ostream& operator<<(std::ostream& out, Item* item) {
	out << "Item name: " << item->getItemName() << "\n"
		<< "Item id: " << item->getItemId() << "\n"
		<< "Item category: " << item->getItemCategory()
		<< std::endl;

	return out;
}