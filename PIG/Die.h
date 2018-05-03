#pragma once
#include <cstdlib>

class Die
{
private:
    int result;
    int sides;

public:
    Die()
    {
	   sides = 6;
    }

    void roll()
    {
	   result = rand() % sides + 1;
    }
};