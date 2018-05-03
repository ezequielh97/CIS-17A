#pragma once
#include "Core.h"

class Double : public Core
{
private:
    int roundPoints; // Points for that round
    int players; // The number of players

public:
    Double(int i)
    {
	   die = new Die[i];
	   roundPoints = 0;
    }

    ~Double()
    {
	   delete[] die; // Deallocates the die object
	   die = NULL; // Sets the die pointer equal to nothing
    }
};