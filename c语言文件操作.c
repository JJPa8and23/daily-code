# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");      //wbָֻд��Ϊ�˻Ὠ��һ��test.txt���ļ�
//	fwrite(&a, 4, 1, pf);      
//	//д�������
//	//Ԫ�صĴ�С����λָ�ֽ�
//	//д��Ԫ�صĸ���
//	//Ŀ���ļ���ַ
//	fclose(pf);
//	//�ر�ָ��
//	pf = NULL;  //��Ϊ��ָ��
//	return 0;
//}

//fputc ��fgetc��ʹ��
//���������һ���ַ�
//int main()
//{
//	FILE* pf1 = fopen("test.txt", "w");      //�򿪻򴴽�һ���ļ���ֻд
//	if (pf1 == NULL)
//	{
//		printf("%s\n", strerror(errno));      //��pf����ʧ�ܣ���ӡ�������
//		return 0;
//	}  
//	//�ļ���ʹ��'w'
//	fputc('b', pf1);       //��a�����ݴ�ӡ��pf����,pfָ��test.txt
//	fputc('i', pf1);
//	fputc('t', pf1); 
//	fclose(pf1);
//	pf1 = NULL;
//
//	//�ļ���ʹ��'r'
//	FILE* pf2 = fopen("test.txt", "r");
//	printf("%c ", fgetc(pf2));
//	printf("%c ", fgetc(pf2));
//	printf("%c ", fgetc(pf2));
//
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}


//fputs �� fgets ��ʹ��
//���������һ���ַ���: abcdef
//ע��㣺��û�л���
//int main()
//{
//	char arr1[] = "abcdefg";
//	//��һ���ļ���ֻд
//	FILE* pf1 = fopen("test.txt", "w");
//	if (pf1 == NULL)
//	{
//		return 0;
//	}
//	fputs(arr1, pf1);     //��arr�����������test.txt��
//	fclose(pf1);
//	pf1 = NULL;
//
//	//��һ���ļ���ֻ��
//	FILE* pf2 = fopen("test.txt", "r");
//	if (pf2 == NULL)
//	{
//		return 0;
//	}
//	char arr2[1024] = { 0 };
//	fgets(arr2, 1024, pf2);
//	printf("%s", arr2);      //��pf2��ָ���test.txt���ļ�������д����Ļ��
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

//gets �� puts��ʹ��
//�������̺���Ļ
//�Ӽ��̶�ȡһ���ı���Ϣ
//int main()
//{
//	char buf[1024];
//	gets(&buf);
//	puts(buf);
//	return 0;
//}


//fscranf �� fprint ��ʹ��
//��ʽ��������������
//���뵽��Ļ�� or �ļ�����
//struct Student
//{
//	int a;
//	float b;
//	char c[];
//};
//
//int main()
//{
//
//
//	//struct Student s = { 100,3.14f,"abcdef" };  //����ṹ��s
//	//��s �����������test.txt��
//	//FILE* pf1 = fopen("test.txt", "w");  // ��һ������д����ļ�
//	//if (pf1 == NULL)
//	//{
//	//	return 0;
//	//}
//
//	////��ʼд��
//	//fprintf(pf1, "%d %f %s", s.a, s.b, s.c);      //���ṹ��s������ͨ��pf1д�뵽test���ļ�֮��
//
//	//fclose(pf1);
//	//pf1 = NULL;
//
//	////��test.txt���������뵽��Ļ��
//	//FILE* pf2 = fopen("test.txt", "r");
//	//struct Student s2 = { 0 };
//	//if (pf2 == NULL)
//	//{
//	//	return 0;
//	//}
//	//fscanf(pf2, "%d%f%s", &(s2.a), &(s2.b), &(s2.c));  //��test�ļ�������ͨ��ָ��pf2 ���뵽�ṹ��s2��
//	//printf("%d %.2f %s", s2.a, s2.b, s2.c);
//	//fclose(pf2);
//	//pf2 = NULL;
//
//
//	//ֱ�����뵽��Ļ��
//	//�������Ļ��
//	struct Student s = { 0 };
//	fscanf(stdin, "%d%f%s", &(s.a), &(s.b), &(s.c)); //ͨ�����̶Խṹ��s���и�ֵ�������뵽��Ļ��
//	fprintf(stdout, "%d %.2f %s", s.a, s.b, s.c);    //������ṹ��s������
//
//	return 0;
//}

//�Ա�һ�麯��
//scanf/fscanf/sscanf
//printf/fprintf/sprintf


//sscanf �� sprintf ���ַ���������ͻ�ȡ
//struct Student
//{
//	int a;
//	float b;
//	char c[];
//};
//
//int main()
//{
//	struct Student s = { 1024,3.14,"abcdef" };  //����ṹ��s
//	char* buf = { 0 };
//	sscanf(buf, "%d%f%s", &(s.a), &(s.b), &(s.c));   //���ṹ��s������д�뵽buf�У���ת��Ϊs��ʽ
//	printf("%s", buf);
//	sprintf(buf, "%d %f %s", s.a, s.b, s.c);
//	return 0;
//}



//��������ʽд�롢д���ļ�
//fwrite and fwrite
//struct Student
//{
//	char sex;
//	int num;
//	char name[10];
//};
//int main()
//{
//	struct Student s = { 'm',20210732,"����" };      //����ṹ��
//	FILE* pf = fopen("test.txt", "wb");      //�����ļ�
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д���ļ�
//	fwrite(&s, sizeof(struct Student), 1, pf);     
//	//�ѵ�ַs�����ݣ���1��Student�ṹ���Сд��ָ��pfָ����ļ���
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	//�ٰ��ļ�������д����
//	struct Student tmp = { 0 };
//	FILE* pf2 = fopen("test.txt", "rb");
//	if (pf2 == NULL)
//		return 0;
//	//��ȡ�ļ�
//	fread(&tmp, sizeof(struct Student), 1, pf2);
//	//��pf2��ַָ����ļ�,��1���ṹ���С�Ŀռ䣬д�뵽�ṹ��tmp֮��
//	printf("%c %d %s\n", tmp.sex, tmp.num, tmp.name);
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

//���ݿ�
//MySQL
//c���Բ���MySQL���ݿ�

//�ļ���˳���д


//�ļ��������д
//fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//a b c d e f��ȡe
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//�ı�ָ������λ��
	fseek(pf, 4, SEEK_SET);
	//��ӡ
	printf("%c\n", fgetc(pf));

	//ftell
	//�����ļ�ָ�������ʼλ�õ�ƫ����
	int i = ftell(pf);
	printf("%d\n", i);

	fclose(pf);
	pf = NULL;

	

	 
	return 0;
}



//ftell
//�����ļ�ָ�������ʼλ�õ�ƫ����