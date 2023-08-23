#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//qsortÃ°ÅÝÄ£ÄâÊµÏÖ
void bubble_sort(int* arr, int sz)
{
	int i, j,tmp;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}



void bubble_qsort(void* base, size_t len, size_t size, int (*cmp)(const void*, const void*))
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if(base)
		}
	}
}
int main()
{
	

	return 0;
}