#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	//��00000000 ���� 00000000���Ϊ11111111 ���� 11111111
//	//�޷��Ŵ�ӡ��������һֱ����
//	
//	return 0;
//}

int main()
{
	unsigned char a;
	for (a = 0; a <= 255; a++)
	{
		printf("hello world\n");
	}

	return 0;
}


//int main()
//{
//	char arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	} 
//	//��arr[127] = -128ʱ��arr[128] = -129(ʵ�ʰ�127�洢������)
//	//11111111 11111111 11111111 01111111
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}
