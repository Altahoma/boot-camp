#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <set>

class Category;

class Item {
	private:
		static int nextItemId;
		static std::set<Item*> itemList;
		int itemId;
		const char* itemName;
		Category* itemCategory;
		
	public:
		Item(const char* itemName, Category* category);
		~Item();

		int getItemId() const;
		const char* getItemName() const;
		Category* getItemCategory() const;
		static const std::set<Item*>& getItemList();
};

std::ostream& operator<<(std::ostream& out, Item* item);

#endif // ITEM_H

