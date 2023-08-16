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
//	//到00000000 …… 00000000后变为11111111 …… 11111111
//	//无符号打印从最大的数一直往下
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
//	//到arr[127] = -128时，arr[128] = -129(实际按127存储，补码)
//	//11111111 11111111 11111111 01111111
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}
