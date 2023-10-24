#pragma once
#include<stdio.h>
#include<stdbool.h>
typedef char DataType;
typedef struct QueueNode
{
	DataType x;
	struct QueueNode* next;
}QNode;
typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* ps);
void QueueDestroy(Queue* ps);

//队尾入
void QueuePush(Queue* ps,DataType x);
//队头出
void QueuePop(Queue* ps);

DataType QueueFront(Queue* ps);
DataType QueueBack(Queue* ps);

int QueueSize(Queue* ps);
bool QueueEmpty(Queue* ps);

