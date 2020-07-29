#include <iostream>
#include <string>
using namespace std;

////圆周率
//const double PI = 3.1415;
///*设计一个圆类，求圆的周长*/
////求周长公式 perimeter = 2 * PI * radius;
////圆的半径 radius
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	int radius;
//	//行为
//	//获取圆的周长
//	double calculate_perimeter()
//	{
//		return 2 * PI * radius;
//	}
//};
//
//
//int main()
//{
//	//通过圆类 创建具体的圆（对象）
//	Circle c1;
//	//给圆对象 的属性进行赋值
//	c1.radius = 10;
//	//周长 
//	cout << "圆的周长是：" << c1.calculate_perimeter() << endl;
//
//	system("pause");
//	return 0;
//}

/*设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号*/
//class Student
//{
//public://公共权限
//	int m_ID;//学号
//private:
//	//属性
//
//	
//	string m_Name;//姓名
//
//	//行为
//public:
//	void showStudent()
//	{
//		cout << "姓名：" << m_Name << " 学号：" << m_ID << endl;
//	}
//	//给姓名赋值
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//};
//int main()
//{
//	Student stu1;
//	stu1.setName("董晓辉");
//	stu1.m_ID = 1382332;
//
//	stu1.showStudent();
//
//	Student stu2;
//	stu2.setName("诸葛亮");
//	stu2.m_ID = 2;
//
//	stu2.showStudent();
//	system("pause");
//	return 0;
//}

///* struct与 class 的区别,class 中成员的默认属性是私有*/
//class C1 {
//	int m_A;
//
//};
//struct C2 {
//	int m_B;
//};
//
//int main(void)
//{
//	C1 c1;
//	C2 c2;
//
//	//c1.m_A = 10;//不可以访问类中的成员，因为它是私有的
//	c2.m_B = 10;//可以正常访问类中的成员。
//
//	system("pause");
//	return 0;
//}

///*构造函数 析构函数 对象的初始化和清理。定义一个类，表示银行账户*/
////1、构造函数 进行初始化操作
//
////2、析构函数 进行清理的操作
//class BankAccount
//{
//private:
//	char name[40];
//	char acctnum[25];
//	double balance;
//public:
//	//1 构造函数  没有返回值 不用写void;函数名与类名相同；构造函数可以有参数，可以发生重载；创建对象的时候，构造函数会自动调用，而且只调用一次。
//	//BankAccount(const char* client, char* num, double bal = 0.0)
//	BankAccount()
//	{
//		
//		cout << "BankAccount 构造函数调用" << endl;
//	}
//
//	//2、析构函数 进行清理操作；没有返回值，不写void；函数名和类名相同 在名称前加 ~  ；不可以有参数，不可以发生重载；构造函数会自动调用
//	~BankAccount()
//	{
//		cout << "BankAccount 析构函数调用" << endl;
//	}
//	//void show(void) const;
//	//void deposit(double cash);
//	//void withdraw(double cash);
//
//
//};
//
//void fun1()
//{
//	BankAccount acc1;
//}
//
//int main(void)
//{
//	fun1();
//
//	system("pause");
//	return 0;
//}

///*构造函数的分类和调用*/
////按照参数分类为 有参和无参构造  无参又称为默认构造函数
////按照类型分类为 普通构造和拷贝构造
//class BankAccount
//{
//private:
//	string name;
//	string acctnum;
//	double balance;
//public:
//	BankAccount(const string & client, string & num, double bal = 0.0)
//	{
//		cout << "调用 有参构造" << endl;
//		name = client;
//		acctnum = num;
//		balance = bal;
//	}
//
//	void show(void) const
//	{
//		cout << "你的银行卡余额：" << balance << endl;
//	}
//	//void deposit(double cash);
//	//void withdraw(double cash);
//
//};
//
//void fun1()
//{
//	string s1 = "XiaohuiDong";
//	string s2 = "123456789";
//
//	BankAccount acc1(s1, s1,2000);
//
//	acc1.show();
//
//
//}
//
//int main(void)
//{
//	fun1();
//
//	system("pause");
//	return 0;
//}

///*构造函数的调用规则*/
////1、只要创建一个类，C++编译器会给每个类添加至少3个函数
////默认构造  （空实现）
////析构函数  （空实现）
////拷贝函数  （值拷贝）
////2、如果我们写了有参构造函数，编译器不在提供默认构造函数
//class Person {
//
//public:
//	//Person()
//	//{
//	//	cout << "Person 的默认构造函数调用" << endl;
//	//}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person 的有参构造函数调用" << endl;
//	}
//	//Person(const Person& p)
//	//{
//	//	cout << "Person 的拷贝构造函数调用" << endl;
//	//	m_Age = p.m_Age;
//	//}
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//	int m_Age;
//
//};
//
////void fun01()
////{
////	Person p;
////	p.m_Age = 20;
////
////	Person p2(p);
////
////	cout << "p2的年龄=" << p2.m_Age << endl;
////
////}
//void fun02()
//{
//	Person p3(21);
//}
//
//int main()
//{
//	//fun01();
//	fun02();
//
//	system("pause");
//	return 0;
//}

/*深拷贝与浅拷贝*/
class Person {
public:
	//Person()
	//{
	//	cout << "默认构造函数调用" << endl;
	//}
	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person & p)
	{
		cout << "拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//浅拷贝
		m_Height = new int(*p.m_Height);//深拷贝
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
		}
	}
	int m_Age;
	int *m_Height;
};

void fun01()
{
	Person p1(12,175);
	cout << "p1的年龄=" << p1.m_Age << "  p1的身高=" << *p1.m_Height << endl;
	Person p2(p1);

	cout << "p2的年龄=" << p2.m_Age << "  p2的身高=" << *p2.m_Height << endl;

}


int main()
{
	fun01();

	system("pause");
	return 0;
}