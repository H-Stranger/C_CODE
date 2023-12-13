#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 12345;
//	int b = 98765;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fwrite(&b, 4, 1, pf);
//	fclose(pf);
//	pf = NULL; 
//
//	return 0;
//}

#include<string.h>
#include<errno.h>
//int main()
//{
//	////写文件
//	//FILE* pf = fopen("test1.txt", "w");
//	////字符输入
//	//fputc('h', pf);
//	//fputc('e', pf);
//	//fputc('l', pf);
//	//fputc('l', pf);
//	//fputc('o', pf);
//	
//	//读文件和写文件不能同时一起
//
//	//读文件
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char ch[1024] = "0";
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(ch, 1024, pf);
//	printf("%s", ch);
//
//	fgets(ch, 1024, pf);
//	//printf("%s", ch);
//	puts(ch);//打印完后会换行
//	
//	fgets(ch, 1024, pf);
//	printf("%s", ch);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test1.txt", "w");
//	//w的覆盖特性
//	fputs("hello world!\n", pf);
//	fputs("You are very excellent", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char ch[1024] = { 0 };
//	//fgets(ch, 1024, stdin); //从标准输入流读取
//	//fputs(ch, stdout); //输出到标准输出流
//
//	gets(ch);
//	puts(ch);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"Hello" };
//	FILE* pf = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写入文件
//	fprintf(pf, "%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	struct S s;
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式从文件流里面输入到结构体中，然后打印
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//从流里面去读取数据然后存储
//	fscanf(stdin, "%d %f %s", &(s.n),&(s.score),&( s.arr));
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//
//	return 0;
//}

//sprintf sscanf
//int main()
//{
//	struct S s = { 100,3.14,"World" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//格式化数据全部换成字符串存储到buf中
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	 
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}



//二进制读写文件
// 
//struct Information
//{
//	char no[100];
//	char name[10];
//	int age;
//	char address[100];
//};

//int main()
//{
//	struct Information i = { "033","张三",18,"武汉" };
//	FILE* pf = fopen("test2.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式写文件
//	fwrite(&i, sizeof(struct Information), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct Information i = { 0 };
//	FILE* pf = fopen("test2.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式读文件
//	fread(&i, sizeof(struct Information), 1, pf);
//	printf("学号：%s\n", i.no);
//	printf("姓名：%s\n", i.name);
//	printf("年龄：%d\n", i.age);
//	printf("地址：%s\n", i.address);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}