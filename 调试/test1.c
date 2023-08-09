#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//Debug和release的区别
//	//release自动优化功能
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", 10 - i);
//	}
//
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 19;
//		printf("%d", tmp);
//	}//局部变量窗口缺陷，出去后无法监视
//	//监视窗口全局监视
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}

//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	//堆栈窗口体会
//	test();
//	return 0;
//}