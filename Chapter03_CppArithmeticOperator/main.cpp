#include <iostream>

using namespace std;

///***C++ 运算符***/
//int main(void)
//{
//	float num1, num2;
//	int wheels = 4 + 2;
//	int lbs1 = 14;
//	int lbs2;
//	cout << "C++ 运算符\n" << endl;
//	cout << "wheels = "<<wheels<<endl;
//
//	cout.setf(ios_base::fixed,ios_base::floatfield);
//	cout << "please enter number:";
//	cin >> num1;
//	cout << "please enter number again:";
//	cin >> num2;
//	system("pause");
//	cout << "num1 = " << num1 << ";num2 = " << num2 << endl;
//	cout << "num1 + num2 =" << num1 + num2 << endl;
//	cout << "num1 - num2 =" << num1 - num2 << endl;
//	cout << "num1 * num2 =" << num1 * num2 << endl;
//	cout << "num1 / num2 =" << num1 / num2 << endl;
//	system("pause");
//	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
//	cout << "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
//	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
//	cout << "double constants division: 1e7/5.0 = " << 1e7 / 5.0 << endl;
//	cout << "float constants division: 1e7f/5.0f = " << 1e7 / 5.0 << endl;
//	system("pause");
//	cout << "请输入除数：\n";
//	cin >> lbs2;
//	int stone = lbs2 / lbs1;
//	int pounds = lbs2 % lbs1;
//	cout << lbs2 << "pounds are " << stone << " stone, " << pounds << " pound(s).\n";
//	system("pause");
//
//
//	return 0;
//}

/*激活游戏*/
int main(void)
{
	unsigned int DateBirth;//生日
	float weight;//体重
	float height;//身高
	unsigned short sex;//性别
	long long PhoneNo;//手机号

	cout << "==================================================================" << endl;
	cout << "输入出生日期：" << endl;
	cin >> DateBirth;
	cout << "输入体重：" << endl;
	cin >> weight;
	cout << "输入身高：" << endl;
	cin >> height;
	cout << "输入性别：" << endl;
	cin >> sex;
	cout << "输入手机号：" << endl;
	cin >> PhoneNo;
	cout << "==================================================================" << endl;
	system("pause");

	long long endInfo;

	endInfo = PhoneNo / 2 + DateBirth + weight + height;

	cout << "你的激活密码是：" << endInfo<<endl;
	cout << "请登录官网，用激活密码换取激活码！" << endl;
	system("pause");
	return 0;
}




