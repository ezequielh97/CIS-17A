#pragma once
#include "Die.h"
#include <iostream>
using namespace std;

class Menu
{
private:
    int gameMode; // Single player or Multiplayer
    
public:
    
    Menu(); // Default Constructor
    
    void setGameMode(int);
    int getGameMode();
    void display(); // Displays the menu
};


//******************************************************************************
// FUNCTION DEFENITIONS:
//******************************************************************************

Menu::Menu()
{
    int choice;
    display(); // Displays the menu to the user

    cin >> choice; // User inputs their choice here
    gameMode = choice;
    
    
    // *VALIDATE USER INPUT FOR CHOICE, USE EXCEPTION*
}

void Menu::display()
{
    cout << "MENU:" << endl;
    cout << "[1] - Single Player Mode" << endl;
    cout << "[2] - Multiplayer Mode" << endl;
    cout << "Enter Choice: ";
}

void Menu::setGameMode(int mode)
{ gameMode = mode; }

int Menu::getGameMode()
{ return gameMode; }
