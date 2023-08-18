#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

////my_strlen实现
////1.计数器
//
//int my_strlen1(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//
//	while (*str != '\0')
//		//while(*str)
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
////2.递归
//int my_strlen2(char* str)
//{
//	assert(str != NULL);
//	if (*str)
//	{
//		return 1 + my_strlen2(++str);//str++ err why? 后置+先用再加，又一次调用本身且传参为str
//	}
//	//*str = '\0'，返回0
//	else
//	{
//		return 0;
//	}
//}
//
////3.指针
//int my_strlen3(char* str)
//{
//	char* start = str;
//	char* end = str;//让end指针去++
//	
//	while (*end)
//	//*end++会比原来多1，因为*end = '\0'时又+1
//	{
//		end++;
//	}
//	//*str为 '\0'时不再加
//	//指针-指针，这里得long long 类型，为11
//	return end - start;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	printf("%d\n", my_strlen1(arr1));
//	printf("%d\n", my_strlen2(arr1));
//	printf("%d\n", my_strlen3(arr1));
//
//
//	return 0;
//}
