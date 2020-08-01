// Chapter13_ClassInherit.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

///*继承的基本语法*/
//class BasePage {
//public:
//    void header()
//    {
//        cout << "首页、公开课、登陆、注册...（公共头部）" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++ ...（公共分类列表）" << endl;
//    }
//};
//
//class CPP :public BasePage {
//public:
//    void content()
//    {
//        cout << "C++ 课程" << endl;
//    }
//};
//
//class Java :public BasePage {
//public:
//    void content()
//    {
//        cout << "JAVA 课程" << endl;
//    }
//};
//
//
//int main()
//{
//    cout << "---------------------" << endl;
//    cout << "C++ 页面" << endl;
//    CPP cpp1;
//    cpp1.header();
//    cpp1.footer();
//    cpp1.left();
//    cpp1.content();
//
//    cout << "---------------------" << endl;
//    cout << "JAVA 页面" << endl;
//    Java ja1;
//    ja1.header();
//    ja1.footer();
//    ja1.left();
//    ja1.content();
//
//    cout << "---------------------" << endl;
//    std::cout << "Hello World!\n";
//
//    system("pause");
//    return 0;
//}



///*继承方式*/
//class Base1 {       //基类
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//};
//class Son1 :public Base1 {//公共继承
//public:
//    int m_D;
//
//    void func()
//    {
//        m_A = 1;//父类中的公共权限成员 到子类中任然是公共权限
//        m_B = 2;//父类中的保护权限成员 到子类中依然是保护权限
//        //m_C = 3;//父类中的私有权限成员 子类访问不到
//    }
//};
//class Son2 :protected Base1 {//保护继承
//public:
//    int m_E;
//
//    void func()
//    {
//        m_A = 1;//父类中的公共权限成员 到子类中变为保护权限
//        m_B = 2;//父类中的保护权限成员 到子类中依然是保护权限
//        //m_C = 3;//父类中的私有权限成员 子类访问不到
//    }
//};
//
//class Son3 :private Base1 {//私有继承
//public:
//    int m_F;
//
//    void func()
//    {
//        m_A = 1;//父类中的公共权限成员 到子类中变为私有权限
//        m_B = 2;//父类中的保护权限成员 到子类中变为私有权限
//        //m_C = 3;//父类中的私有权限成员 子类访问不到
//    }
//};
//
//class GrandSon3 :public Son3 {//共有继承
//public:
//    int m_G;
//
//    void func()
//    {
//        //m_A = 1;//m_A 对Son3是私有的，所以对GrandSon3 不可访问
//        //m_B = 2;//m_A 对Son3是私有的，所以对GrandSon3 不可访问
//    }
//};
//
//
//void test01()
//{
//    Son1 s1;
//    Son2 s2;
//    Son3 s3;
//    s1.m_A = 33;
//    //s1.m_B = 22;//到Son1中 m_B 是保护权限 类外访问不到
//    s1.m_D = 4;
//
//    //s2.m_A = 11;//到Son2中 m_A 是保护权限 类外访问不到
//    //s2.m_B = 11;//到Son2中 m_B 是保护权限 类外访问不到
//    s2.m_E = 5;
//
//    //s3.m_A = 11;//到Son3中 m_A 是私有权限 类外访问不到
//    //s3.m_B = 11;//到Son3中 m_B 是私有权限 类外访问不到
//    s3.m_F = 6;
//}
//
//
//int main()
//{
//
//    cout << "---------------------" << endl;
//    std::cout << "Hello World!\n";
//
//    system("pause");
//    return 0;
//}


///*继承中的对象模型（内存分配情况）*/
//class Base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1:public Base{
//public:
//	int m_D;
//	void func()
//	{
//		m_A = 1;
//		m_B = 2;
//		//m_C = 3;//被编译器隐藏了，但是也继承下来了，指示不能被访问
//	}
//};
//
////利用VS自带的开发人员命令提示工具查看对象模型
////1、跳转盘符  E：
////2、跳转文件路径 cd 具体路径  （例如：cd E:\Code\LeaningC\CppPrimerPlus\Chapter13_ClassInherit）
////3、输入查看命令
////cl / d1 reportSingleClassLayoutSon1 Chapter13_ClassInherit.cpp
////查看对象模型命令 类名 文件名
////注意是cl(字母 l) / d1(数字 1)
////E : \Code\LeaningC\CppPrimerPlus\Chapter13_ClassInherit > cl / d1 reportSingleClassLayoutSon1 Chapter13_ClassInherit.cpp
//
//void test1()
//{
//	Son1 s1;
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中的私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
//	cout << "s1 的大小" << sizeof(Son1) << endl;
//	//cout << "s1 的大小" << sizeof(s1) << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}



/*继承中构造和析构的顺序*/
//我们这次研究的问题是 父类和子类的构造和析构顺序是谁先谁后？

class Base {
public:
	Base() {
		cout << "Base是构造函数被调用..." << endl;
	}
	~Base() {
		cout << "Base是析构函数被调用..." << endl;
	}
};
class Son1 :public Base {
public:
	Son1() {
		cout << "Son1是构造函数被调用..." << endl;
		m_time = 1;
	}

	~Son1() {
		cout << "Son1是析构函数被调用..." << endl;
	}

	Son1 operator+ (const Son1& m_time) const;
	int m_time;
};



void test01()
{
	//Base b1;
	Son1 s1;

}

int main()
{
	test01();
	system("pause");
	return 0;
}


