// func.cpp -- class member functions'definition

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

using namespace std;

namespace SALES
{
	void Sales::setSales(const double ar[], int n)
	{
		if (n < 4)
		{
			for (int i = 0; i < n; i++)
			{
				sales[i] = ar[i];
			}
			for (int j = n; j < 4; j++)
			{
				sales[j] = 0;
			}
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				sales[i] = ar[i];
			}
		}
		average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;
		double nmax = 0.0;
		double nmin = 65535.0;
		for (int i = 0; i < 4; i++)
		{
			if (sales[i] > nmax)
			{
				nmax = sales[i];
			}
			if (sales[i] < nmin)
			{
				nmin = sales[i];
			}
			max = nmax;
			min = nmin;
		}
	}

	void Sales ::setSales()
	{
		cout << "Please enter 4 quarters for sales:\n";
		for (int i = 0; i < 4; i++)
		{
			cout << "The #" << i + 1 << " quarter is: ";
			cin >> sales[i];
		}
		average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;
		double nmax = 0.0;
		double nmin = 65535.0;
		for (int i = 0; i < 4; i++)
		{
			if (sales[i] > nmax)
			{
				nmax = sales[i];
			}
			if (sales[i] < nmin)
			{
				nmin = sales[i];
			}
		}
		max = nmax;
		min = nmin;
	}

	void Sales::showSales()
	{
		cout << "Display all information in sales:\n";
		cout << "The 4 quarters are $" << sales[0] << ", $" << sales[1] << ", $" << sales[2] << ", $" << sales[3] << endl;
		cout << "The average income is $" << average << endl;
		cout << "The maximum income is $" << max << endl;
		cout << "The minimum income is $" << min << endl;
	}
}