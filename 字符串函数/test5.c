#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	printf("%ss\n",strstr(arr1, arr2));

	return 0;
}