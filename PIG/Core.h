#pragma once
#include "Die.h"

class Core
{
protected:
    Die* die;
    int totalPoints; // Current total of the user
    int max; // Max Score

public:
    Core()
    {
	   die = new Die[2];
    }


    Core(int i)
    {
	   die = new Die[i]; // Dynamically allocate memory for however many die there are
	   totalPoints = 0;
	   int max = 100;
    }

    void setTotalPoints(int totalPoints)
    {
	   this->totalPoints = totalPoints;
    }

    void setMax(int max)
    {
	   this->max = max;
    }

    int getTotalPoints()
    {
	   return totalPoints
    }

    int getMax()
    {
	   return max;
    }
    

};