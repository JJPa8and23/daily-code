# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;

//通过函数来实现复数相加
//实部 和 虚部分别相加减

/*class Complex
{
public:
	Complex() { real = 0; imag = 0; }      //定义构造函数
	Complex(double r, double i) { real = r; imag = i; }      //重载构造函数
	//数据定义时，带参数和不带参数两种形式
	Complex complex_add(Complex &c2);      //声明复数相加函数
	//调用c1成员函数的同时，可以使用c2对象的数据
	void display();     //声明输出函数
private:
	double real;      //实部
	double imag;      //虚部
};


Complex Complex::complex_add(Complex &c2)      //定义复数相加函数
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}
void Complex::display()      //定义输出函数
{
	cout << "("<<real<<","<<imag<<"i)" << endl;
}

int main()
{
	Complex c1(3, 4);  
	Complex c2(5, -10);
	Complex c3;      //定义3个复数对象
	c3 = c1.complex_add(c2);      //调用复数相加函数
	//实参是c2的作用是，可以同时使用c1和c2的数据
	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	cout << "c1 + c2 = "; c3.display();      //输出c1和c2的值
	return 0;
}*/


//对运算符重载
//+即可实现实部和虚部的相加减
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }      //定义构造函数
	Complex(double r, double i) { real = r; imag = i; }      //重载构造函数
	//数据定义时，带参数和不带参数两种形式
	 
	
	//Complex complex_add(Complex &c2);      //声明复数相加函数
	 
	Complex operator+(Complex& c2);       //声明重载运算符+的函数
	
	//调用c1成员函数的同时，可以使用c2对象的数据
	void display();     //声明输出函数

private:
	double real;      //实部
	double imag;      //虚部
};


//Complex Complex::complex_add(Complex &c2)      //定义复数相加函数
Complex Complex::operator + (Complex& c2)     //定义重载运算符  this指针的运用
{
	/*Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;*/

	return Complex(real + c2.real, imag + c2.imag);
}
void Complex::display()      //定义输出函数
{
	cout << "("<<real<<","<<imag<<"i)" << endl;
}

int main()
{
	Complex c1(3, 4);
	Complex c2(5, -10);
	Complex c3;      //定义3个复数对象
	c3 = c1 + c2;
	// = c1.operator+(c2);      //调用重载运算符
	//实参是c2的作用是，可以同时使用c1和c2的数据
	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	cout << "c1 + c2 = "; c3.display();      //输出c1和c2的值
	return 0;
}

//#include<iostream.h>
//#include<string.h>
//#include<stdlib.h>
////#include<iostream>
////using namespace std;
//class String
//{
//public:
//	String() { p = NULL; }      //默认构造函数
//	String(string* str) { p = str; }      //声明带参数的构造函数
//	friend bool operator > (String &s1, String &s2);      //声明重载>函数
//	friend bool operator < (String &s1, String &s2);
//	friend bool operator = (String &s1, String &s2);
//
//	void display();
//	void compare(String& s1, String& s2);
//private:
//	string* p;
//};
//
//
//bool operator > (string &s1, string &s2)
//{
//	if (s1 > s2)
//		return true;
//	else
//		return false;
//}
//
//bool operator < (string &s1, string &s2)
//{
//	if (s1 < s2)
//		return true;
//	else
//		return false;
//}
//
//bool operator = (string &s1, string &s2)
//{
//	if (s1 = s2)
//		return true;
//	else
//		return false;
//}
//
//
//void String::display()
//{
//	cout << p;
//}
//
//void String::compare(String &s1, String &s2)
//{
//	if (operator>(s1, s2) == 1)
//	{
//		s1.display();
//		cout << ">";
//		s2.display();
//	}
//	else if (operator<(s1, s2) == 1)
//	{
//		s1.display();
//		cout << "<";
//		s2.display();
//	}
//	else if (operator=(s1, s2) == 1)
//	{
//		s1.display();
//		cout << "=";
//		s2.display();
//	}
//}

//bool operator< (&String s1, &String s2)
//{
//
//}
//
//bool operator= (&String s1, &String s2)
//{
//
//}

