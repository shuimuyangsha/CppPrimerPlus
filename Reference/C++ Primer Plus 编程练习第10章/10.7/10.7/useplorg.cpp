// useplorg.cpp-- check the class and the functions

#include "stdafx.h"
#include <iostream>
#include "plorg.h"

using namespace std;

int main()
{
	Plorg p;
	cout << "The default plorg is:\n";
	p.showplorg();
	Plorg np;
	cout << "Please enter a new plorg:\n";
	cout << "Name: ";
	char name[20];
	cin.getline(name, 20);
	np.newplorg(name);
	np.showplorg();
	cout << "You can change the CI from the default 50:\n";
	int x;
	cin >> x;
	cin.ignore();
	np.setCI(x);
	np.showplorg();
	cout << "Bye!\n";
	system("pause");
	return 0;
}