# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//void swap(int &a, int &b)      //交换函数
//{
//	//实现x和y的交换
//	int tmp = b;
//	b = a;
//	a = tmp;
//}
//
//void sort(int a, int b)
//{
//	if (a < b)
//	{
//		swap(a, b);
//	}
//	cout << "从大到小的顺序是：" << a << " " << b << endl;
//}
//
//void sort(int a, int b, int c)
//{
//	if (a < b)
//		swap(a, b);
//	//此时，a>b 
//	//a和c的大小、b和c的大小未知
//	if (c > a && c > b)
//		swap(a, c);      //交换a c即可
//	if (c > b && c < a)
//		swap(b, c);      //交换b c即可
//	cout << "从大到小的顺序是：" << a << " " << b << " "<<c<<endl;
//
//}
//
//void sort(int a, int b, int c, int d)
//{
//	int i = 0;
//	if (a < b)
//		swap(a, b);
//	if (a < c)
//		swap(a, c);
//	if (a < d)
//		swap(a, d);
//	if (b < c)
//		swap(b, c);
//	if (b < d)
//		swap(b, d);
//	if (c < d)
//		swap(c, d);
//	cout << "从小到大的顺序是：" << a << " " << b << " " << c << " " << d << " " << endl;
//}
//int main()
//{
//	int a, b, c, d;
//	//两个数的排序
//	cout << "请输入排序的2个数： ";
//	cin >> a >> b;
//	sort(a, b);
//	//三个数的排序
//	cout << "请输入排序的3个数： ";
//	cin >> a >> b>>c;
//	sort(a, b,c);
//	//4个数的排序
//	cout << "请输入排序的4个数： ";
//	cin >> a >> b >> c >> d;
//	sort(a, b, c, d);
//}


//编写一个程序，设计一个三角形类Triangle，三角形类有三条边x、y、z和一个求面积函数area()。
//友元函数compute()用来计算两个三角形面积之和。编写程序进行测试。

//#include<iostream>
//using namespace std;
//#include<string>
//#include<cmath>
//class Triangle
//{
//public:
//	Triangle(int a, int b, int c) { x = a; y = b; z = c; }
//	int area();
//	friend void compute(Triangle &t1,Triangle &t2);
//private:
//	float x;
//	float y;
//	float z;
//
//};
//
//int Triangle::area()
//{
//	float s;
//	float area;
//	s = (x + y + z) / 2;
//	area = sqrt(s * (s - x) * (s - y) * (s - z));      //算法
//	return area;
//
//}
//
//void compute(Triangle& t1, Triangle& t2)
//{
//	cout << "两个三角形面积之和为" << t1.area() + t2.area() << endl;
//}
//
//int main()
//{
//	int a, b, c;
//	cout << "请输入三角形1三边之长：";
//	cin >> a >> b >> c;
//	Triangle t1(a, b, c);
//	cout << "请输入三角形2三边之长：";
//	cin >> a >> b >> c;
//	Triangle t2(a, b, c);
//	compute(t1, t2);
//	return 0;
//}




//有一个基类MyArray，基类中可以存放一组整数。
//class MyArray
//{
//public:
//	MyArray(int len);//构造函数
//	MyArray(const MyArray& ma);//拷贝构造函数
//	~MyArray();//析构函数
//	void Input();//输入
//	void Output();//输出
//protected:
//	int* alist;
//	int length;
//};


#include<iostream>
using namespace std;
//请先将MyArray类中的成员函数在类外实现
//然后再定义一个类SortArray继承自类MyArray，在该类中定义函数sort()实现冒泡排序功能。
class MyArray
{
public:
	MyArray(int len);//构造函数
	MyArray(const MyArray& ma);//拷贝构造函数
	~MyArray();//析构函数
	void Input();//输入
	void Output();//输出
protected:
	int* alist;
	int length;
};

MyArray::MyArray(int len)      //定义构造函数
{
	length = len;
	alist = new int[length];
}

MyArray::MyArray(const MyArray& ma)
{
	//复制ma对象
	length = ma.length;
	int i = 0;
	alist = new int[length];
	for (i = 0; i < length; i++)
	{
		alist[i] = ma.alist[i];
	}
}

MyArray::~MyArray()
{
	delete[]alist;      //清除指针
	alist = NULL;
}

void MyArray::Input()//输入
{
	int i = 0;
	cout << "请输入"<<length<<"个元素：";
	for(i = 0; i < length; i++)
	{
		cin >> alist[i];
	}
	
}
void MyArray::Output()//输出
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		cout << alist[i] << " ";
	}
	cout << endl;
}


class SortArray :public MyArray      //复制class
{
public:
	SortArray(int len):MyArray(len){}
	void sort();
};

void SortArray::sort()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - i - 1; j++)     //冒泡函数是从小到大进行排序
		{
			if (alist[j] > alist[j + 1])
			{
				int tmp;
				tmp = alist[j + 1];
				alist[j + 1] = alist[j];
				alist[j] = tmp;
			}
		}
	}
	
}

int main()
{
	SortArray s(10);
	s.Input();
	s.sort();
	s.Output();
	return 0;

}