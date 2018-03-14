#include "Employee.h"
#include <iostream>

//CONSTRUCTOR
Employee::Employee() // Default
{
    name = " ";
    id = " ";
    wage = 0.00;
    year = 2003;
}

Employee::Employee(std::string n, std::string ID, double w, int y)
{
    name = n;
    id = ID;
    
    do 
    {
	   if (w >= 0)
		  wage = w;
	   else
	   {
		  std::cout << "Wage can't be less than 0. Please enter a wage: ";
		  std::cin >> w;
	   }
    } while (w < 0);

    do
    {
	   if (y >= 2003 && y <= 2018)
		  year = y;
	   else
	   {
		  std::cout << "The year of hire can't be before 2003 or after the current year. Please enter a year of hire: ";
		  std::cin >> y;
	   }
    } while (y < 2003 || y > 2018);
}

//GETTERS
std::string Employee::getName() const
{
    return name;
}

std::string Employee::getId() const
{
    return id;
}

double Employee::getWage() const
{
    return wage;
}

int Employee::getYear() const
{
    return year;
}

//SETTERS
void Employee::setName(const std::string n)
{
    name = n;
}

void Employee::setId(const std::string ID)
{
    id = ID;
}

void Employee::setWage(const double w)
{
    do
    {
	   if (w >= 0)
		  wage = w;
	   else
	   {
		  std::cout << "Wage can't be less than 0. Please enter a wage: ";
		  double newWage;
		  std::cin >> newWage;
		  setWage(newWage);
	   }
    } while (w < 0);
}

void Employee::setYear(const int y)
{
    do
    {
	   if (y >= 2003 && y <= 2018)
		  year = y;
	   else
	   {
		  std::cout << "The year of hire can't be before 2003 or after the current year. Please enter a year of hire: ";
		  int newYear;
		  std::cin >> newYear;
		  setYear(newYear);
	   }
    } while (y < 2003 || y > 2018);
}