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
//	int Max(int x, int y);//��Max��������
//	int a, b, c;
//	cin >> a >> b;
//	c = Max(a, b);//����Max����
//	cout << "max=" << c << endl;
//	return 0;
//
//}
//
//int Max(int x, int y)//����Max����
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


#include<iostream>
using namespace std;
class Stud //�������
{
private: //˽�в���
	int num;
	int score;
public: //���в���
	void setdate() //���뺯��
	{
		cin >> num;
		cin >> score;
	}
	void display() //�������
	{
		cout << "num = " << num << endl;
		cout << "score = " << score<< endl;
	}
};

Stud stud1, stud2;  //��Ķ���
int main()
{
	stud1.setdate();
	stud2.setdate();
	stud1.display();
	stud2.display();
	return 0;
}