# define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��򵥵Ķ����ʼ��
/*class Time
{
public:
	int hour;
	int minute;
	int sec;
};

Time t1 = { 14,56,30 }; //�����ڽṹ��Ķ����ʼ��
*/ 
//�����ԣ� 
//������ݳ�Ա��˽�еĻ���������private��protected�����ݳ�Ա
//�Ͳ��������ַ�����ʼ��

//���ù��캯��ʵ�����ݳ�Ա�ĳ�ʼ��
//class Time
//{
//public:
//	Time()       //��Ϊ���캯����������������һ��
//		//����Ҫд��������
//		//��������ʱ���Զ�ִ�й��캯��
//	{
//		hour = 0;
//		minute = 0;
//		sec = 0;
//	}
//	void set_time();
//	void show_time();
//private:         //�������ݶ���
//	int hour;
//	int minute;
//	int sec;
//};

//��Ա�����Ķ���
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
//	t1.set_time();     //���ù��캯��֮���ٸ�ֵһ��
//	t1.show_time();
//	Time t2;
//	t2.show_time();
//	return 0;
//}

//�������Ĺ��캯����ʡȥ��set_time ����
//class Time
//{
//public:
//	Time()       //��Ϊ���캯����������������һ��
//		//����Ҫд��������
//		//��������ʱ���Զ�ִ�й��캯��
//	{
//		hour = 0;
//		minute = 0;
//		sec = 0;
//	}
//	void set_time();
//	void show_time();
//private:         //�������ݶ���
//	int hour;
//	int minute;
//	int sec;
//};

/*class Time
{
public:
	Time(int, int, int);      //�����������Ĺ��캯��
	void show_time();
private:         //�������ݶ���
	int hour;
	int minute;
	int sec;
};

//��Ա�����Ķ���
Time::Time(int h, int m, int s)
{
	//һһ��Ӧprivate���������ݶ���
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
	//�������Ĺ��캯��ʡȥ��set_time �ĺ���
	Time t1(12, 25, 30);    //��������t1����ָ��t1��ʱ����
	t1.show_time();
	Time t2(15, 20, 21);     //���ݶ���ֱ�Ӷ��壬û�г�ʼ��
	t2.show_time();
	return 0;
}*/

//������ʼ����
//���ַ������ں������ڶ����ݳ�Ա��ʼ���������ں����ײ�ʵ��
//�����˹��캯���Ķ���
/*class Time
{
public:
	Time(int h, int m, int s) :hour(h), minute(m), sec(s)
	{

	}//������ʼ����
	void show_time();
private:         //�������ݶ���
	int hour;
	int minute;
	int sec;
};

//��Ա�����Ķ���


void Time::show_time()
{
	cout << hour << ":"
		<< minute << ":"
		<< sec << endl;
}

int main()
{
	//�������Ĺ��캯��ʡȥ��set_time �ĺ���
	Time t1(12, 25, 30);    //��������t1����ָ��t1��ʱ����
	t1.show_time();
	Time t2(15, 20, 21);     //���ݶ���ֱ�Ӷ��壬û�г�ʼ��
	t2.show_time();
	return 0;
}*/

//class Box
//{
//public:
//	//��򵥵Ĺ��캯��
//	Box()
//	{
//		len = 10;
//		width = 10;
//		height = 10;
//	}
//	//�������캯��
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
//	//������Box(int l)/Box(int l, int w)
//
//private:
//	int len;
//	int width;
//	int height;
//};
//
//int main()
//{
//	Box box1;      //û�иò�����ϵͳ���õ�һ�����캯��
//	cout << "The volume of box1 is "
//		<< box1.volume()
//		<< endl;
//	Box box2(15, 25, 30);
//	cout << "The volume of box2 is "
//		<< box2.volume()
//		<< endl;
//	return 0;
//}


//ʹ��Ĭ�ϲ����Ĺ��캯��
//����û���ָ��ʵ��ֵ������ϵͳ��ʹ�β�ȡĬ��ֵ
//һ�㲻Ӧͬʱʹ�ù��캯�������غ���Ĭ�ϲ����Ĺ��캯��
//��Ϊ��������
class Time
{
public:
	Time(int h = 12, int m = 13, int s = 14);      //������Ĭ�ϲ����Ĺ��캯��
	void show_time();
private:         //�������ݶ���
	int hour;
	int minute;
	int sec;
};

//��Ա�����Ķ���
Time::Time(int h, int m, int s)
{
	//һһ��Ӧprivate���������ݶ���
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
	Time t1(14);    //��������t1����ָ��t1��ʱ����
	t1.show_time();
	Time t2(15, 20);     //���ݶ���ֱ�Ӷ��壬û�г�ʼ��
	t2.show_time();
	Time t3(15, 20, 21);
	t3.show_time();
	return 0;
}