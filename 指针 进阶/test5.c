#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
//int Mul(int x, int y)
//{
//	int z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = x / y;
//	return z;
//}
//int main()
//{
//	int(*padd)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 4));
//	}
//
//	return 0;
//}