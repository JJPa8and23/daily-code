# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//malloc������
/*int main()
{

//���ڴ�����ռ�

//	int *p = (int*)malloc(10*(sizeof(int)));
//  ��

	int* p = (int*)malloc(40);

// 40���ֽ�
// 10������
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
			printf("%d ", *(p + i));
		}
		printf("\n");
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
*/

//calloc
//calloc(Ԫ�صĸ�����Ԫ�صĴ�С)
//�ص㣺��ʼ����0
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
// free(p);
// p=NULL;
//	return 0;
//}

//realloc

/*int main()
{


	//��д5�����Σ���д10���ռ�
	int* ptr = malloc(20);

	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	

	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(ptr + i) = i;
			printf("%d ", *(ptr + i));
		}
	}

	printf("\n");

	int* tmp = realloc(ptr,40);
	if (tmp == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(tmp + i) = i;
			printf("%d ", *(tmp + i));
		}
	}
	free(tmp);
	tmp = NULL;


	//1. ���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2. ���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3. ����һ���µı���������realloc�����ķ���ֵ

	return 0;
}
*/

//int main()
//{
//	int ret = sizeof(int);
//	int a = 10;
//	int* p = &a;
//	int ret2 = sizeof(p);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}


