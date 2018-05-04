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
        result = 1;
        sides = 6;
    }
    void roll();
    int getResult();
};




void Die::roll()
  {
	   result = rand() % sides + 1; // Get a stronger number generator
    }

int Die::getResult()
{
    return result;
}