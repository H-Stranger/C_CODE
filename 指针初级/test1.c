#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//指针类型的两个作用 
//	//1.决定指针解引用访问字节大小
//	int arr[10] = { 0 };
//	int* p = arr;
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	//2.决定指针步长
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
//	//野指针
//	//原因
//	//1.未初始化
//	int* p;//p未赋予地址
//	*p = 20;
//
//	//2.越界
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//
//	//3.指向被释放内存
//	int* p1 = test();
//	*p1 = 20;
//	//p1地址实际已经被释放
//
//	//规避野指针
//	//给指针赋值NULL即0(初始化)
//	int a1 = 10;
//	int b1 = 20;
//	int* pa = &a1;//正常初始化
//	int* pa1 = NULL;
//
//	//使用前检查有效性
//	if (pa != NULL)
//	{
//	
//	}
//	return 0;
//}

//int main()
//{
//	//指针运算
//	//指针+-整数
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
//	//指针-指针
//	char arr1[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//printf("%d\n", &arr[9] - &arr1[0]);//err
//
//	//指针关系运算符
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
//	//求字符串长度
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
//	//数组通过指针访问
//	//通过指针赋值
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
//	//指针数组
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