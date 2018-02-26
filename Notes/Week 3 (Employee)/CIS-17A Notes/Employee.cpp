#include "Employee.h"
#include <iostream>

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

void Employee::setId(const std::string i)
{
	id = i;
}

void Employee::setWage(const double w)
{
	wage = w;
}

void Employee::setYear(const int y)
{
	if (y >= 2003 && y <= 2018)
		year = y;
	else
		std::cout << "Invalid year! Year joined cannot be before 2003 or current year." <<std::endl;
}
