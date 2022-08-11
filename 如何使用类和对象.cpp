# define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//最简单的对象初始化
/*class Time
{
public:
	int hour;
	int minute;
	int sec;
};

Time t1 = { 14,56,30 }; //类似于结构体的对象初始化
*/ 
//局限性： 
//如果数据成员是私有的或者类中有private或protected的数据成员
//就不能用这种方法初始化

//利用构造函数实现数据成员的初始化
//class Time
//{
//public:
//	Time()       //此为构造函数，函数名和类名一样
//		//不需要写函数类型
//		//建立对象时会自动执行构造函数
//	{
//		hour = 0;
//		minute = 0;
//		sec = 0;
//	}
//	void set_time();
//	void show_time();
//private:         //声明数据对象
//	int hour;
//	int minute;
//	int sec;
//};

//成员函数的定义
//void Time::set_time()
//{
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//}
//
//void Time::show_time()
//{
//	cout << hour << ":"
//		<< minute << ":"
//		<< sec << endl;
//}
//
//int main()
//{
//	Time t1;
//	t1.set_time();     //调用构造函数之后，再赋值一次
//	t1.show_time();
//	Time t2;
//	t2.show_time();
//	return 0;
//}

//带参数的构造函数，省去了set_time 函数
//class Time
//{
//public:
//	Time()       //此为构造函数，函数名和类名一样
//		//不需要写函数类型
//		//建立对象时会自动执行构造函数
//	{
//		hour = 0;
//		minute = 0;
//		sec = 0;
//	}
//	void set_time();
//	void show_time();
//private:         //声明数据对象
//	int hour;
//	int minute;
//	int sec;
//};

/*class Time
{
public:
	Time(int, int, int);      //声明带参数的构造函数
	void show_time();
private:         //声明数据对象
	int hour;
	int minute;
	int sec;
};

//成员函数的定义
Time::Time(int h, int m, int s)
{
	//一一对应private声明的数据对象
	hour = h;
	minute = m;
	sec = s;
}

void Time::show_time()
{
	cout << hour << ":"
		<< minute << ":"
		<< sec << endl;
}

int main()
{
	//带参数的构造函数省去了set_time 的函数
	Time t1(12, 25, 30);    //建立对象t1，并指定t1的时分秒
	t1.show_time();
	Time t2(15, 20, 21);     //数据对象直接定义，没有初始化
	t2.show_time();
	return 0;
}*/

//参数初始化表
//这种方法不在函数体内对数据成员初始化，而是在函数首部实现
//减少了构造函数的定义
/*class Time
{
public:
	Time(int h, int m, int s) :hour(h), minute(m), sec(s)
	{

	}//函数初始化表
	void show_time();
private:         //声明数据对象
	int hour;
	int minute;
	int sec;
};

//成员函数的定义


void Time::show_time()
{
	cout << hour << ":"
		<< minute << ":"
		<< sec << endl;
}

int main()
{
	//带参数的构造函数省去了set_time 的函数
	Time t1(12, 25, 30);    //建立对象t1，并指定t1的时分秒
	t1.show_time();
	Time t2(15, 20, 21);     //数据对象直接定义，没有初始化
	t2.show_time();
	return 0;
}*/

//class Box
//{
//public:
//	//最简单的构造函数
//	Box()
//	{
//		len = 10;
//		width = 10;
//		height = 10;
//	}
//	//参数表构造函数
//	Box(int l, int w, int h)
//		:len(l), width(w), height(h)
//	{
//
//	}
//	int volume()
//	{
//		return len * width * height;
//	}
//
//	//还可以Box(int l)/Box(int l, int w)
//
//private:
//	int len;
//	int width;
//	int height;
//};
//
//int main()
//{
//	Box box1;      //没有该参数，系统调用第一个构造函数
//	cout << "The volume of box1 is "
//		<< box1.volume()
//		<< endl;
//	Box box2(15, 25, 30);
//	cout << "The volume of box2 is "
//		<< box2.volume()
//		<< endl;
//	return 0;
//}


//使用默认参数的构造函数
//如果用户不指定实参值，编译系统就使形参取默认值
//一般不应同时使用构造函数的重载和有默认参数的构造函数
//因为会有歧义
class Time
{
public:
	Time(int h = 12, int m = 13, int s = 14);      //声明带默认参数的构造函数
	void show_time();
private:         //声明数据对象
	int hour;
	int minute;
	int sec;
};

//成员函数的定义
Time::Time(int h, int m, int s)
{
	//一一对应private声明的数据对象
	hour = h;
	minute = m;
	sec = s;
}

void Time::show_time()
{
	cout << hour << ":"
		<< minute << ":"
		<< sec << endl;
}

int main()
{
	Time t0;
	t0.show_time();
	Time t1(14);    //建立对象t1，并指定t1的时分秒
	t1.show_time();
	Time t2(15, 20);     //数据对象直接定义，没有初始化
	t2.show_time();
	Time t3(15, 20, 21);
	t3.show_time();
	return 0;
}