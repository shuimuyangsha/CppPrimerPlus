#include <iostream>

using namespace std;

///***C++ �����***/
//int main(void)
//{
//	float num1, num2;
//	int wheels = 4 + 2;
//	int lbs1 = 14;
//	int lbs2;
//	cout << "C++ �����\n" << endl;
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
//	cout << "�����������\n";
//	cin >> lbs2;
//	int stone = lbs2 / lbs1;
//	int pounds = lbs2 % lbs1;
//	cout << lbs2 << "pounds are " << stone << " stone, " << pounds << " pound(s).\n";
//	system("pause");
//
//
//	return 0;
//}

/*������Ϸ*/
int main(void)
{
	unsigned int DateBirth;//����
	float weight;//����
	float height;//���
	unsigned short sex;//�Ա�
	long long PhoneNo;//�ֻ���

	cout << "==================================================================" << endl;
	cout << "����������ڣ�" << endl;
	cin >> DateBirth;
	cout << "�������أ�" << endl;
	cin >> weight;
	cout << "������ߣ�" << endl;
	cin >> height;
	cout << "�����Ա�" << endl;
	cin >> sex;
	cout << "�����ֻ��ţ�" << endl;
	cin >> PhoneNo;
	cout << "==================================================================" << endl;
	system("pause");

	long long endInfo;

	endInfo = PhoneNo / 2 + DateBirth + weight + height;

	cout << "��ļ��������ǣ�" << endInfo<<endl;
	cout << "���¼�������ü������뻻ȡ�����룡" << endl;
	system("pause");
	return 0;
}




