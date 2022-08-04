# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "This is a C++ program.";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int Max(int x, int y);//对Max函数声明
//	int a, b, c;
//	cin >> a >> b;
//	c = Max(a, b);//调用Max函数
//	cout << "max=" << c << endl;
//	return 0;
//
//}
//
//int Max(int x, int y)//定义Max函数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


#include<iostream>
using namespace std;
class Stud //类的声明
{
private: //私有部分
	int num;
	int score;
public: //公有部分
	void setdate() //输入函数
	{
		cin >> num;
		cin >> score;
	}
	void display() //输出函数
	{
		cout << "num = " << num << endl;
		cout << "score = " << score<< endl;
	}
};

Stud stud1, stud2;  //类的定义
int main()
{
	stud1.setdate();
	stud2.setdate();
	stud1.display();
	stud2.display();
	return 0;
}