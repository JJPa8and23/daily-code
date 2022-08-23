# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//void swap(int &a, int &b)      //��������
//{
//	//ʵ��x��y�Ľ���
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
//	cout << "�Ӵ�С��˳���ǣ�" << a << " " << b << endl;
//}
//
//void sort(int a, int b, int c)
//{
//	if (a < b)
//		swap(a, b);
//	//��ʱ��a>b 
//	//a��c�Ĵ�С��b��c�Ĵ�Сδ֪
//	if (c > a && c > b)
//		swap(a, c);      //����a c����
//	if (c > b && c < a)
//		swap(b, c);      //����b c����
//	cout << "�Ӵ�С��˳���ǣ�" << a << " " << b << " "<<c<<endl;
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
//	cout << "��С�����˳���ǣ�" << a << " " << b << " " << c << " " << d << " " << endl;
//}
//int main()
//{
//	int a, b, c, d;
//	//������������
//	cout << "�����������2������ ";
//	cin >> a >> b;
//	sort(a, b);
//	//������������
//	cout << "�����������3������ ";
//	cin >> a >> b>>c;
//	sort(a, b,c);
//	//4����������
//	cout << "�����������4������ ";
//	cin >> a >> b >> c >> d;
//	sort(a, b, c, d);
//}


//��дһ���������һ����������Triangle������������������x��y��z��һ�����������area()��
//��Ԫ����compute()���������������������֮�͡���д������в��ԡ�

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
//	area = sqrt(s * (s - x) * (s - y) * (s - z));      //�㷨
//	return area;
//
//}
//
//void compute(Triangle& t1, Triangle& t2)
//{
//	cout << "�������������֮��Ϊ" << t1.area() + t2.area() << endl;
//}
//
//int main()
//{
//	int a, b, c;
//	cout << "������������1����֮����";
//	cin >> a >> b >> c;
//	Triangle t1(a, b, c);
//	cout << "������������2����֮����";
//	cin >> a >> b >> c;
//	Triangle t2(a, b, c);
//	compute(t1, t2);
//	return 0;
//}




//��һ������MyArray�������п��Դ��һ��������
//class MyArray
//{
//public:
//	MyArray(int len);//���캯��
//	MyArray(const MyArray& ma);//�������캯��
//	~MyArray();//��������
//	void Input();//����
//	void Output();//���
//protected:
//	int* alist;
//	int length;
//};


#include<iostream>
using namespace std;
//���Ƚ�MyArray���еĳ�Ա����������ʵ��
//Ȼ���ٶ���һ����SortArray�̳�����MyArray���ڸ����ж��庯��sort()ʵ��ð�������ܡ�
class MyArray
{
public:
	MyArray(int len);//���캯��
	MyArray(const MyArray& ma);//�������캯��
	~MyArray();//��������
	void Input();//����
	void Output();//���
protected:
	int* alist;
	int length;
};

MyArray::MyArray(int len)      //���幹�캯��
{
	length = len;
	alist = new int[length];
}

MyArray::MyArray(const MyArray& ma)
{
	//����ma����
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
	delete[]alist;      //���ָ��
	alist = NULL;
}

void MyArray::Input()//����
{
	int i = 0;
	cout << "������"<<length<<"��Ԫ�أ�";
	for(i = 0; i < length; i++)
	{
		cin >> alist[i];
	}
	
}
void MyArray::Output()//���
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		cout << alist[i] << " ";
	}
	cout << endl;
}


class SortArray :public MyArray      //����class
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
		for (j = 0; j < length - i - 1; j++)     //ð�ݺ����Ǵ�С�����������
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