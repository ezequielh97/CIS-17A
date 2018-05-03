#include "Die.h"
#include <iostream>

int main()
{
    int val1, val2; // The user's variables to input the number of sides per die
    char yesNo;
    bool check = false; // A variable to check user input

    std::cout << "Welcome to the dice rolling program!" << std::endl;
    std::cout << "We are going to be rolling two dice. You get to pick the number of sides!" << std::endl << std::endl;



    do // Do-while for input validation for first die
    {
	   std::cout << "How many sides do you want your first die to have? ";
	   std::cin >> val1; // User inputs number of sides for first die

	   if (val1 < 2 || val1 > 100) // If the number of sides is less than 2 or greater than 100, error will be displayed
	   {
		  std::cout << "Sorry, the die must have between 2 and 100 sides. Please try again." << std::endl;
		  check = false;
	   }
	   else
		  check = true; // If input is good, "check" is true
    } while (check == false);
    Die d1(val1); // Makes a "Die" object from the number of sides
    




    do // Do-while for input validation for second die
    {
	   std::cout << "How many sides do you want your second die to have? ";
	   std::cin >> val2; // User inputs number of sides for second die

	   if (val2 < 2 || val2 > 100) // If the number of sides is less than 2 or greater than 100, error will be displayed
	   {
		  std::cout << "Sorry, the die must have between 2 and 100 sides. Please try again." << std::endl;
		  check = false;
	   }
	   else
		  check = true; // If input is good, "check" is true
    } while (check == false);
    Die d2(val2); // Makes a "Die" object from the number of sides


    std::cout << "Time to roll the dice! " << std::endl;


    do // Do-While Loop for thet user's choice of rolling the dice or not
    {
	   std::cout << "Rolling... " << std::endl;

	   d1.roll(); // Die 1 is rolling
	   d2.roll(); // Die 2 is rolling

	   std::cout << "Die 1 landed on " << d1.getResult() << std::endl;
	   std::cout << "Die 2 landed on " << d2.getResult() << std::endl;
	   std::cout << "Your result is " << d1.getResult() + d2.getResult() << std::endl;
	   
	   do 
	   {
		  std::cout << "Would you like to roll again? Enter 'y' for yes and 'n' for no: ";
		  std::cin >> yesNo;
		  if (yesNo != 'y' && yesNo != 'Y' && yesNo != 'n' && yesNo != 'N')
			 std::cout << "That is not a valid choice, please try again" << std::endl;
		  else
			 break;
	   } while (yesNo != 'y' && yesNo != 'Y' && yesNo != 'n' && yesNo != 'N'); 
	   
	   if (yesNo == 'y' || yesNo == 'Y')
		  check = false;
	   else
		  check = true;
    } while (check == false);




   

} // End main