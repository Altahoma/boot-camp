#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <set>

class Item;

class Category {
	private:
		static int nextCategoryId;
		static std::set<Category*> categoryList;
		int categoryId;
		const char* categoryName;
		std::set<Item*> itemsList;
	public:
		Category(const char* categoryName);
		~Category();

		int getCategoryId() const;
		const char* getCategoryName() const;
		size_t getCategorySize() const;
		const std::set<Item*>& getItemsList() const;
		void addItem(Item* itemName);
		void removeItem(Item* itemName);
		static const std::set<Category*>& getCategoryList();
};

std::ostream& operator<<(std::ostream& out, Category* category);

#endif // CATEGORY_H

