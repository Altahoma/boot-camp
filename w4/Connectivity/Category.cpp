#include "Category.h"

int Category::nextCategoryId = 0;
std::set<Category*> Category::categoryList{};

Category::Category(const char* categoryName) {
	this->categoryId = nextCategoryId += 1;
	this->categoryName = categoryName;
}

Category::~Category() {

}

int Category::getCategoryId() const {
	return this->categoryId;
}

const char* Category::getCategoryName() const {
	return this->categoryName;
}

size_t Category::getCategorySize() const {
	return this->itemsList.size();
}

const std::set<Item*>& Category::getItemsList() const {
	//std::set<Category*>::iterator it;

	//for (it = Category::categoryList.begin(); it != Category::categoryList.end(); it++) {
	//	std::cout << *it << "\n" << std::endl;
	//}
	
	return this->itemsList;
}

void Category::addItem(Item* itemName) {
	this->itemsList.insert(itemName);
}

void Category::removeItem(Item* itemName) {
	this->itemsList.erase(itemName);
}

const std::set<Category*>& Category::getCategoryList() {
	//std::set<Category*>::iterator it;

	//for (it = Category::categoryList.begin(); it != Category::categoryList.end(); it++) {
	//	std::cout << *it << "\n" << std::endl;
	//}

	return categoryList;
}

std::ostream& operator<<(std::ostream& out, Category* category) {
	out << "Category name: " << category->getCategoryName() << "\n"
		<< "Category id: " << category->getCategoryId() << "\n"
		<< "Items in category: " << category->getCategorySize()
		<< std::endl;

	return out;
}