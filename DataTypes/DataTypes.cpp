// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	string name;
	char initial;
	short age;
	bool isAdult; 
	int zipCode;
	float wage;
	short daysWorked;
	short hoursWorkedPerDay[7] ;
	const float TAX = 0.1f;
	int grossIncome;
	int netIncome;
	

	cout << "Enter first name: ";
	cin >> name;

	cout << "\n Enter last initial: ";
	cin >> initial;

	cout << "\n Enter age: ";
	cin >> age;
	if (age >= 18) {
		isAdult = true;
	}
	else {
		isAdult = false;
	};

	cout << "\n enter zipcode: ";
	cin >> zipCode;

	cout << "\n Enter wage: ";
	cin >> wage;

	cout << "\n Enter days worked: ";
	cin >> daysWorked;

	short totalHours;
	totalHours = 0;


	for (int i = 0; i < daysWorked; i++) {
		cout << "\n Enter hours worked for day " << i+1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours = totalHours + hoursWorkedPerDay[i];

	};

	cout << "\n " << name << " worked for " << totalHours << " hours at " << wage << " an hour.";

	grossIncome = totalHours * wage;
	cout << "\n Gross income: $" << grossIncome;

	int taxGross = TAX * grossIncome;
	netIncome = grossIncome - taxGross;

	cout << " \n Net income: $" << netIncome;





	

	

	

	


}

