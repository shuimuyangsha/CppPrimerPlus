// list.h -- head file, class definition

#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List
{
private:
	enum { MAX = 5 };
	Item items[MAX];
	int top = 0;
public:
	List();
	bool isempty() const;
	bool isfull() const;
	bool add(const Item & item);
	void visit(void(*pf)(Item & item));
	void showitem() const;
};

void plus100(Item & item);

#endif
