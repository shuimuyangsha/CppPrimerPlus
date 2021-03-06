// randwalk.cpp -- using the Vector class
// compile with the vector.cpp file
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;
	fout.open("RandWalk.txt");
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enetr step length: ";
		if (!(cin >> dstep))
		{
			break;
		}
		else
		{
			fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		}
		int i = 0;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << i << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")\n";
			i++;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = " << result.magval() / steps << endl;
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	fout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	
	system("pause");
	return 0;
}