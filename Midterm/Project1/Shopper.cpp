#include "Shopper.h"

Shopper::Shopper()
{
	cash = 80.00;
	name = "Benjamin";
}

Shopper::Shopper(std::string n, double c)
{
	name = n;
	cash = c;
}

double const Shopper::GetCash()
{
	return cash;
}

void Shopper::BuyItem(std::string itemName, double itemCost)
{
	itemsBought.push_back(itemName);
	cash -= itemCost;
}