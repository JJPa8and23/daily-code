# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;

//ͨ��������ʵ�ָ������
//ʵ�� �� �鲿�ֱ���Ӽ�

/*class Complex
{
public:
	Complex() { real = 0; imag = 0; }      //���幹�캯��
	Complex(double r, double i) { real = r; imag = i; }      //���ع��캯��
	//���ݶ���ʱ���������Ͳ�������������ʽ
	Complex complex_add(Complex &c2);      //����������Ӻ���
	//����c1��Ա������ͬʱ������ʹ��c2���������
	void display();     //�����������
private:
	double real;      //ʵ��
	double imag;      //�鲿
};


Complex Complex::complex_add(Complex &c2)      //���帴����Ӻ���
{
	Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}
void Complex::display()      //�����������
{
	cout << "("<<real<<","<<imag<<"i)" << endl;
}

int main()
{
	Complex c1(3, 4);  
	Complex c2(5, -10);
	Complex c3;      //����3����������
	c3 = c1.complex_add(c2);      //���ø�����Ӻ���
	//ʵ����c2�������ǣ�����ͬʱʹ��c1��c2������
	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	cout << "c1 + c2 = "; c3.display();      //���c1��c2��ֵ
	return 0;
}*/


//�����������
//+����ʵ��ʵ�����鲿����Ӽ�
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }      //���幹�캯��
	Complex(double r, double i) { real = r; imag = i; }      //���ع��캯��
	//���ݶ���ʱ���������Ͳ�������������ʽ
	 
	
	//Complex complex_add(Complex &c2);      //����������Ӻ���
	 
	Complex operator+(Complex& c2);       //�������������+�ĺ���
	
	//����c1��Ա������ͬʱ������ʹ��c2���������
	void display();     //�����������

private:
	double real;      //ʵ��
	double imag;      //�鲿
};


//Complex Complex::complex_add(Complex &c2)      //���帴����Ӻ���
Complex Complex::operator + (Complex& c2)     //�������������  thisָ�������
{
	/*Complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;*/

	return Complex(real + c2.real, imag + c2.imag);
}
void Complex::display()      //�����������
{
	cout << "("<<real<<","<<imag<<"i)" << endl;
}

int main()
{
	Complex c1(3, 4);
	Complex c2(5, -10);
	Complex c3;      //����3����������
	c3 = c1 + c2;
	// = c1.operator+(c2);      //�������������
	//ʵ����c2�������ǣ�����ͬʱʹ��c1��c2������
	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	cout << "c1 + c2 = "; c3.display();      //���c1��c2��ֵ
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
//	String() { p = NULL; }      //Ĭ�Ϲ��캯��
//	String(string* str) { p = str; }      //�����������Ĺ��캯��
//	friend bool operator > (String &s1, String &s2);      //��������>����
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

