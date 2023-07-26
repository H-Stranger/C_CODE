#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//统计字符串长度
//int my_strlen1(char* str) 
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main() 
//{
//	char arr[] = "abcdef";
//	int len1 = my_strlen1(arr);
//	printf("%d\n", len1);
//	char arr2[] = "abcdfejlkef";
//	int len2 = my_strlen2(arr2);
//	printf("%d\n", len2);
//}