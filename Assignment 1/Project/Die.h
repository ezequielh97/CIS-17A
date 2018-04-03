#pragma once

class Die
{
private:
    int sides; // Numer of sides on the die
    int result; // The number that is given as a result of the roll

public:
    Die(); // Default Constructor
    Die(int); // Constructor
    ~Die(); // Deconstructor

    void roll(); // Rolls the die, generates a random number based on the sides

    int getSides();
    int getResult();
    
};