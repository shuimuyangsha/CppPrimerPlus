// bank.cpp -- containing all the member functions

#include "stdafx.h"
#include <iostream>
#include "bank.h"

BankAccount::BankAccount(const std::string & client, const std::string & num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	std::cout << "The name of bank account is " << name << ", the account number is " << acctnum << ", now it has balance $" << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
	if (cash > 0)
	{
		balance += cash;
		std::cout << "$" << cash << " cash added.\n";
	}
	else
	{
		std::cout << "Input fail.\n";
	}
}

void BankAccount::withdraw(double cash)
{
	if (cash > 0)
	{
		balance -= cash;
		std::cout << "$" << cash << " cash withdrawed.\n";
	}
	else
	{
		std::cout << "Input fail.\n";
	}
}