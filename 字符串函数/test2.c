#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//my_strcpy函数自拟
 
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	//assert(dest && src)
//
//	char* ret = dest;//保留首元素地址，以便返回拷贝数组
//	//'\0'也被拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello world !";
//	char arr2[] = "bye";
//	char* arr3 = "hello world";//常量字符串无法其他字符拷贝至arr3
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	my_strcpy(arr1, arr3);
//	printf("%s\n", arr1);
//
//	return 0;
//}


