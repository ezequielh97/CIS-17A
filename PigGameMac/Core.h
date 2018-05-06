#pragma once
#include "Die.h"
#include <iostream>
using namespace std;

class Core
{
protected:
    Die* die;
    bool* snakeEyes;
    bool rollOne, turn;
    int totalPoints, max, numDie, highScore, tries;

public:
    // CONSTRUCTORS:
    Core()
    {
        numDie = 0;
        totalPoints = 0;
        highScore = 0;
        tries = 1;
        max = 100;
        rollOne = false;
        turn = true;
        die = new Die[numDie];
    }
    
    Core(int num)
    {
        this-> numDie = num;
        die = new Die[num];
        snakeEyes = new bool[num];
        totalPoints = 0;
        turn = true;
        rollOne = false;
        setMax();
        displayRules();
        game();
        tries = 1;
        highScore = 0;
        max = 100;
    }
    
    
    void setNumDie();
    void setMax();
    void setHighScore();
    int getTotalPoints();
    bool getTurn();

    void Turn();
    bool SnakeEyes();
    void game();
    void displayRules();
    void rollAgain();
    void setTurn(bool);
    bool getRollOne();
  
};

void Core::game()
{
    do
    {
    Turn();
   
    if(rollOne == true)
    {
        cout << "One of your die landed on 1! Round over" << endl;
        setHighScore();
        tries++;
        cout << "You made it to " << totalPoints << " points." << endl;
        cout << "Your High Score was: " << highScore << endl;
        totalPoints = 0;
        turn = false;
        rollAgain();
    }
    
    else if(totalPoints >= max && rollOne == false)
    {
        cout << "You made it to " << max << " points! Congrats!" << endl;
        cout << "It took you " << tries << " tries." << endl;
        turn = false;
        setHighScore();
    }
    else if(rollOne == false && totalPoints < max)
        rollAgain();
    
    
    
    } while(turn == true);
}








void Core::Turn()
{
    rollOne = false;
    cout << "Rolling..." << endl;
    
    for(int i = 0; i < numDie; i++)
    {
        die[i].roll();
        cout << "Die " << i + 1 << " landed on: " << die[i].getResult() << endl;
        totalPoints += die[i].getResult();
        
        if(die[i].getResult() == 1)
        {
            rollOne = true;
            if(numDie != 1) // Only lets snakeEyes happen if there is more than 1 die
            snakeEyes[i] = true;
        }
        else
            snakeEyes[i] = false;
    }
    cout << "Current Total: " << totalPoints << endl;
} // END TURN FUNCTION



bool Core::SnakeEyes()
{
    bool trueFalse = true; 
    for(int i = 0; i < numDie; i++)
    {
        if(snakeEyes[i] != 1) // If one of the die doesn't equal 1, player doesn't lose all their points
            trueFalse = false;
    }
    
    return trueFalse; // Returns true or false
}



void Core::setHighScore()
{
    if(totalPoints >= highScore)
        highScore = totalPoints;
}

void Core::displayRules()
{
    char anyChar;
    cout << endl << "SINGLE PLAYER MODE:" << endl;
    
    cout << "Roll your dice until you get to " << max << endl;
 
    cout << "If one of your die lands on 1, you lose. How many tries will it take you to get to " << max << "? Have fun!" << endl;
    
    cout << "Press any key and enter to continue: ";
    cin >> anyChar;
}


int Core::getTotalPoints()
{
    return totalPoints();
}

bool Core::getRollOne()
{
    return rollOne;
}

bool Core::getTurn()
{
    return turn;
}



void Core::setNumDie()
{
    cout << "Enter the number of dice you want to use: ";
    int num;
    cin >> num;
    numDie = num;
    cout << endl << endl; // Skips a few lines
}

void Core::setMax()
{
    int choice;
    cout << "Your goal is currently 100 points. Press 1 to continue or 2 to change the goal: ";
    cin >> choice;
    
    if(choice == 1)
        max = 100;
    if(choice == 2)
    {
        cout << "Enter a goal score: ";
        cin >> max;
    }
}

void Core::rollAgain()
{
    int choice;
        cout << "Would you like to roll again? Enter 1 for yes or 2 for no: ";
        cin >> choice;
        if(choice == 1)
            turn = true;
        else if(choice == 2)
        {
            turn = false;
            cout << "Turn over. Score: " << totalPoints << endl;
        }
}

void Core::setTurn(bool turn)
{
    this->turn = turn;
}