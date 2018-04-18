#include <iostream>
#include <iomanip>
#include "Shopper.h"
#include "Store.h"
using namespace std;

void DisplayStoreItems(Store s);

int main()
{
	string storeName, name;
	double cash;
	int choice;
	cout << "What is the name of the store? ";
	getline(cin, storeName);
	Store store(storeName); // Setting up an instance of Store called store using constructor overload

	cout << "What is your name? ";
	getline(cin, name);
	cout << "How much cash do you have to spend? ";
	cin >> cash;
	Shopper shopper(name, cash); // Setting up an instance of Shopper with the user's name and amount of cash

	int itemsToAdd;
	string itemName;
	double itemCost;
	int userChoice;

	cout << setprecision(2);
	cout << "How many items to add? ";
	cin >> itemsToAdd;

	for (int i = 0; i < itemsToAdd; i++)
	{
		cout << "What is the name of item " << i  + 1<< "?" << endl;
		cin.ignore();
		getline(cin, itemName);
		cout << "What is the cost of item " << i + 1 << "?" << endl;
		cin >> itemCost;

		store.AddItem(itemName, itemCost);
	}


	do {
		DisplayStoreItems(store);
		
			cout << "\n\nWhat would you like to buy? <1-" << store.GetInventory().size() << ">" << endl;
			cout << "You have $" << shopper.GetCash() << endl;
			cin >> userChoice;
		

		shopper.BuyItem(store.GetItemName(userChoice - 1), store.GetItemCost(userChoice - 1));
		cout << "You have bought " << store.GetItemName(userChoice - 1) << " and it cost $" << store.GetItemCost(userChoice - 1) << endl;;

		store.SellItem(store.GetItemCost(userChoice - 1)); // Updates the store's revenue

		do {
			cout << "You have $" << shopper.GetCash() << " left. Would you like buy another item? Enter 1 for YES, or 2 for NO: ";
			cin >> choice;
			if (choice != 1 && choice != 2)
				cout << "That was not a valid entry. Try again." << endl;
		} while (choice == 1 || choice == 2);
	} while (choice = 1);
	

	return 0;
}

void DisplayStoreItems(Store s)
{
	vector <string> items = s.GetInventory();

	for (int i = 0; i < items.size(); i++)
	{
		cout << i + 1 << ": " << items[i] << endl;
	}
}
