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
class Student
{
public://����Ȩ��
	int m_ID;//ѧ��
private:
	//����

	
	string m_Name;//����

	//��Ϊ
public:
	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ�" << m_ID << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}

};
int main()
{
	Student stu1;
	stu1.setName("������");
	stu1.m_ID = 1382332;

	stu1.showStudent();

	Student stu2;
	stu2.setName("�����");
	stu2.m_ID = 2;

	stu2.showStudent();
	system("pause");
	return 0;
}



