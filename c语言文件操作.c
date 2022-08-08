# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");      //wb指只写，为此会建立一个test.txt的文件
	fwrite(&a, 4, 1, pf);      
	//写入的数据
	//元素的大小，单位指字节
	//写入元素的个数
	//目标文件地址
	fclose(pf);
	//关闭指针
	pf = NULL;  //变为空指针
	return 0;
}


