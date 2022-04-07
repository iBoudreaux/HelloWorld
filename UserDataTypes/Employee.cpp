#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read() {

	cout << "\n Enter first name: ";
	cin >> name;


	cout << "\n Enter age: ";
	cin >> age;



	cout << "\n Enter wage: ";
	cin >> wage;


	maxDays = 7;

	cout << "\n Enter days worked: ";
	cin >> daysWorked;
	
	if (daysWorked > maxDays) {
		cout << "\n Invalid number of days. Enter number of days: ";
		cin >> daysWorked;
	}
	else if (daysWorked < 1) {
		cout << "\n Invalid number of days. Enter number of days: ";
		cin >> daysWorked;
	};
		


	totalHours = 0;
	for (int i = 0; i < daysWorked; i++) {
		cout << "\n Enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours = totalHours + hoursWorkedPerDay[i];

	};
};

void Employee::Write() {

	cout << "\n " << name << " is " << age << " and worked for " << totalHours << " hours at " << wage << " an hour.";

	grossIncome = totalHours * wage;
	cout << "\n Gross income: $" << grossIncome;

	float taxGross = TAX * grossIncome;
	netIncome = grossIncome - taxGross;

	cout << " \n Net income: $" << netIncome;
};
