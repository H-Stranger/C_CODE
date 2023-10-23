#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (DataType*)malloc(sizeof(DataType)*4);
	//malloc失败，赋值NULL
	if (ps->a)
	{
		printf("malloc is failed\n");
		exit(-1);
	}
	ps->capacity = 4;
	//top为栈顶元素的下一个
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

//尾插
void StackPush(ST* ps, DataType x)
{
	assert(ps);
	//检查空间
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
//尾删
void StackPop(ST* ps)
{
	assert(ps);

	//直接top--,赋值为0仅适用于int
	//ps->a[ps->top - 1] = 0;

	//栈非空
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