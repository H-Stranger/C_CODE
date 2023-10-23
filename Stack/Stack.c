#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (DataType*)malloc(sizeof(DataType)*4);
	//mallocʧ�ܣ���ֵNULL
	if (ps->a)
	{
		printf("malloc is failed\n");
		exit(-1);
	}
	ps->capacity = 4;
	//topΪջ��Ԫ�ص���һ��
	ps->top = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

//β��
void StackPush(ST* ps, DataType x)
{
	assert(ps);
	//���ռ�
	if (ps->capacity == ps->top)
	{
		DataType* tmp = (DataType*)realloc(ps->a, ps->capacity *2*sizeof(DataType));
		if (tmp == NULL)
		{
			printf("realloc is failed\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top] = x;
	ps->top++;
}
//βɾ
void StackPop(ST* ps)
{
	assert(ps);

	//ֱ��top--,��ֵΪ0��������int
	//ps->a[ps->top - 1] = 0;

	//ջ�ǿ�
	assert(ps->top > 0);
	ps->top--;
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
DataType StackTop(ST* ps)
{
	assert(ps);
	return ps->a[ps->top - 1];
}