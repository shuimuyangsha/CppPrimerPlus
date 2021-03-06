// usebank.cpp -- check the class and all the functions

#include "stdafx.h"
#include <iostream>
#include "bank.h"
#include <string>

int main()
{
	using namespace std;
	cout << "Please enter your information for operation:\n";
	string client;
	string num;
	double bal;
	cout << "Your name: ";
	getline(cin, client);
	cout << "Your account number: ";
	cin >> num;
	cout << "Your balance: ";
	cin >> bal;
	BankAccount myaccount(client, num, bal);
	myaccount.show();
	char flag;
	double cash;
	cout << "Please choose what you want, d for deposit, w for withdraw, q to quit: ";
	cin >> flag;
	while (flag != 'q')
	{
		if (flag == 'd')
		{
			cout << "Please input the deposit amount: ";
			cin >> cash;
			myaccount.deposit(cash);
			myaccount.show();
		}
		else if (flag == 'w')
		{
			cout << "Please input the withdraw amount: ";
			cin >> cash;
			myaccount.withdraw(cash);
			myaccount.show();
		}
		else
			break;
		cout << "Please choose what you want, d for deposit, w for withdraw, q to quit: ";
		cin >> flag;
	}
	cout << "Bye\n";
	system("Pause");
    return 0;
}

