# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//向内存申请空间
	int *p = (int*)malloc(10*(sizeof(int)));
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