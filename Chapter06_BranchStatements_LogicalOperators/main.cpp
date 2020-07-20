#include <iostream>

using namespace std;

/***************************************************/
int main(void)
{
	unsigned int score;
	unsigned int admit_mark = 500;
	cout << "输入你的总分："<<endl;
	//判断是否过录取分数线
	cin >> score;
	cout << "你的总分是：" << score<<endl;
	cout << "录取分数是：" << admit_mark<<endl;

	cout << "**************************************"<<endl;

	if (score>=admit_mark) {
		cout << "恭喜你！你已经被录取了。" << endl;
	}
	else {
		cout << "很遗憾，你没有被录取，再接再厉！" << endl;
	}
	cout << "**************************************" << endl;

	system("pause");
	return 0;
}

