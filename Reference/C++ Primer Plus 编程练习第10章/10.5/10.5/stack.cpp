// stack.cpp -- class member functions' definition

#include "stdafx.h"
#include "stack.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == 3;
}

bool Stack::push(const Item & item)
{
	if (top < 3)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}