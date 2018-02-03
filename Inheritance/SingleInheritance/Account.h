#pragma once
#include <string>
#include <iostream>

class Account
{
public:
	Account(void);
	Account(int accNumb, std::string Name, int balance);
	Account(Account&acc);
	~Account(void);

	void deposit(int amount);
	void withdraw(int amount);
	void displayDetails();
	void setAccountValues(int accNumb, std::string Name, int balance);
	void checkBalance();

protected:
	int m_acc_numb;
	std::string m_Name;
	int m_balance;
};

