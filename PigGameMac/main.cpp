#include "Menu.h" // iostream is in Menu.h


int main()
{
    int numDie; // The number of dice the user will use
    std::cout << "Welcome to the PIG game!" << std::endl << std::endl;
    Menu menu; // Creates a menu object so the user can choose their choice
    
    std::cout << "Enter the number of die you want to use: ";
    std::cin >> numDie; // User inputs the number of dice
    
    if(menu.getGameMode() == 1) // If user chooses 1, it creates a Core object
      Core game(numDie);
    else
      Double game(numDie); // If user chooses 2, it creates a Double object (multiplayer)
}