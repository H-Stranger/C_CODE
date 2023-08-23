#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//qsort函数_改造bubble_sort


//int bubble_sort(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int tmp= *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//}
// 
// 
//Swap()
//
////qsort思路改造
//void bubble_sort_q(void* base,//首元素地址无具体类型
//	int sz,//数组元素总长度
//	int width,//单个元素字节
//	int(*cmp)(const void* e1,const void* e2))//无具体类型参数函数指针
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (((char*)cmp + j * width) - ((char*)cmp + (j + 1) * width) > 0)
//			{
//				swap()
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,9,3,7,2,4,8,6,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}