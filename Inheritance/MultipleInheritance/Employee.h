#pragma once
#include <iostream>
#include <string>

class Employee
{
protected:
	std::string m_empName;
	int m_empSalary;

public:
	Employee(std::string empName, int empSalary);
	~Employee(void);
	void getDetails();
};

