//������ ��֧�����߼������

#include <iostream>
#include <fstream>

using namespace std;

///*if else ���*/
//int main(void)
//{
//	unsigned int score;
//	unsigned int admit_mark = 500;
//	cout << "��������ܷ֣�"<<endl;
//	//�ж��Ƿ��¼ȡ������
//	cin >> score;
//	cout << "����ܷ��ǣ�" << score<<endl;
//	cout << "¼ȡ�����ǣ�" << admit_mark<<endl;
//
//	cout << "**************************************"<<endl;
//
//	if (score>=admit_mark) {
//		cout << "��ϲ�㣡���Ѿ���¼ȡ�ˡ�" << endl;
//	}
//	else {
//		cout << "���ź�����û�б�¼ȡ���ٽ�������" << endl;
//	}
//	cout << "**************************************" << endl;
//
//	system("pause");
//	return 0;
//}

///*6.5 switch���*/
//int main(void)
//{
//	int score = 0;
//	cout << "�Ե�Ӱ����(0---10)��" << endl;
//	cin >> score;
//	switch (score) 
//	{
//		case 10:
//			cout << "�����Ӱ" << endl;
//			break;
//		case 9:
//			cout << "�ܺõĵ�Ӱ" << endl;
//			break;
//		case 8:
//			cout << "��Ӱһ��" << endl;
//			break;
//		case 7:
//		case 6:
//			cout << "��Ӱ����ͨ" << endl;
//			break;
//		default:
//			cout << "��Ƭ" << endl;
//			break;
//	}
//
//	system("pause");
//	return 0;
//}

/*6.8 ���ļ�����/���*/
ofstream outFile;
ofstream fout;
ifstream inFile;

int main(void)
{
	float wt = 3.1415;
	char line[80] ;

	cout << "���潫��ʾ���ļ�д�����ݣ�" << endl;
	system("pause");
	outFile.open("out.txt");
	//cout.precision(9); //������������ʾλ��
	cout << wt << endl;
	outFile << wt << endl;
	cout << "�������������"<<endl;
	cin >> line;
	cout << "��������ǣ�" << line << endl;
	outFile << line<<endl;
	outFile.close();
	system("pause");

	cout << "���潫��ʾ���ļ���ȡ���ݣ�" << endl;
	system("pause");
	inFile.open("in.txt");
	inFile >> wt;
	cout << wt<< endl;
	system("pause");
	return 0;
}


