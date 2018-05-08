#pragma once
#include "Core.h"
using namespace std;


class Double : public Core
{
private:
    int* roundPoints;
    int numPlayers;
    Core* player;
 
public:
    Double(); // Default Constructor
    Double(int); // Constructor
    ~Double(); // Destructor
    
    void game(); // The multiplayer game happens here
    void setPlayers(); // Gets the number of players playing
    void displayRules(); // Displays the rules to the users
    void setRoundPoints();
};

Double::Double()
{
        numDie = 0;
        totalPoints = 0;
        highScore = 0;
        numPlayers = 2;
        tries = 1;
        max = 100;
        rollOne = false;
        turn = true;
        
        die = new Die[numDie];
        snakeEyes = new bool[numDie];
        roundPoints = new int[numPlayers];
        player = new Core[numPlayers];
        
        for(int i = 0; i < numDie; i++)
        {
            snakeEyes[i] = false;
        }
        for(int j = 0; j < numPlayers; j++)
        {
            roundPoints[j] = 0;
            player[j] = (Core (numDie));
        }
           
}

Double::Double(int num)
{
     max = 100;
     numDie = num;
     setPlayers();
     totalPoints = 0;
     turn = true;
     rollOne = false;
     
        die = new Die[numDie];
        snakeEyes = new bool[numDie];
        roundPoints = new int[numPlayers];
        player = new Core[numPlayers];
        
        for(int i = 0; i < numDie; i++)
        {
            snakeEyes[i] = false;
        }
        for(int j = 0; j < numPlayers; j++)
        {
            roundPoints[j] = 0;
            player[j] = (Core(numDie));
        }
                
     setMax();
     displayRules();
     game();
}

Double::~Double()
{
    delete [] die;
    delete [] snakeEyes;
    delete [] roundPoints;
 
    
    die = NULL;
    snakeEyes = NULL;
    roundPoints = NULL;
}

void Double::setPlayers()
{
    int choice;
 cout << "You are set on 2 player mode. Press 1 to continue or 2 to add players: ";
 cin >> choice;
 
 if(choice == 1)
     numPlayers = 2;
 else if(choice == 2)
     cin >> numPlayers;
}

void Double::displayRules()
{
    cout << "MULTIPLAYER RULES:" << endl;
    cout << "During a player's turn, the player will roll their dice." << endl;
    cout << "The numbers the dice land on will be added to the player's total." << endl; 
    if(numDie == 1)
        cout << "If the die lands on 1, the player will lose the points accumulated for that round and lose their turn." << endl;
    else
    {
        cout << "If one of the die lands on 1, the player will lose their points for that round and lose their turn." << endl;
        cout << "If all of the dice land on 1, the player will lose ALL of their points." << endl;
        cout << "The first person to make it to " << max << " wins." << endl;
    }
        
}

void Double::game()
{
    int count;
    for(int i = 0; i < numPlayers; i++)
    {
        count = player[i].getTotalPoints();
        do
        {
            cout << "PLAYER " << i + 1 << endl;
            player[i].Turn();
            
            if(player[i].getRollOne() == true && (player[i].SnakeEyes() == false || player[i].getNumDie() == 1))
            {
                cout << "One of your die landed on 1, you lose your turn!" << endl;
                setRoundPoints();
                cout << "You lost your " << roundPoints << " points. Your total is currently: " << player[i].getTotalPoints() << endl;
                player[i].setTurn(false);
                player[i].rollAgain();
            }
            else if(player[i].getRollOne() == true && player[i].SnakeEyes() == true && player[i].getNumDie != 1)
            {
                cout << "All of your dice landed on 1! You lose all of  your points." << endl;
                player[i].setTotalPoints(0);
            }
            else if(player[i].getRollOne() == false && player[i].SnakeEyes() == false)
            {
                setRoundPoints();
                cout << "POINTS THIS ROUND: " << roundPoints << endl;
                cout << "TOTAL POINTS: " << player[i].getTotalPoints() << endl;
                player[i].rollAgain();
            }
            
            
            
        }while(turn == true);
        
        
        if(i == (numPlayers - 1))
            i = -1;
    }
}