// bank.h -- head file

#ifndef BANK_H_
#define BANK_H_
#include <string>

class BankAccount
{
private:
	std::string name;
	std::string acctnum;
	double balance;
public:
	BankAccount(const std::string & client, const std::string & num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};

#endif

