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