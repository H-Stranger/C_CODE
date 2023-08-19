#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//字符串分类和字符串转换
int main()
{
	char arr[] = "I Am A Student";

	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}

	printf("%s\n", arr);
	return 0;
}