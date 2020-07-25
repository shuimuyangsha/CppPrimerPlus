// golf.h -- containing the class definition

#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
	char fullname[40];
	int handicap;
public:
	Golf(const char * name, int hc);
	Golf();
	void sethandicap(int hc);
	void showgolf();
};

#endif
