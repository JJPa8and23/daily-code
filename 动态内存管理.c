# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//malloc的运用
/*int main()
{

//向内存申请空间

//	int *p = (int*)malloc(10*(sizeof(int)));
//  或

	int* p = (int*)malloc(40);

// 40个字节
// 10个整形
	if (p == NULL)
	{
		//打印错误原因
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
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

//当动态申请的空间不再使用
//应该释放空间，还给系统
//防止内存泄露


   free(p);
 //malloc和free成对使用
 //p指向的空间释放了
 //p依然存在
 //赋空指针，起到清除的作用


    p = NULL;
	return 0;
}
*/

//calloc
//calloc(元素的个数，元素的大小)
//特点：初始化成0
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


	//先写5个整形，再写10个空间
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


	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
	//最后返回新开辟的内存空间地址
	//3. 得用一个新的变量来接受realloc函数的返回值

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


