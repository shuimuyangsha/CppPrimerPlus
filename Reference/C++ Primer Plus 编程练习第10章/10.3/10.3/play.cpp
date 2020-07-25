// play.cpp -- check the class and all the functions

#include "stdafx.h"
#include <iostream>
#include "golf.h"

using namespace std;
int main()
{
	Golf g0;
	g0.showgolf();
	g0.sethandicap(120);
	g0.showgolf();
	Golf g1("Jimmy", 100);
	g1.showgolf();
	g1.sethandicap(120);
	g1.showgolf();

	system("pause");
	return 0;
}