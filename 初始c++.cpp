# define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////�������仰�����׻�ʹ�ã��Ȳ����о�
//int main()
//{
//	//�������������
//	cout << "This is a C++ program.";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int Max(int x, int y);//��Max��������
//	//����a\b\c����
//	int a, b, c;
//	//�������֣���a\b��ֵ
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

//��ʶ��
//#include<iostream>
//using namespace std;
//class Stud //�������
//{
//private: //˽�в���
//	int num;
//	int score;
//public: //���в���
//	void setdate() //���뺯��
//	{
//		cin >> num;
//		cin >> score;
//	}
//	void display() //�������
//	{
//		cout << "num = " << num << endl;
//		cout << "score = " << score<< endl;
//	}
//};
//
//Stud stud1, stud2;  //��Ķ���
//int main()
//{
//	stud1.setdate();
//	stud2.setdate();
//	stud1.display();
//	stud2.display();
//	return 0;
//}


//��������������Ļ�������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c1, c2;
//	int a;
//	float b;
//	//����c1\c2\a\b
//	cin >> c1 >> c2 >> a >> b;
//	//cout�������Ի���
//	cout << "c1 = " << c1<<endl
//		<< "c2 = " << c2<<endl
//		<< "a = " << a<<endl
//		<< "b = " << b<<endl;
//
//	return 0;
//}

//�ڱ�׼���������������ʹ�ÿ��Ʒ�


//�߼��������߼�����
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

//���ú���
//�Ƚ��������Ĵ�С max
//#include<iostream>
//using namespace std;
////inline����max ���������ú���
//inline int max(int, int, int);
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int m = max(a, b, c);
//	//�����ĵ���
//	cout << "max = " << m << endl;
//	return 0;
//}
//inline int max(int x, int y, int z)
//{
//	if (x < y) x = y;
//	if (x < z)x = z;
//	return x;
//}

//���������к�������������
//һ��С��ģ�ĺ�����������
//���ջ������ϵͳ�����ж�

//����������
/*
#include<iostream>
using namespace std;

int main()
{
//�������������������к�������Ϊmax
//����Ǻ��������صľ���
//����������������ͬ�ĺ���,���ǲ����ĸ��������ͺ�˳��������һ����ͬ
	int max(int , int , int );
	float max(float, float, float);
	long max(long, long, long);
//���ֲ�ͬ���͵����ݱ����Ķ���
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

//����ģ��
//#include<iostream>
//using namespace std;
//template<typename T>
//����������+����ģ��
//�����ߺ����Ŀɶ���
//���ɾ��ǽ���ͬ�ı�ΪT
//���ǲ����ĸ�����Ҫһ��
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



//��Ĭ�ϲ����ĺ���
//��������ʱ��Ĭ��ֵ������С�����˳����ж���


//��5�� �������鴦����������
//c++�����ַ����ķ��������ַ��������ַ�������
//�ַ��������Ķ��������
//�ַ�������������
//�ַ�������
//�ַ����������

//����3���ַ�����Ҫ����ĸ����С����˳�����

//#include<iostream>
//using namespace std;
//#include<string>     //����stringͷ�ļ�
//int main()
//{
//	string string1,string2,string3,tmp;      //�����ַ�������
//	cout << "please input three strings: " ;      
//	cin >> string1 >> string2 >> string3;    //���ַ���������ֵ
//
//    //�ַ����Ƚ�ֱ���ù�ϵ����� == > >= < <= !=
//	//����ֵ�����ݽ��бȽ�һ������
//	if (string2 > string3)      
//	{
//		tmp = string2;
//		string2 = string3;  //����strcpy������,�����ַ����������Ȳ�������
//		string3 = tmp;
//	}
//	
//	//��ʱ�� δ֪��С����
//	//���
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
//	//��ʱ��ֻʣ��һ�������string1 > string3
//	else 
//	{
//		cout << string2 << " "
//			<< string3 << " "
//			<< string1 << endl;
//	}
//
//}

//n��ѧ������ϢΪ������ѧ��
//int_data ��������n��ѧ����������ѧ��
//search��������Ҫ�ҵ�ѧ���Ƿ��ڱ���

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


//��6�� ����ʹ��ָ��������
//ָ��ָ���ָ��
//const ָ��
//void ָ������
//���á�
//����������
//���õļ�ʹ��
//������Ϊ��������

//��7�� �û��Զ�����������
//��new��delete��������ж�̬����ͳ����洢�ռ�

