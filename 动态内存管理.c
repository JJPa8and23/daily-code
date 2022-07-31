# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//int main()
//{
//	//向内存申请空间
//	int *p = (int*)malloc(10*(sizeof(int)));
//	// 或 int *p = (int*)malloc(40)
//	//40个字节
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用
//	//应该释放空间，还给系统
//	//防止内存泄露
//	free(p);
//	//malloc和free成对使用
//	//p指向的空间释放了
//	//p依然存在
//	//赋空指针，起到清除的作用
//	p = NULL;
//	return 0;
//}

//calloc

//realloc
//先写5个整形，再写10个空间
//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//最后返回新开辟的内存空间地址
//3. 得用一个新的变量来接受realloc函数的返回值