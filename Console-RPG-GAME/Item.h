#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
class Item
{
public:
	Item();
	~Item();
	inline std::string debugPrint() {
		return this->name;
	}
private:
	std::string name; //Item Name
	int buyValue;//Price
	int sellValue;//Price

};

