#pragma once
#include <iostream>

class Employee {
private: char name[32];
private: short age;
private: float wage;
private: short daysWorked;
private: short hoursWorkedPerDay[7];
private: static const float TAX;
private: short totalHours;
private: float grossIncome;
private: float netIncome;
private: short maxDays;

public: void Read();

public: void Write();


};
