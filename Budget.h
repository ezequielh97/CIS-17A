#pragma once
#include <vector>
#include <iostream>

class Budget
{
private:
    std::vector<double> expenses;
    std::vector<double> income;
    double budget;

public:
    Budget(double budget)
    {
	   budget = this->budget;
    }

    void AddExpense(double e)
    {
	   expenses.push_back(e);
    }

    void AddIncome(double i)
    {
	   income.push_back(i);
    }

    void EditIncome(int index, double value)
    {
	   income[index] = value;
    }

    void DeleteIncome(int index)
    {
	   income.erase(income.begin() + index);
    }

    void DeleteExpense(int index)
    {
	   expenses.erase(expenses.begin() + index);
    }

    double CalculateBudget()
    {
	   double totalIncome = 0, totalExpenses = 0;

	   for (int i = 0; i < income.size(); i++)
	   {
		  totalIncome += income[i];
	   }

	   for (int j = 0; j < expenses.size(); j++)
	   {
		  totalExpenses += expenses[j];
	   }

	   budget = totalIncome - totalExpenses;

	   return budget;
    }
};