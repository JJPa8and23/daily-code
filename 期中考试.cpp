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

#include<iostream>
using namespace std;
extern int n = 0;
int main()
{
	void max(int x, int y);
	void max(int x, int y, int z);
	void max(int x, int y, int z, int i);
	int a, b, c, d;
	cout << "please input the amount of the number you want to compare:";
	cin >> n;
	if (n == 2)
	{
		cout << "please input the number:";
		cin >> a >> b;
		max(a, b);
	}
	else if (n == 3)
	{
		cout << "please input the number:";
		cin >> a >> b>>c;
		max(a, b,c);
	}
	else if (n == 4)
	{
		cout << "please input the number:";
		cin >> a >> b >> c>>d;
		max(a, b, c, d);
	}
	return 0;
}

void max(int x, int y)
{
	if (x < y)
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	cout << "the result is:" << x << " " << y << endl;
}

void max(int x, int y,int z)
{
	int tmp = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (x < y)
		{
			tmp = x;
			x = y;
			y = tmp;
		}
		//x>y 
		if (y < z)
		{
			tmp = z;
			z = y;
			y = tmp;
		}
		
	}
	cout << "the result is:" << x << " " << y <<" "<<z<< endl;
}


void max(int x, int y,int z,int i)
{
	int tmp = 0;
	int k = 0;
	for (k = 0; k < n; k++)
	{
		if (x < y)
		{
			tmp = x;
			x = y;
			y = tmp;
		}
		//x>y 
		if (y < z)
		{
			tmp = z;
			z = y;
			y = tmp;
		}
		if (z < i)
		{
			tmp = i;
			i = z;
			z = tmp;
		}
	}
	// z x y
	//if (y < z)
	//{
	//	tmp = z;
	//	y = z;
	//	z = tmp;
	//}
	//if (y < i)
	//{
	//	tmp = i;
	//	i = y;
	//	y = tmp;
	//}
	//if (z < i)
	//{
	//	tmp = i;
	//	i = z;
	//	z = tmp;
	//}
	cout << "the result is:" << x << " " << y << " " << z << " "<<i<<endl;
}