//第六章 分支语句和逻辑运算符

#include <iostream>
#include <fstream>

using namespace std;

///*if else 语句*/
//int main(void)
//{
//	unsigned int score;
//	unsigned int admit_mark = 500;
//	cout << "输入你的总分："<<endl;
//	//判断是否过录取分数线
//	cin >> score;
//	cout << "你的总分是：" << score<<endl;
//	cout << "录取分数是：" << admit_mark<<endl;
//
//	cout << "**************************************"<<endl;
//
//	if (score>=admit_mark) {
//		cout << "恭喜你！你已经被录取了。" << endl;
//	}
//	else {
//		cout << "很遗憾，你没有被录取，再接再厉！" << endl;
//	}
//	cout << "**************************************" << endl;
//
//	system("pause");
//	return 0;
//}

///*6.5 switch语句*/
//int main(void)
//{
//	int score = 0;
//	cout << "对电影评分(0---10)：" << endl;
//	cin >> score;
//	switch (score) 
//	{
//		case 10:
//			cout << "经典电影" << endl;
//			break;
//		case 9:
//			cout << "很好的电影" << endl;
//			break;
//		case 8:
//			cout << "电影一般" << endl;
//			break;
//		case 7:
//		case 6:
//			cout << "电影很普通" << endl;
//			break;
//		default:
//			cout << "烂片" << endl;
//			break;
//	}
//
//	system("pause");
//	return 0;
//}

/*6.8 简单文件输入/输出*/
ofstream outFile;
ofstream fout;
ifstream inFile;

int main(void)
{
	float wt = 3.1415;
	char line[80] ;

	cout << "下面将演示向文件写入数据：" << endl;
	system("pause");
	outFile.open("out.txt");
	//cout.precision(9); //调整浮点数显示位数
	cout << wt << endl;
	outFile << wt << endl;
	cout << "输入你的姓名："<<endl;
	cin >> line;
	cout << "你的名字是：" << line << endl;
	outFile << line<<endl;
	outFile.close();
	system("pause");

	cout << "下面将演示从文件读取内容：" << endl;
	system("pause");
	inFile.open("in.txt");
	inFile >> wt;
	cout << wt<< endl;
	system("pause");
	return 0;
}


