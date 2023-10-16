#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void TestSeqList()
{
	SL s;
	SeqListInit(&s);

	SeqListPushBack(&s,1);
	SeqListPushBack(&s,2);
	SeqListPushBack(&s,3);
	SeqListPushBack(&s,4);
	SeqListPushBack(&s,5);
	SeqListPushBack(&s,6);
	SeqListPushBack(&s,7);
	SeqListPushBack(&s,8);
	SeqListPushBack(&s,9);
	SeqListPushBack(&s,10);
	SeqListPushBack(&s,11);

	SeqListPushFront(&s, 10);
	SeqListPushFront(&s, 9);
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 4);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 3, 100);
	SeqListPrint(&s);

	SeqListErase(&s, 3);
	SeqListPrint(&s);
}

int main()
{
	TestSeqList();
	return 0;
}