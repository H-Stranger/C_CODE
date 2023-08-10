#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//assert(dest && src);
//
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	//返回目的空间起始地址
//	return ret;
//}
//int main()
//{
//	//char arr1[] = "abcdefghi";
//
//	char* arr1 = "abcdefghi";
//	char arr2[] = "bit";
//
//	//arr1中存储的是常量字符串
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}