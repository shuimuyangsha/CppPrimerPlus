// sales.cpp -- check the class and all the functions

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

using namespace std;
using namespace SALES;
int main()
{
	Sales s1;
	Sales s2;
	cout << "The following is the first sales' information:\n";
	s1.setSales();
	s1.showSales();
	cout << endl << endl << endl;
	cout << "The following is the second sales' information:\n";
	double ar[6] = { 12.5, 55.2, 60.7, 12.34, 25.12, 63.12 };
	s2.setSales(ar, 6);
	s2.showSales();
	cout << endl << endl << endl;
	cout << "Bye\n";
	system("pause");
	return 0;
}