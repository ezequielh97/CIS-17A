#pragma once
#include "Core.h"

class Double : public Core
{
private:
    int roundPoints; // Points for that round
    int players; // The number of players

public:
    Double()
    {
        roundPoints = 0;
        players = 2;
        game();
    }
};