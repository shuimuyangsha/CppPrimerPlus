// plorg.h -- head file, class definition

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char pname[20];
	int CI;
public:
	Plorg();
	void showplorg() const;
	void newplorg(const char * name);
	void setCI(int x);
};

#endif
