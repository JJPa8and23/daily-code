# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//���ڴ�����ռ�
	int *p = (int*)malloc(10*(sizeof(int)));
	if (p == NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ��
	//Ӧ���ͷſռ䣬����ϵͳ
	//��ֹ�ڴ�й¶
	free(p);
	//malloc��free�ɶ�ʹ��
	//pָ��Ŀռ��ͷ���
	//p��Ȼ����
	//����ָ�룬�����������
	p = NULL;
	return 0;
}