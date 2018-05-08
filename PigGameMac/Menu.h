#pragma once
#include "Die.h"
#include "Double.h"
#include <iostream>
using namespace std;

class Menu
{
private:
    int gameMode; // Single player or Multiplayer
    int max;

public:
   
    Menu(); // Default Constructor
   
    void setGameMode(int);
    void setMax(int);
    
    int getGameMode();
    int getMax();
    
    void display(); // Displays the menu
};


//******************************************************************************
// FUNCTION DEFENITIONS:
//******************************************************************************

Menu::Menu()
{  
        max = 100; // Initializes max score
        gameMode = 0; // Initializes Game Mode
        
        
           char choice; // The user's input choice
           display(); // Displays the menu to the user
           cin >> gameMode; // User inputs their choice here
           
           
           // *VALIDATE USER INPUT FOR CHOICE, USE EXCEPTION*
           
           
           
           if(gameMode == 1 || gameMode == 2) //*Add input validation  here*
               setGameMode(gameMode);
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

void Menu::setMax(int max)
{ this->max = max; }

int Menu::getGameMode()
{ return gameMode; }

int Menu::getMax()
{ return max; }