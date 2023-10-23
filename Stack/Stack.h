#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
typedef int DataType;
typedef struct Stack
{
	DataType* a;
	int top;
	int capacity;
}ST;



void StackInit(ST* ps);
void StackDestroy(ST* ps);

//»Î’ª
void StackPush(ST* ps, DataType x);
//≥ˆ’ª
void StackPop(ST* ps);

int StackSize(ST* ps);
bool StackEmpty(ST* ps);

DataType StackTop(ST* ps);