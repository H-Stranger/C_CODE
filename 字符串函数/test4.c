#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

////×ÔÄâmy_strcmp
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "hello";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	char arr3[] = "hellw";
//	char arr4[] = "hello";
//	printf("%d\n", my_strcmp(arr3, arr4));
//	char arr5[] = "hella";
//	char arr6[] = "hello";
//	printf("%d\n", my_strcmp(arr5, arr6));
//
//
//	return 0;
//}