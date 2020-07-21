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
class Student
{
public://公共权限
	int m_ID;//学号
private:
	//属性

	
	string m_Name;//姓名

	//行为
public:
	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_ID << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	}

};
int main()
{
	Student stu1;
	stu1.setName("董晓辉");
	stu1.m_ID = 1382332;

	stu1.showStudent();

	Student stu2;
	stu2.setName("诸葛亮");
	stu2.m_ID = 2;

	stu2.showStudent();
	system("pause");
	return 0;
}



