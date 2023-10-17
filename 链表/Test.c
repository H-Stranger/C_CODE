#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

void SListTest()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 9);
	SLTPushBack(&plist, 7);
	SLTPushBack(&plist, 9);
	SLTPushBack(&plist, 1);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
}

int main()
{
	SListTest();

	return 0;
}