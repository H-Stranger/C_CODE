#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	//�ҵ�\0�ַ���
	while (*(dest++))
	{
		;
	}
	// \0�Ժ�ֵ
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