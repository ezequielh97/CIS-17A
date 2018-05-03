#include "Die.h"
#include <cstdlib>

Die::Die()
{
    sides = 6; // If the user didn't set the number of sides, it is automatically a regular 6 sided die
}

Die::Die(int s)
{
    sides = s; // Sets the sides equal to whatever the user wanted
}

Die::~Die()
{
    // Nothing to deconstruct
}

void Die::roll()
{
    result = rand() % sides + 1; // Sets the result of the roll equal to a random number from 1 to the size
}

int Die::getSides()
{
    return sides; // Returns the number of sides
}

int Die::getResult()
{
    return result; // Returns the result of the die being rolled
}