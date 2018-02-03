#include "Savings.h"


Savings::Savings(void) : m_minBalance(0)
{
}

Savings::Savings(int accNumb, std::string Name, int balance, int minBalance):
	Account(accNumb, Name, balance), m_minBalance(minBalance)
{
}

Savings::~Savings(void)
{
}

void Savings::displayDetails()
{
	Account::displayDetails();
	std::cout << "Minimum Balance : " << m_minBalance << std::endl;
}

void Savings::setAccountValues(int accNumb, std::string Name, int balance, int minBalance)
{
	Account::setAccountValues(accNumb, Name, balance);
	//m_minBalance = minBalance;
}

void Savings::withdraw(int amount)
{
	if((m_balance - amount) >= m_minBalance)
	{
		m_balance -= amount;
	}
	else
	{
		std::cout << "Insufficient Funds" << std::endl;
	}
}
