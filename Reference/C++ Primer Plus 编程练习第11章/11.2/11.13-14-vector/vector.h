// vector.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_
#include <cmath>
#include <iostream>

namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };
	private:
		double x;
		double y;
		Mode mode;

		double set_mag();
		double set_ang();
		void set_x(double mag, double ang);
		void set_y(double mag, double ang);

	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		
		double xval() const { return x; } // repot values
		double yval() const { return y; }
		double magval() const 
		{
			double mag;
			mag = sqrt(x * x + y * y);
			return mag; 
		}
		double angval() const 
		{
			double ang;
			if (x == 0.0 && y == 0.0)
				ang = 0.0;
			else
				ang = atan2(y, x);
			return ang; 
		}
		void polar_mode();
		void rect_mode();

		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);
	};
}

#endif

