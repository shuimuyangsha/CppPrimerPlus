#include <iostream>
#include <string>
using namespace std;

////Բ����
//const double PI = 3.1415;
///*���һ��Բ�࣬��Բ���ܳ�*/
////���ܳ���ʽ perimeter = 2 * PI * radius;
////Բ�İ뾶 radius
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	int radius;
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculate_perimeter()
//	{
//		return 2 * PI * radius;
//	}
//};
//
//
//int main()
//{
//	//ͨ��Բ�� ���������Բ������
//	Circle c1;
//	//��Բ���� �����Խ��и�ֵ
//	c1.radius = 10;
//	//�ܳ� 
//	cout << "Բ���ܳ��ǣ�" << c1.calculate_perimeter() << endl;
//
//	system("pause");
//	return 0;
//}

/*���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��*/
//class Student
//{
//public://����Ȩ��
//	int m_ID;//ѧ��
//private:
//	//����
//
//	
//	string m_Name;//����
//
//	//��Ϊ
//public:
//	void showStudent()
//	{
//		cout << "������" << m_Name << " ѧ�ţ�" << m_ID << endl;
//	}
//	//��������ֵ
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//};
//int main()
//{
//	Student stu1;
//	stu1.setName("������");
//	stu1.m_ID = 1382332;
//
//	stu1.showStudent();
//
//	Student stu2;
//	stu2.setName("�����");
//	stu2.m_ID = 2;
//
//	stu2.showStudent();
//	system("pause");
//	return 0;
//}

///* struct�� class ������,class �г�Ա��Ĭ��������˽��*/
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
//	//c1.m_A = 10;//�����Է������еĳ�Ա����Ϊ����˽�е�
//	c2.m_B = 10;//���������������еĳ�Ա��
//
//	system("pause");
//	return 0;
//}

///*���캯�� �������� ����ĳ�ʼ������������һ���࣬��ʾ�����˻�*/
////1�����캯�� ���г�ʼ������
//
////2���������� ��������Ĳ���
//class BankAccount
//{
//private:
//	char name[40];
//	char acctnum[25];
//	double balance;
//public:
//	//1 ���캯��  û�з���ֵ ����дvoid;��������������ͬ�����캯�������в��������Է������أ����������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ�Ρ�
//	//BankAccount(const char* client, char* num, double bal = 0.0)
//	BankAccount()
//	{
//		
//		cout << "BankAccount ���캯������" << endl;
//	}
//
//	//2���������� �������������û�з���ֵ����дvoid����������������ͬ ������ǰ�� ~  ���������в����������Է������أ����캯�����Զ�����
//	~BankAccount()
//	{
//		cout << "BankAccount ������������" << endl;
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

///*���캯���ķ���͵���*/
////���ղ�������Ϊ �вκ��޲ι���  �޲��ֳ�ΪĬ�Ϲ��캯��
////�������ͷ���Ϊ ��ͨ����Ϳ�������
//class BankAccount
//{
//private:
//	string name;
//	string acctnum;
//	double balance;
//public:
//	BankAccount(const string & client, string & num, double bal = 0.0)
//	{
//		cout << "���� �вι���" << endl;
//		name = client;
//		acctnum = num;
//		balance = bal;
//	}
//
//	void show(void) const
//	{
//		cout << "������п���" << balance << endl;
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

///*���캯���ĵ��ù���*/
////1��ֻҪ����һ���࣬C++���������ÿ�����������3������
////Ĭ�Ϲ���  ����ʵ�֣�
////��������  ����ʵ�֣�
////��������  ��ֵ������
////2���������д���вι��캯���������������ṩĬ�Ϲ��캯��
//class Person {
//
//public:
//	//Person()
//	//{
//	//	cout << "Person ��Ĭ�Ϲ��캯������" << endl;
//	//}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person ���вι��캯������" << endl;
//	}
//	//Person(const Person& p)
//	//{
//	//	cout << "Person �Ŀ������캯������" << endl;
//	//	m_Age = p.m_Age;
//	//}
//	~Person()
//	{
//		cout << "Person ��������������" << endl;
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
////	cout << "p2������=" << p2.m_Age << endl;
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

/*�����ǳ����*/
class Person {
public:
	//Person()
	//{
	//	cout << "Ĭ�Ϲ��캯������" << endl;
	//}
	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "�вι��캯������" << endl;
	}
	Person(const Person & p)
	{
		cout << "�������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//ǳ����
		m_Height = new int(*p.m_Height);//���
	}
	~Person()
	{
		cout << "������������" << endl;
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
	cout << "p1������=" << p1.m_Age << "  p1�����=" << *p1.m_Height << endl;
	Person p2(p1);

	cout << "p2������=" << p2.m_Age << "  p2�����=" << *p2.m_Height << endl;

}


int main()
{
	fun01();

	system("pause");
	return 0;
}