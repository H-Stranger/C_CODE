#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//ָ�����͵��������� 
//	//1.����ָ������÷����ֽڴ�С
//	int arr[10] = { 0 };
//	int* p = arr;
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	//2.����ָ�벽��
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//Ұָ��
//	//ԭ��
//	//1.δ��ʼ��
//	int* p;//pδ�����ַ
//	*p = 20;
//
//	//2.Խ��
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//
//	//3.ָ���ͷ��ڴ�
//	int* p1 = test();
//	*p1 = 20;
//	//p1��ַʵ���Ѿ����ͷ�
//
//	//���Ұָ��
//	//��ָ�븳ֵNULL��0(��ʼ��)
//	int a1 = 10;
//	int b1 = 20;
//	int* pa = &a1;//������ʼ��
//	int* pa1 = NULL;
//
//	//ʹ��ǰ�����Ч��
//	if (pa != NULL)
//	{
//	
//	}
//	return 0;
//}

//int main()
//{
//	//ָ������
//	//ָ��+-����
//	int arr[10] = { 1,2.3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", p + i);
//		//p++;
//	}
//	
//	printf("\n");
//	int* p1 = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", p);
//		p -= 2;
//	}
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	//ָ��-ָ��
//	char arr1[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//printf("%d\n", &arr[9] - &arr1[0]);//err
//
//	//ָ���ϵ�����
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}


//int my_strlen(char* pc)
//{
//	int start = pc;
//	while (*pc != '\0')
//	{
//		pc++;
//	}
//	int end = pc;
//	return end - start;
//}
//int main()
//{
//	//���ַ�������
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	//����ͨ��ָ�����
//	//ͨ��ָ�븳ֵ
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}