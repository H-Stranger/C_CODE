#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串左旋
//void leftRound1(char* src, int time)
//{
//	int i, j,tmp;
//	int len = (int)strlen(src);
//	time %= len;
//
//	for (i = 0; i < time; i++)
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//
//void leftRound2(char* src, int time)
//{
//	char tmp[256] = { 0 };
//	int len = (int)strlen(src);
//	int pos = len % time;
//
//	strcpy(tmp, src + pos);//从旋转次数开始的指针打印
//	strncat(tmp, src, pos);//添加从0到pos的字符
//	strcpy(src, tmp);
//}
//
//void reverse(char* src, int start, int end)
//{
//	int i, j;
//	char tmp;
//
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = src[i];
//		src[i] = src[j];
//		src[j] = tmp;
//	}
//}
//
//void leftRound3(char* src, int time)
//{
//	int len = (int)strlen(src);
//	int pos = len % time;
//
//	reverse(src, 0, pos);
//	reverse(src, pos, len - 1);
//	reverse(src, 0, len - 1);
//	 
//}
//
//
//int main()
//{
//	int time = 0;
//	scanf("%d", &time);
//	char arr[] = "hello";
//	
//	// leftRound1(arr, time);
//	//leftRound2(arr, time);
//	leftRound3(arr, time);
//	printf("%s\n", arr);
//
//	//字符可以用int存储,输出%c字符，输出%d ASCLL码
//	//int h = 'h';
//	//printf("%d\n", h);
//	return 0;
//}