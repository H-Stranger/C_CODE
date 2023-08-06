#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//qsortº¯Êý_¸ÄÔìbubble_sort


int bubble_sort(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int tmp= *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,9,3,7,2,4,8,6,5,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}