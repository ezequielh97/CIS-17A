#pragma once
#include <string>

class Employee
{
private:
	std::string name;
	std::string id;
	double wage;
	int year;

public:
    //CONSTRUCTORS
    Employee(); // Default
    Employee(std::string, std::string, double, int); // Constructor

	//GETTERS
	std::string getName() const;
	std::string getId() const;
	double getWage() const;
	int getYear() const;

	//SETTERS
	void setName(const std::string);
	void setId(const std::string);
	void setWage(const double);
	void setYear(const int);

};