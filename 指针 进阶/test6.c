#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//回调函数应用
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
//void menu()
//{
//	printf("*************************\n");
//	printf("****1.Add       2.Sub****\n");
//	printf("****3.Mul       4.Div****\n");
//	printf("*********0.Exit**********\n");
//	printf("*************************\n");
//}
//
//int main()
//{
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数字:\n");
//			int a, b;
//			scanf("%d%d", &a, &b);
//			int ret = parr[input](a, b);
//			printf("%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else {
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}


//case语句形式

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//	} while (input);
//}