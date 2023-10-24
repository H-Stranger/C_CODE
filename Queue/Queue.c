#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueInit(Queue* ps)
{
	assert(ps);
	//ps =NULL;
	ps->head = ps->tail = NULL;
}
void QueueDestroy(Queue* ps)
{
	assert(ps);

	QNode* cur = ps->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
//尾插
void QueuePush(Queue* ps, DataType x)
{
	assert(ps);
	//创建节点
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc is failded\n");
		exit(-1);
	}
	newnode->x = x;
	newnode->next = NULL;

	//空队列
	if (ps->tail == NULL)
	{
		ps->head = ps->tail = newnode;
	}
	else
	{
		//尾指针的下一个赋值为newnode，再把尾指针往下移一位
		ps->tail->next = newnode;
		ps->tail = newnode;
	}
}
//头删
void QueuePop(Queue* ps)
{
	assert(ps);
	assert(ps->head);

	if (ps->head->next == NULL)
	{
		//队列一个元素
		free(ps->head);
		ps->head = ps->tail = NULL;
		
	}
	else {
		Queue* tmp = ps->head->next;
		free(ps->head);
		ps->head = tmp;
	}
}
DataType QueueFront(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->x;
}
DataType QueueBack(Queue* ps)
{
	assert(ps);
	assert(ps->tail);
	return ps->tail->x;
}
int QueueSize(Queue* ps)
{
	assert(ps);
	int size = 0;
	QNode* cur = ps->head;
	while (cur)
	{
		cur =cur->next;
		size++;
	}
	return size;
}
bool QueueEmpty(Queue* ps)
{
	assert(ps);
	
	return ps->head == NULL;
}