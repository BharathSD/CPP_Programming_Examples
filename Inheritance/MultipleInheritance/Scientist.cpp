#include "Scientist.h"
using namespace std;

Scientist::Scientist(std::string empName, int empSalary,
					 std::string fieldOfResearch, std::string qualification)
					 :Research(fieldOfResearch)
					 ,Employee(empName, empSalary)
					 ,m_qualification(qualification)
{
}


Scientist::~Scientist(void)
{
}

void Scientist::getDetails()
{
	Employee::getDetails();
	Research::getDetails();
	cout << "Qualification : " << m_qualification << endl;
}
