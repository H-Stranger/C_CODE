#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strstr函数
 

//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	printf("%s\n",strstr(arr1, arr2));
//
//
//	char arr3[] = "abcdefgh";
//	char arr4[] = "def";
//	
//	char* ret = strstr(arr3, arr4);
//	if (ret == NULL)
//	{
//		printf("不存在字符串\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//
//
//	char arr5[] = "fgh";
//	printf("%s\n", strstr(arr3, arr5));
//
//	return 0;
//}

//函数自拟

//my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1)
//	{
//		if (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		s1++;
//	}
//}
//int main()
//{
//
//}