# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");      //wbָֻд��Ϊ�˻Ὠ��һ��test.txt���ļ�
	fwrite(&a, 4, 1, pf);      
	//д�������
	//Ԫ�صĴ�С����λָ�ֽ�
	//д��Ԫ�صĸ���
	//Ŀ���ļ���ַ
	fclose(pf);
	//�ر�ָ��
	pf = NULL;  //��Ϊ��ָ��
	return 0;
}


