#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	
//	printf("%d\n", sizeof(arr + 1));
//	return 0;
//}

struct test 
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
} *p;
int main()
{
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned long)p + 1);
	return 0;
}