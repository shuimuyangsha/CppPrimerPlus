#include <iostream>

using namespace std;

/***************************************************/
int main(void)
{
	unsigned int score;
	unsigned int admit_mark = 500;
	cout << "��������ܷ֣�"<<endl;
	//�ж��Ƿ��¼ȡ������
	cin >> score;
	cout << "����ܷ��ǣ�" << score<<endl;
	cout << "¼ȡ�����ǣ�" << admit_mark<<endl;

	cout << "**************************************"<<endl;

	if (score>=admit_mark) {
		cout << "��ϲ�㣡���Ѿ���¼ȡ�ˡ�" << endl;
	}
	else {
		cout << "���ź�����û�б�¼ȡ���ٽ�������" << endl;
	}
	cout << "**************************************" << endl;

	system("pause");
	return 0;
}

