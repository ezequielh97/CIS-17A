#pragma once
#include "Die.h"
#include "Menu.h"
#include <iostream>

class Core
{
protected:
    Die* die;
    bool* snakeEyes;
    int totalPoints; // Current total of the user
    int max; // Max Score
    bool turn;

public:
    // CONSTRUCTORS:
    Core()
    {
        die = new Die[2];
        snakeEyes = new bool[2];
        turn = true;
        totalPoints = 0;
        game();
    }
    Core(int i);
    // SETTERS:
    void setTotalPoints(int);
    void setMax(int);
    // GETTERS:
    int getTotalPoints();
    int getMax();
    // MISC:
    void game();
};

void Core::game()
{
    int numChoice;
    do // Turn this into a do-while loop instead
    {
        std::cout << "Rolling... " << std::endl;
        
        
        
        for(int j = 0; j < 2;  j++) // Loop for the dice roll
        {
            die[j].roll(); // Rolls the dice
            
            std::cout << "Die " << j + 1 << " landed on: " << die[j].getResult() << std::endl;
            
            totalPoints += die[j].getResult(); // Adds the rolled results to the total points
          
            
            if(die[j].getResult() == 1) // If the roll landed on 1, snakeEyes is true
                snakeEyes[j] = true;
        }
        
        
        
        // Add snake-eyes option
        
        
        
        
        
        
        std::cout << "Press 1 to roll again or 2 to end your turn: ";
        std::cin >> numChoice;
        if(numChoice == 1)
            turn = true;
        else
            turn = false;
    }while(turn == true);
    std::cout << "Turn Over."; 
}