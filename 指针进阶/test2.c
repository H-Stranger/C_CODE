#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//Ö¸ÕëÊý×é
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d " ,* (arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//¸´Ï°
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 7,2,1,4,5,6 };
//	int arr3[] = { 9,2,3,8,5,6 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//			//*(parr[i] + j)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 }; 
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d\n", *(*pa + i));//pa[i] err
//	}
//	return 0;
//}


//void test(int* arr)//no
//{}
//void test(int* arr[5])//no
//{}
//void test(int(*arr)[5])
//{}
//void test(int** arr)//no
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	printf("%p\n", arr);
//
//	return 0;
//}