#define _CRT_SECURE_NO_WA
#include <stdio.h>
////传参回顾
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//与位有关
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//  %s打印字符串
//  %d打印字符
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}


//int main()
//{
//	//不允许用指针改字符数组的值，因为存储在指针中的是一个常量字符串，不允许改变
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//	char* cp1 = "hello world";
//	char* cp2 = "hello world";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else if (*cp1 == *cp2)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//此处arr是首元素地址
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//这里的arr是数组地址
//	test(arr);
//
//	return 0;
//

//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	
//	char arr[] = "hello world";
//	printf("%s\n", arr);
//	return 0;
//}