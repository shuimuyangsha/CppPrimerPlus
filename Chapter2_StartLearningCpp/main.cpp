﻿#include <iostream>
#include <stdio.h>
using namespace std;
///*2.2 练手项目：“导弹控制”*/
//int main()
//{
//	std::cout << "火星导弹军第一司令部导弹控制系统1.0\n"<<endl;
//	std::cout << "\\1\\加载导弹\n" ;
//	cout << "\\2\\发射导弹至冥王星\n";
//	cout << "\\3\\发射导弹至白马星座X20行星\n"<<endl;
//
//	cout << "输入\\\\\\\\和对应功能编码号发射导弹\\(例如:\\\\\\\\3)\n";
//
//}

///*2.3 语法解析 */
//int main()
//{
//	std::cout << "火星导弹军第一司令部导弹控制系统1.0\n" << endl;
//	std::cout << "/*这是注释*/" << endl; //这是注释
//
//	system("pause");
//	return 0;
//}

///*2.4 基础指令 */
//int main()
//{
//	system("mode con cols=80 lines=40");  //设置控制台的大小，cols 是高度，lines是宽度
//	std::cout << "这是一个测试，\n测试人员姓名：\"董晓辉\"\n" << endl;
//	system("pause");
//	system("cls");//清除屏幕
//	printf("我好帅！\n");  //C 语言
//	//system("color 13");  //设置控制台颜色
//	system("pause");
//	//system("E:\\我的下载\\test.txt");
//	//system("‪‪‪E:\\test.txt");
//	system("pause");
//	return 0;
//}


///*2.5 游戏加载界面设计 */
//int main()
//{
//	system("color 04");//设置控制台颜色
//	system("mode con cols=80 lines=40");  //设置控制台的大小，cols 是高度，lines是宽度
//	std::cout << "==========================================================\n" << endl;//顶部边框
//	std::cout << endl;
//	std::cout << "            王者荣耀\"控制台\"版 V1.0                     \n" << endl;
//	std::cout << endl << endl << endl << endl;
//	std::cout << "                正在加载游戏...                           \n" << endl;
//	std::cout << "                进度【8/100】                             \n" << endl;
//	std::cout << endl << endl << endl << endl;
//	std::cout << "      网站 http://dadaowangzhe.com                        \n" << endl;	
//	std::cout << "==========================================================\n" << endl;//底部边框	
//	system("pause");  
//	//system("color ?");
//	system("pause");
//	return 0;
//}

///*2.6 万物皆数字（进制） */
int main(void)
{
	std::cout << "123456"<<endl;
	system("pause");
	std::cout <<1415926 << endl;
	std::cout << 10'000'000'000'000 +1 << endl; 
	system("pause");
	cout << 0b11 << endl;
	system("pause");
	cout << 011 << endl;
	system("pause");
	cout << 0xff << endl;
	system("pause");
	return 0;
}