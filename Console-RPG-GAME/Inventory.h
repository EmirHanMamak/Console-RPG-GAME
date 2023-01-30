#pragma once
#include "Item.h"
class Inventory
{
public:
	Inventory();
	~Inventory();
	void addItem(const Item& item);
	void removeItem(int index);
	inline void debugPrint() const {
		for (size_t i = 0; i < this->numOfItems; i++)
		{
			std::cout << this->itemArr[i]->debugPrint()<< std::endl;
		}
	}
private:
	void expend();
	int capacity;
	int numOfItems;
	Item **itemArr;
	void initalize(const int from);

};

