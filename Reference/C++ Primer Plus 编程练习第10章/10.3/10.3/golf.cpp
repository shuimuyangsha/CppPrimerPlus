// golf.cpp -- class member functions'definition

#include "stdafx.h"
#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

Golf::Golf(const char * name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}

Golf::Golf()
{
	char temp[40];
	int hand;
	cout << "Please enter the full name of golf player: ";
	cin.getline(temp, 40);
	cout << "Please enter the handicap of golf player: ";
	cin >> hand;
	cin.ignore();
	*this = Golf(temp, hand);
}

void Golf::sethandicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf()
{
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}
