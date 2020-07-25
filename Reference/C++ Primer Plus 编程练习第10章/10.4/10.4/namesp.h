// namesp.h -- class definition

#ifndef NAMESP_H_
#define NAMESP_H_

namespace SALES
{
	class Sales
	{
	private:
		double sales[4];
		double average;
		double max;
		double min;
	public:
		void setSales(const double ar[], int n);
		void setSales();
		void showSales();
	};
}
#endif
