#pragma once
#include "account.h"
class Savings :
	public Account
{
protected:
	const int m_minBalance;
public:
	Savings(void);
	Savings(int accNumb, std::string Name, int balance, int minBalance);
	void setAccountValues(int accNumb, std::string Name, int balance, int minBalance);
	void displayDetails();
	void withdraw(int amount);
	~Savings(void);
};

