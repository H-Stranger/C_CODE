#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//ึธี๋สýื้
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* arr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			printf("%d " ,* (arr[i] + j));
		}
		printf("\n");
	}
	return 0;
}