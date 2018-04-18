#pragma once
#include <string>
#include <vector>

class Store
{
private:
	std::string storeName;
	double revenue;
	std::vector<std::string> itemName;
	std::vector<double> itemCost;

public:
	Store(); // Default constructor
	Store(std::string); // Overloaded constructor
	void AddItem(std::string name, double cost);
	std::vector <std::string> GetInventory();
	std::string GetItemName(int position);
	double GetItemCost(int position);
	void SellItem(double cost);


};