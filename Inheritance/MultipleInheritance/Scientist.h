#pragma once
#include "research.h"
#include "Employee.h"

class Scientist :
	public Research, public Employee
{
protected:
	std::string m_qualification;
public:
	Scientist(std::string empName, int empSalary, 
		std::string fieldOfResearch, std::string qualification);
	~Scientist(void);
	void getDetails();
};

