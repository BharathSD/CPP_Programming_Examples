#include <iostream>
#include "Savings.h"
using namespace std;

int main()
{
	Savings savingsAccObj;
	cout << "Initial Values of Savings Account : " << endl;
	savingsAccObj.displayDetails();
	cout << "Adding Account Details" << endl;
	savingsAccObj.setAccountValues(100, "Bharath", 15000, 1000);
	savingsAccObj.displayDetails();

	cout << "Depositing into the account " << 16000 << endl;
	savingsAccObj.deposit(16000);
	savingsAccObj.checkBalance();

	cout << "Withdrawing the amount" << 10000 << endl;
	savingsAccObj.withdraw(10000);
	savingsAccObj.checkBalance();
	return EXIT_SUCCESS;
}