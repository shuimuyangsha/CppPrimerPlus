#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex
{
private:
	double real;//实数部分
	double ima;//虚数部分
public:
	complex();
	complex(double x, double y);
	~complex();
	friend complex operator+(const complex & c1, const complex & c2);
	friend complex operator-(const complex & c1, const complex & c2);
	friend complex operator*(double n, const complex & c);
	friend complex operator*(const complex & c1, const complex & c2);
	friend complex operator~(const complex & c);
	friend std::ostream & operator<<(std::ostream & os, const complex & c);
	friend std::istream & operator>>(std::istream & is, complex & c);
};

#endif

