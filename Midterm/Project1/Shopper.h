#pragma once
#include <string>
#include <vector>

class Shopper
{
private:
	std::string name;
	double cash;
	std::vector<std::string> itemsBought;

public:
	Shopper(); // Default constructor
	Shopper(std::string, double); // Overloaded constructor
	double const GetCash();
	void BuyItem(std::string itemName, double itemCost);

};