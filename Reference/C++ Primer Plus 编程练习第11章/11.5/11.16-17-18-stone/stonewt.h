// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int state; 
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void Stonewt::setstate(int x);
	friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
	friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
	friend Stonewt operator*(const Stonewt & s, double n);
	friend Stonewt operator*(double m, const Stonewt & s);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};

#endif

