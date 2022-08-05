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


//#include<iostream>
//using namespace std;
//class Stud //类的声明
//{
//private: //私有部分
//	int num;
//	int score;
//public: //公有部分
//	void setdate() //输入函数
//	{
//		cin >> num;
//		cin >> score;
//	}
//	void display() //输出函数
//	{
//		cout << "num = " << num << endl;
//		cout << "score = " << score<< endl;
//	}
//};
//
//Stud stud1, stud2;  //类的定义
//int main()
//{
//	stud1.setdate();
//	stud2.setdate();
//	stud1.display();
//	stud2.display();
//	return 0;
//}


//输入流与输出流的基本操作
#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c1, c2;
//	int a;
//	float b;
//	cin >> c1 >> c2 >> a >> b;
//	cout << "c1 = " << c1<<endl
//		<< "c2 = " << c2<<endl
//		<< "a = " << a<<endl
//		<< "b = " << b<<endl;
//
//	return 0;
//}

//在标准输入流与输出流中使用控制符


//逻辑常量和逻辑变量
//flase = 0
//true = 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	bool flag = true;
//	flag = false;
//	cout << "flag = " << flag << endl;
//	flag = 255;
//	cout << "flag = " << flag << endl;
//	return 0;
//}

//内置函数
//比较三个数的大小 max
//#include<iostream>
//using namespace std;
//inline int max(int, int, int);
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int m = max(a, b, c);
//	cout << "max = " << m << endl;
//	return 0;
//}
//inline int max(int x, int y, int z)
//{
//	if (x < y) x = y;
//	if (x < z)x = z;
//	return x;
//}

//函数的重载
/*
#include<iostream>
using namespace std;
int main()
{
	int max(int , int , int );
	float max(float, float, float);
	long max(long, long, long);

	int i1, i2, i3,i;
	float f1, f2, f3,f;
	long l1, l2, l3,l;

	cin >> i1 >> i2 >> i3;
	i = max(i1, i2, i3);
	cout << "i_max = " << i << endl;

	cin >> f1 >> f2 >> f3;
	f = max(f1, f2, f3);
	cout << "f_max = " << f << endl;

	cin >> l1 >> l2 >> l3;
	l = max(l1, l2, l3);
	cout << "l_max = " << l << endl;


	return 0;
}
int max(int x, int y, int z)
{
	if (x < y) x = y;
	if (x < z)x = z;
	return x;
}

float max(float x, float y, float z)
{
	if (x < y) x = y;
	if (x < z)x = z;
	return x;
}

long max(long x, long y, long z)
{
	if (x < y) x = y;
	if (x < z)x = z;
	return x;
}
*/

//函数模板
#include<iostream>
using namespace std;
template<typename T>

T max(T x, T y, T z)
{
		if (x < y) x = y;
		if (x < z)x = z;
		return x;

}
int main()
{
	int max(int, int, int);
	float max(float, float, float);
	long max(long, long, long);

	int i1, i2, i3, i;
	float f1, f2, f3, f;
	long l1, l2, l3, l;

	cin >> i1 >> i2 >> i3;
	i = max(i1, i2, i3);
	cout << "i_max = " << i << endl;

	cin >> f1 >> f2 >> f3;
	f = max(f1, f2, f3);
	cout << "f_max = " << f << endl;

	cin >> l1 >> l2 >> l3;
	l = max(l1, l2, l3);
	cout << "l_max = " << l << endl;


	return 0;
}



//有默认参数的函数
//函数声明时，默认值按照由小到大的顺序进行定义
