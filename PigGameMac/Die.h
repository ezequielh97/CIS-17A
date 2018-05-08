#pragma once
#include <cstdlib> // To get random numbers

class Die
{
private:
    int result; // The number the die lands on
    int sides; // The number of sides of the die

public:
    Die();
    
    int getSides();
    int getResult();
    
    int setSides();
    void roll();
};

//******************************************************************************
// FUNCTION DEFENITIONS:
//******************************************************************************
Die::Die()
{
    result = 1;
    sides = 6;
}

int Die::getSides()
{ return sides; }

int Die::getResult()
{ return result; }

void Die::roll()
  {
    result = rand() % sides + 1; // Get a stronger number generator
  }

