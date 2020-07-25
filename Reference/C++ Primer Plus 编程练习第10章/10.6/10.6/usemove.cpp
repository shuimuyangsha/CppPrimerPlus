// usemove.cpp -- check the class and the functions

#include "stdafx.h"
#include <iostream>
#include "move.h"
using namespace std;

int main()
{
	Move m0(12.5, 16.8);
	Move m1(22.333, 45.567);
	cout << "Now the first move is:\n";
	m0.showmove();
	cout << "Now the second move is:\n";
	m1.showmove();
	cout << "Please input your move:\n";
	double a, b;
	cout << "x: ";
	cin >> a;
	cout << "y: ";
	cin >> b;
	Move m2(a, b);
	cout << "So your move is:\n";
	m2.showmove();
	cout << "Now first move adds into your move:\n";
	m2 = m2.add(m0);
	m2.showmove();
	cout << "Now second move adds into your move:\n";
	m2 = m2.add(m1);
	m2.showmove();
	cout << "Now reset your move:\n";
	cout << "x: ";
	cin >> a;
	cout << "y: ";
	cin >> b;
	m2.reset(a, b);
	cout << "So your move is:\n";
	m2.showmove();

	cout << "Bye!\n";
	system("pause");
	return 0;
}