// sourcefunc.cpp -- The functions' definition

#include "stdafx.h"
#include <iostream>
#include "complex0.h"
using namespace std;

complex::complex()
{
	real = ima = 0.0;
}

complex::complex(double x, double y)
{
	real = x;
	ima = y;
}

complex::~complex()
{
}

complex operator+(const complex & c1, const complex & c2)
{
	complex sum;
	sum.real = c1.real + c2.real;
	sum.ima = c1.ima + c2.ima;
	return sum;
}

complex operator-(const complex & c1, const complex & c2)
{
	complex diff;
	diff.real = c1.real - c2.real;
	diff.ima = c1.ima - c2.ima;
	return diff;
}

complex operator*(const complex & c1, const complex & c2)
{
	complex mult;
	mult.real = c1.real * c2.real - c1.ima * c2.ima;
	mult.ima = c1.real * c2.ima + c1.ima * c2.real;
	return mult;
}

complex operator*(double n, const complex & c)
{
	complex mult;
	mult.real = n * c.real;
	mult.ima = n * c.ima;
	return mult;
}

complex operator~(const complex & c)
{
	complex conj;
	conj.real = c.real;
	conj.ima = -c.ima;
	return conj;
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
	os << "(" << c.real << "," << c.ima << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, complex & c)
{
	cout << "real: ";
	is >> c.real;
	if (!is)
		return is;
	cout << "imaginary: ";
	is >> c.ima;
	return is;
}