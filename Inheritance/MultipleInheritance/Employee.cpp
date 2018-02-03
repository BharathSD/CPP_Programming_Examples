#include "Employee.h"
using namespace std;

Employee::Employee(std::string empName, int empSalary)
	:m_empName(empName)
	,m_empSalary(empSalary)
{
}


Employee::~Employee(void)
{
}

void Employee::getDetails()
{
	cout << "Employee Name : " << m_empName << endl;
	cout << "Employee Salaray : " << m_empSalary << endl;
}
