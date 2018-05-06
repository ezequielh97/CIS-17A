#pragma once
#include "Die.h"
#include "Double.h"
#include <iostream>
using namespace std;

class Menu
{
private:
    int gameMode;
    int max;

public:
    // CONSTRUCTORS:
    Menu();
   
    // SETTERS:
    void setGameMode(int);
    void setMax(int);
    // GETTERS
    int getGameMode();
    int getMax();
    // MISC:
    void display();
    void edit(); // Edit the game settings if you want to
};


//******************************************************************************
// FUNCTION DEFENITIONS:
//******************************************************************************

Menu::Menu()
{  
        max = 100; // Initializes max score
        gameMode = 'A'; // Initializes Game Mode
        
        
           char choice; // The user's input choice
           display(); // Displays the menu to the user
           cin >> gameMode; // User inputs their choice here
           
           
           // VALIDATE USER INPUT FOR CHOICE, USE EXCEPTION
           
           
           
           if(gameMode == 1 || gameMode == 2)
           { 
               setGameMode(gameMode);
           }
           if(gameMode == 3)
               edit();
    }

void Menu::display()
    {
        cout << "MENU:" << endl;
        cout << "[1] - Single Player Mode" << endl;
        cout << "[2] - Multiplayer Mode" << endl;
        cout << "[3] - Change Game Settings" << endl;
        cout << "Enter Choice: ";
    }

void Menu::setGameMode(int mode)
{
    gameMode = mode;
}

void Menu::setMax(int max)
{
    this->max = max;
}

int Menu::getGameMode()
{
    return gameMode;
}

int Menu::getMax()
{
    return max;
}

void Menu::edit()
{
    // Another menu to edit the settings if the user would want to
    cout << "This part of the menu is under construction" << endl;
}