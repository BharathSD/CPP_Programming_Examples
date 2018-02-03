#include "Account.h"


Account::Account(void)
{
	m_acc_numb=0;
	this->m_Name = "";
	this->m_balance = 0;
}


Account::~Account(void)
{
}

Account::Account(int accNumb, std::string Name, int balance)
{
	m_acc_numb=accNumb;
	this->m_Name = Name;
	this->m_balance = balance;
}

Account::Account(Account&acc)
{
	m_acc_numb=acc.m_acc_numb;
	this->m_Name = acc.m_Name;
	this->m_balance = acc.m_balance;
}

void Account::setAccountValues(int accNumb, std::string Name, int balance)
{
	m_acc_numb=accNumb;
	this->m_Name = Name;
	this->m_balance = balance;
}
void Account::deposit(int amount)
{
	this->m_balance +=amount;

}

void Account::withdraw(int amount)
{
	this->m_balance -= amount;
}

void Account::displayDetails()
{
	std::cout << "Account Number : " << this->m_acc_numb << std::endl;
	std::cout << "Account Nmae : " << this->m_Name << std::endl;
	std::cout << "Account Balance : " << this->m_balance << std::endl;
}

void Account::checkBalance()
{
	std::cout << "Account Balance : " << this->m_balance << std::endl;
}
