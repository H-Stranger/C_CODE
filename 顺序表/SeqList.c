#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

//
////增删改查函数 接口函数实现
//void SeqListInit(SL* ps1)
//{
//	memset(ps1->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	ps1->size = 0;
//}
//
////静态顺序表缺点：
//// 给少了不够用，给多了用不完浪费
////头插，尾差，头删，尾删
//void SeqListPushBack(SL* ps1, SQDataType x)
//{
//	if (ps1->size >= MAX_SIZE)
//	{
//		printf("SeqList is full\n");
//		return;
//	}
//
//	ps1->a[ps1->size] = x;
//	ps1->size++;
//	printf("++\n");
//}


void SeqListInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	//空间满了，扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->arr, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc is failed\n");
			exit(-1);
		}
		else
		{
			ps->arr = tmp;
			ps->capacity = newcapacity;
		}
	}
	
}

void SeqListPushBack(SL* ps, SQDataType x)
{
	/*if (ps->size == ps->capacity)
	{
		printf("capacity is full\n");
		return;
	}*/
	SeqListCheckCapacity(ps);

	ps->arr[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SL* ps,SQDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;

	while (end >= 0)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}

	ps->arr[0] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	
	ps->size--;
}
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size)
	{
		ps->arr[start - 1] = ps->arr[start];
		start++;
	}
	ps->size--;
}

void SeqListInsert(SL* ps,int pos,SQDataType x)
{
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}
	ps->arr[pos] = x;
	//ps->arr[pos - 1] = x;  适合外部成员

	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(ps->size > 0);
	int start = pos;
	while (start < ps->size)
	{
		ps->arr[start] = ps->arr[start + 1];
		start++;
	}
	ps->size--;
}
void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SeqListDestroy(SL* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SeqListFind(SL* ps, SQDataType x)
{
	assert(ps->size > 0);
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListModify(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->arr[pos] = x;
}