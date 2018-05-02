#pragma once
#include "Die.h"

class Menu : public Die
{
private:
    int players;
    char gameMode;
    int sides;
    int max;

public:
    Menu();
    Menu(int, char, int, int);
    ~Menu();

    void setPlayers(int);
    void setGameMode(char);
    void setSides(int);
    void setMax(int);

    int getPlayers();
    char getGameMode();
    int getSides();
    int getMax();
};
