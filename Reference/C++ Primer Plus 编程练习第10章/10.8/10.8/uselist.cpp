// uselist.cpp -- check the class and the functions

#include "stdafx.h"
#include <iostream>
#include "list.h"
#include <cctype>

using namespace std;

int main()
{
	cout << "Please enter C to create your list, P to process the list, S to show the items, Q to quit:\n";
	char ch;
	List l;
	int data;
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
			case 'C':
			case 'c':
				if (l.isfull())
					cout << "The list already full.\n";
				else
				{
					cout << "Enter the data: ";
					cin >> data;
					l.add(data);
				}
				break;
			case 'P':
			case 'p':
				if (l.isempty())
					cout << "The list already empty.\n";
				else
				{
					l.visit(plus100);
					cout << "Every data has plused 100.\n";
				}
				break;
			case 'S':
			case 's':
				l.showitem();
				break;
		}
		cout << "Please enter C to create your list, P to process the list, Q to quit:\n";
	}
	l.showitem();
	cout << "Bye!\n";
	system("pause");
	return 0;
}