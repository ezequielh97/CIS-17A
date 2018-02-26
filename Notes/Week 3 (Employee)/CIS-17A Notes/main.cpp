#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee employee;

	employee.setName("Benny"); 
	cout << employee.getName() << endl;

	employee.setId("bb2513919");
	cout << employee.getId() << endl;

	employee.setWage(13.50);
	cout << employee.getWage() << endl;

	employee.setYear(1990);
	cout << employee.getYear() << endl;

	system("Pause"); 


	return 0;
}