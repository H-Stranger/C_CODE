#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ַ�������
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

	strcpy(tmp, src + pos);//����ת������ʼ��ָ���ӡ
	strncat(tmp, src, pos);//��Ӵ�0��pos���ַ�
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

	//�ַ�������int�洢,���%c�ַ������%d ASCLL��
	//int h = 'h';
	//printf("%d\n", h);
	return 0;
}