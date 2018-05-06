#include "Menu.h"
using namespace std;


int main()
{
    int numDie;
    cout << "Welcome to the PIG game!" << endl << endl;
    Menu menu;
    
    cout << "Enter the number of die you want to use: ";
    cin >> numDie;
    
    if(menu.getGameMode() == 1)
      Core game(numDie);
    else
      Double game(numDie);
}