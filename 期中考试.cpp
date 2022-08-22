# define _CRT_SECURE_NO_WARNINGS 1

//class Max
//{
//public:
//	Max(int x, int y) { a = x; b = y; }
//	Max(int x, int y, int z) { a = x; b = y; c = z; }
//	Max(int x, int y, int z, int i) { a = x; b = y; c = z; d = i; }
//	void max(int a, int b);
//	void max(int a, int b, int c);
//	void max(int a, int b, int c, int d);
//	/*int max(int, int, int);
//	int max(int, int, int, int);*/
//private:
//	int a, b, c, d;
//};
//
//void Max::max(int x, int y)
//{
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = x;
//	}
//	cout << "the result is" << x << " " << y << endl;
//}
//
//void max(int x, int y)
//{
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = x;
//	}
//	cout << "the result is " << x << " " << y;
//	
//}

//#include<iostream>
//using namespace std;
//extern int n = 0;
//int main()
//{
//	//声明三个max函数
//	void max(int x, int y);
//	void max(int x, int y, int z);
//	void max(int x, int y, int z, int i);
//	int a, b, c, d;
//	cout << "please input the amount of the number you want to compare:";
//	cin >> n;
//	if (n == 2)
//	{
//		cout << "please input the number:";
//		cin >> a >> b;
//		max(a, b);
//	}
//	else if (n == 3)
//	{
//		cout << "please input the number:";
//		cin >> a >> b>>c;
//		max(a, b,c);
//	}
//	else if (n == 4)
//	{
//		cout << "please input the number:";
//		cin >> a >> b >> c>>d;
//		max(a, b, c, d);
//	}
//	return 0;
//}
//
//void max(int x, int y)
//{
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//	cout << "the result is:" << x << " " << y << endl;
//}
//
//void max(int x, int y,int z)
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (x < y)
//		{
//			tmp = x;
//			x = y;
//			y = tmp;
//		}
//		//x>y 
//		if (y < z)
//		{
//			tmp = z;
//			z = y;
//			y = tmp;
//		}
//		
//	}
//	cout << "the result is:" << x << " " << y <<" "<<z<< endl;
//}
//
//
//void max(int x, int y,int z,int i)
//{
//	int tmp = 0;
//	int k = 0;
//	for (k = 0; k < n; k++)
//	{
//		if (x < y)
//		{
//			tmp = x;
//			x = y;
//			y = tmp;
//		}
//		//x>y 
//		if (y < z)
//		{
//			tmp = z;
//			z = y;
//			y = tmp;
//		}
//		if (z < i)
//		{
//			tmp = i;
//			i = z;
//			z = tmp;
//		}
//	}
//
//	cout << "the result is:" << x << " " << y << " " << z << " "<<i<<endl;
//}


//#include<iostream>
//using namespace std;
//class V
//{
//public:
//	V(int l, int w, int h) { lon = l; width = w; height = h; }
//	int volume();
//	void display();
//private:
//	int lon;
//	int width;
//	int height;
//	
//};
//
//int V::volume()
//{
//	return lon * width * height;
//}
//
//void V::display()
//{
//	cout << "the volume is " << volume() << endl;
//}
//int main()
//{
//	class V v1(12, 20, 25);
//	class V v2(10, 14, 20);
//	v1.volume();
//	v1.display();
//	v1.volume();
//	v2.display();
//	return 0;
//
//
//}


//建立存储学生健康的类
//输出学生的年龄，身高和体重
//存储学生一天吃多少餐，睡眠时长，和一个星期的运动频率
//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	Student(int a, int h, int w) { age = a; hight = h; weight = w; }
//	void eatting();
//	void sporting();
//	void sleeping();
//	void display();
//
//private:
//	int age;
//	int hight;
//	int weight;
//	int eat = 0;
//	int sport = 0;
//	int sleep = 0;
//};
//
//void Student::eatting()
//{
//	cout << "please input how many meal do you have a day: "<<endl;
//	cin >> eat;
//}
//
//void Student::sporting()
//{
//	cout << "please input hou many time do you sport a weak: "<<endl;
//	cin >> sport;
//}
//
//void Student::sleeping()
//{
//	cout << "please input how many hour do you sleep ; "<<endl;
//	cin >> sleep;
//}
//
//void Student::display()
//{
//	cout << "the age is " << age << endl
//		<< "the hight is " << hight << endl
//		<< "the weight is " << weight << endl;
//		
//		
//}
//int main()
//{
//	Student s(19, 180, 65);
//	s.display();
//	s.eatting();
//	s.sleeping();
//	s.sporting();
//	return 0;
//}


//编写一个程序，设计一个三角形类Triangle，三角形类有三条边x、y、z和一个求面积函数area()。友元函数compute()用来计算两个三角形面积之和。编写程序进行测试。
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//class Triangle
//{
//public:
//	Triangle(float x, float y, float z);
//	friend float compute(Triangle& t1, Triangle& t2);
//private:
//	float a, b, c;
//	float area;
//};
//Triangle::Triangle(float x, float y, float z)
//{
//	if (x + y > z && x + z > y && y + z > x)
//	{
//		a = x; b = y; c = z;
//		float s;
//		s = (a + b + c) / 2;
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//	}
//	else
//	{
//		cout << "不是合法的三角形!" << endl;
//		exit(1);
//	}
//}
//
//float compute(Triangle& t1, Triangle& t2)
//{
//	return (t1.area + t2.area);
//}
//int main()
//{
//	float x, y, z;
//	cout << "输入三角形1的三边长:";
//	cin >> x >> y >> z;
//	Triangle t1(x, y, z);
//	cout << "输入三角形2的三边长:";
//	cin >> x >> y >> z;
//	Triangle t2(x, y, z);
//	cout << "两三角形面积之和为:" << compute(t1, t2) << endl;
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






//先将MyArray类中的成员函数在类外实现，然后再定义一个类SortArray继承自类MyArray，在该类中定义函数sort()实现冒泡排序功能。
#include <iostream>
#include <string>
using namespace std;

class MyArray
{
public:
	MyArray(int len);
	MyArray(const MyArray& ma);      //创建ma 的结构体对象，并解引用它
	~MyArray();      //析构MyArray构造函数
	void Input();
	void Output();
protected:
	int* alist;      //整形指针
	int length;
};
MyArray::MyArray(int len)
{
	length = len;
	alist = new int[length];      //整形指针指向整型数组的首元素
}
MyArray::MyArray(const MyArray& ma)
{
	int i = 0;
	length = ma.length;
	alist = new int[length];
	for (i = 0; i < length; i++)
		alist[i] = ma.alist[i];     //复制了ma
}
MyArray::~MyArray()
{
	delete[]alist;      
}
void MyArray::Input()
{
	int i;
	for (i = 0; i < length; i++)
		cin >> alist[i];
}
void MyArray::Output()
{
	int i;
	for (i = 0; i < length; i++)
		cout << alist[i] << " ";
	cout << endl;
}

class SortArray :public MyArray     //不懂
{
public:
	SortArray(int len) :MyArray(len) {}
	void Sort();
};
void SortArray::Sort()
{
	int i, j;
	int temp;
	for (i = 0; i < length - 1; i++)
		for (j = 0; j < length - i - 1; j++)
			if (alist[j] > alist[j + 1])
			{
				temp = alist[j];
				alist[j] = alist[j + 1];
				alist[j + 1] = temp;
			}
}
int main()
{
	SortArray sa(10);      //即为sa
	cout << "请输入10个元素:" << endl;
	sa.Input();     //输入
	sa.Sort();      //排序
	sa.Output();    //输出
	return 0;
}
