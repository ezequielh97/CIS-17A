#pragma once
#include "Die.h"
#include <iostream>
using namespace std;

class Menu
{
private:
    char gameMode;
    int max;

public:
    Menu()
    {  
           char choice;
	   cin >> choice;
    }

    void display()
    {
        cout << "MENU:" << endl;
	cout << "[A] - Single Die Mode" << endl;
	cout << "[B] - Double Dice Mode" << endl;
	cout << "[C] - Change Game Settings" << endl;
	cout << "Enter Choice: ";
    }
    
    
    void setGameMode(char);
    void setMax(int);

    int getPlayers();
    char getGameMode();
    int getMax();

    void edit(); // Edit the game settings if you want to
};