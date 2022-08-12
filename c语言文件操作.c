# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");      //wb指只写，为此会建立一个test.txt的文件
//	fwrite(&a, 4, 1, pf);      
//	//写入的数据
//	//元素的大小，单位指字节
//	//写入元素的个数
//	//目标文件地址
//	fclose(pf);
//	//关闭指针
//	pf = NULL;  //变为空指针
//	return 0;
//}

//fputc 和fgetc的使用
//输出和输入一个字符
//int main()
//{
//	FILE* pf1 = fopen("test.txt", "w");      //打开或创建一个文件，只写
//	if (pf1 == NULL)
//	{
//		printf("%s\n", strerror(errno));      //若pf开辟失败，打印错误出来
//		return 0;
//	}  
//	//文件打开使用'w'
//	fputc('b', pf1);       //把a的内容打印到pf里面,pf指向test.txt
//	fputc('i', pf1);
//	fputc('t', pf1); 
//	fclose(pf1);
//	pf1 = NULL;
//
//	//文件打开使用'r'
//	FILE* pf2 = fopen("test.txt", "r");
//	printf("%c ", fgetc(pf2));
//	printf("%c ", fgetc(pf2));
//	printf("%c ", fgetc(pf2));
//
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}


//fputs 和 fgets 的使用
//输出和输入一行字符串: abcdef
//注意点：有没有换行
//int main()
//{
//	char arr1[] = "abcdefg";
//	//打开一个文件，只写
//	FILE* pf1 = fopen("test.txt", "w");
//	if (pf1 == NULL)
//	{
//		return 0;
//	}
//	fputs(arr1, pf1);     //将arr的数据输出到test.txt中
//	fclose(pf1);
//	pf1 = NULL;
//
//	//打开一个文件，只读
//	FILE* pf2 = fopen("test.txt", "r");
//	if (pf2 == NULL)
//	{
//		return 0;
//	}
//	char arr2[1024] = { 0 };
//	fgets(arr2, 1024, pf2);
//	printf("%s", arr2);      //把pf2所指向的test.txt的文件的内容写道屏幕上
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

//gets 和 puts的使用
//操作键盘和屏幕
//从键盘读取一行文本信息
//int main()
//{
//	char buf[1024];
//	gets(&buf);
//	puts(buf);
//	return 0;
//}


//fscranf 和 fprint 的使用
//格式化输入和输出函数
//输入到屏幕上 or 文件上面
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
//	//struct Student s = { 100,3.14f,"abcdef" };  //定义结构体s
//	//将s 的数据输出到test.txt中
//	//FILE* pf1 = fopen("test.txt", "w");  // 打开一个可以写入的文件
//	//if (pf1 == NULL)
//	//{
//	//	return 0;
//	//}
//
//	////开始写入
//	//fprintf(pf1, "%d %f %s", s.a, s.b, s.c);      //将结构体s的内容通过pf1写入到test的文件之中
//
//	//fclose(pf1);
//	//pf1 = NULL;
//
//	////将test.txt的内容输入到屏幕上
//	//FILE* pf2 = fopen("test.txt", "r");
//	//struct Student s2 = { 0 };
//	//if (pf2 == NULL)
//	//{
//	//	return 0;
//	//}
//	//fscanf(pf2, "%d%f%s", &(s2.a), &(s2.b), &(s2.c));  //将test文件的内容通过指针pf2 输入到结构体s2中
//	//printf("%d %.2f %s", s2.a, s2.b, s2.c);
//	//fclose(pf2);
//	//pf2 = NULL;
//
//
//	//直接输入到屏幕上
//	//输出到屏幕上
//	struct Student s = { 0 };
//	fscanf(stdin, "%d%f%s", &(s.a), &(s.b), &(s.c)); //通过键盘对结构体s进行赋值，再输入到屏幕上
//	fprintf(stdout, "%d %.2f %s", s.a, s.b, s.c);    //再输出结构体s的内容
//
//	return 0;
//}

//对比一组函数
//scanf/fscanf/sscanf
//printf/fprintf/sprintf


//sscanf 和 sprintf 从字符串里面读和获取
//struct Student
//{
//	int a;
//	float b;
//	char c[];
//};
//
//int main()
//{
//	struct Student s = { 1024,3.14,"abcdef" };  //定义结构体s
//	char* buf = { 0 };
//	sscanf(buf, "%d%f%s", &(s.a), &(s.b), &(s.c));   //将结构体s的内容写入到buf中，并转换为s格式
//	printf("%s", buf);
//	sprintf(buf, "%d %f %s", s.a, s.b, s.c);
//	return 0;
//}



//二进制形式写入、写出文件
//fwrite and fwrite
//struct Student
//{
//	char sex;
//	int num;
//	char name[10];
//};
//int main()
//{
//	struct Student s = { 'm',20210732,"张三" };      //定义结构体
//	FILE* pf = fopen("test.txt", "wb");      //创建文件
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写入文件
//	fwrite(&s, sizeof(struct Student), 1, pf);     
//	//把地址s的内容，以1个Student结构体大小写入指针pf指向的文件中
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	//再把文件的内容写出来
//	struct Student tmp = { 0 };
//	FILE* pf2 = fopen("test.txt", "rb");
//	if (pf2 == NULL)
//		return 0;
//	//读取文件
//	fread(&tmp, sizeof(struct Student), 1, pf2);
//	//把pf2地址指向的文件,以1个结构体大小的空间，写入到结构体tmp之中
//	printf("%c %d %s\n", tmp.sex, tmp.num, tmp.name);
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

//数据库
//MySQL
//c语言操作MySQL数据库

//文件的顺序读写


//文件的随机读写
//fseek
//根据文件指针的位置和偏移量来定位文件指针
//a b c d e f读取e
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//改变指针所在位置
	fseek(pf, 4, SEEK_SET);
	//打印
	printf("%c\n", fgetc(pf));

	//ftell
	//返回文件指针相对起始位置的偏移量
	int i = ftell(pf);
	printf("%d\n", i);

	fclose(pf);
	pf = NULL;

	

	 
	return 0;
}



//ftell
//返回文件指针相对起始位置的偏移量