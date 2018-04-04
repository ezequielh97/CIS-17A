#include "Store.h"

Store::Store()
{
	// Empty default constructor
}

Store::Store(std::string sName)
{
	storeName = sName;
}

void Store::AddItem(std::string name, double cost)
{
	itemName.push_back(name);
	itemCost.push_back(cost);
}

std::string Store::GetItemName(int position)
{
	return itemName[position]; 
}

double Store::GetItemCost(int position)
{
	return itemCost[position]; 
}

std::vector<std::string> Store::GetInventory()
{
	return itemName;
}

void Store::SellItem(double cost)
{
	revenue += cost;
}