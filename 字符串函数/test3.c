#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	//找到\0字符串
	while (*(dest++))
	{
		;
	}
	// \0以后赋值
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}
int main()
{
	char arr1[12] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);

	printf("%s\n", arr1);
	return 0;
}