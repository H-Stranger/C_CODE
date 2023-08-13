#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串右旋
void leftRound1(char* src, int time)
{
	int i, j,tmp;
	int len = strlen(src);
	time %= len;

	for (i = 0; i < time; i++)
	{
		tmp = src[0];
		for (j = 0; j < len - 1; j++)
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;
	}
}

void leftRound2(char* src, int time)
{
	char tmp[256] = { 0 };
	int len = strlen(src);
	int pos = len % time;

	strcpy(tmp, src + pos);//从旋转次数开始的指针打印
	strncat(tmp, src, pos);//添加从0到pos的字符
	strcpy(src, tmp);
}


int main()
{
	int time = 0;
	scanf("%d", &time);
	char arr[] = "hello";
	
	// leftRound1(arr, time);
	leftRound2(arr, time);
	printf("%s\n", arr);

	//字符可以用int存储,输出%c字符，输出%d ASCLL码
	//int h = 'h';
	//printf("%d\n", h);
	return 0;
}