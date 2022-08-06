# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////以上两句话当作套话使用，先不做研究
//int main()
//{
//	//输入输出流函数
//	cout << "This is a C++ program.";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int Max(int x, int y);//对Max函数声明
//	//定义a\b\c函数
//	int a, b, c;
//	//输入数字，给a\b赋值
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

//认识类
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
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c1, c2;
//	int a;
//	float b;
//	//输入c1\c2\a\b
//	cin >> c1 >> c2 >> a >> b;
//	//cout函数可以换行
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
////inline声明max 函数是内置函数
//inline int max(int, int, int);
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int m = max(a, b, c);
//	//函数的调用
//	cout << "max = " << m << endl;
//	return 0;
//}
//inline int max(int x, int y, int z)
//{
//	if (x < y) x = y;
//	if (x < z)x = z;
//	return x;
//}

//并不是所有函数都可以内置
//一般小规模的函数可以内置
//最终还需操作系统自行判断

//函数的重载
/*
#include<iostream>
using namespace std;

int main()
{
//三个函数的声明，其中函数名均为max
//这就是函数的重载的精髓
//调用三个函数名相同的函数,但是参数的个数、类型和顺序至少有一个不同
	int max(int , int , int );
	float max(float, float, float);
	long max(long, long, long);
//三种不同类型的数据变量的定义
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
//#include<iostream>
//using namespace std;
//template<typename T>
//函数的重载+函数模板
//大大提高函数的可读性
//技巧就是将不同的变为T
//但是参数的个数需要一样
//T max(T x, T y, T z)
//{
//		if (x < y) x = y;
//		if (x < z)x = z;
//		return x;
//
//}
//int main()
//{
//	int max(int, int, int);
//	float max(float, float, float);
//	long max(long, long, long);
//
//	int i1, i2, i3, i;
//	float f1, f2, f3, f;
//	long l1, l2, l3, l;
//
//	cin >> i1 >> i2 >> i3;
//	i = max(i1, i2, i3);
//	cout << "i_max = " << i << endl;
//
//	cin >> f1 >> f2 >> f3;
//	f = max(f1, f2, f3);
//	cout << "f_max = " << f << endl;
//
//	cin >> l1 >> l2 >> l3;
//	l = max(l1, l2, l3);
//	cout << "l_max = " << l << endl;
//
//
//	return 0;
//}



//有默认参数的函数
//函数声明时，默认值按照由小到大的顺序进行定义


//第5章 利用数组处理批量数据
//c++处理字符串的方法——字符串类与字符串变量
//字符串变量的定义和引用
//字符串变量的运算
//字符串数组
//字符串运算举例

//输入3个字符串，要求将字母按由小到大顺序输出

//#include<iostream>
//using namespace std;
//#include<string>     //包含string头文件
//int main()
//{
//	string string1,string2,string3,tmp;      //定义字符串变量
//	cout << "please input three strings: " ;      
//	cin >> string1 >> string2 >> string3;    //对字符串变量赋值
//
//    //字符串比较直接用关系运算符 == > >= < <= !=
//	//像数值型数据进行比较一样方便
//	if (string2 > string3)      
//	{
//		tmp = string2;
//		string2 = string3;  //起到了strcpy的作用,而且字符串变量长度不受限制
//		string3 = tmp;
//	}
//	
//	//此时， 未知，小，大
//	//最简单
//	if (string1 <= string2)
//	{
//		cout << string1 << " "
//			<< string2 << " "
//			<< string3 << endl;
//	}
//
//	//string1 > string2
//	else if (string1 <= string3)
//	{
//		cout << string2 << " "
//			<< string1 << " "
//			<< string3 << endl;
//	}
//
//	//此时，只剩下一种情况，string1 > string3
//	else 
//	{
//		cout << string2 << " "
//			<< string3 << " "
//			<< string1 << endl;
//	}
//
//}

//n个学生，信息为姓名和学号
//int_data 用来输入n个学生的姓名和学号
//search用来查找要找的学生是否在本班

#include<iostream>
#include<string>
using namespace std;
string name[50], num[50];
int n;
int main()
{
	void int_data();
	void search(string);
	string fine_name;
	cout << "please input the number of your class:" ;
	cin >> n;
	int_data();
	cout << "please input the name you want to research:";
	cin >> fine_name;
    search(fine_name);
	return 0;
}

void int_data()
{
	int i = 0;
	cout << "please input the name and number of the student:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << i+1 <<". ";
		cin >> name[i] >> num[i];
	}
}

void search(string fine_name)
{
	int i = 0;
	bool flag = false;
	for (i = 0; i < n; i++)
	{
		if (name[i] == fine_name)
		{
			cout << name[i] << "had find out and the number of the student is " << num[i] << endl;
			flag = true;
			break;
		}
		
	}
	if (flag = false)
	{
		cout << "Not Found!" << endl;
	}
}


//第6章 善于使用指针与引用
//指向指针的指针
//const 指针
//void 指针类型
//引用、
//变量的引用
//引用的简单使用
//引用作为函数参数

//第7章 用户自定义数据类型
//用new和delete运算符进行动态分配和撤销存储空间

