// stacker.cpp -- check the class and the functions

#include "stdafx.h"
#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;
int main()
{
	Stack st;
	char ch;
	customer temp;
	double totalpayment = 0.0;
	cout << "Please enter A to add customer's information, D to delete customer's information, and Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a': 
				if (st.isfull())
					cout << "stack already full.\n";
				else
				{
					cout << "Enter the name: ";
					cin.getline(temp.fullname, 35);
					cout << "Enter the payment: ";
					cin >> temp.payment;
					st.push(temp);
				}
				break;
			case 'D':
			case 'd':
				if (st.isempty())
					cout << "stack already empty.\n";
				else
				{
					st.pop(temp);
					totalpayment += temp.payment;
					cout << "The information of " << temp.fullname << " has been deleted.\n";
				}
				break;
		}
		cout << "Please enter A to add customer's information, D to delete customer's information, and Q to quit.\n";
	}
	cout << "Service end.\nThe total payment is " << totalpayment << endl;
	cout << "Bye!\n";
	system("pause");
	return 0;
}