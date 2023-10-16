#pragma once
#ifndef __SEQLIST__H__
#define __SEQLIST__H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//#define MAX_SIZE 10
//typedef int SQDataType;
//
//struct SeqList
//{
//	SQDataType a[MAX_SIZE];
//	int size;
//};
//typedef struct SeqList SL;



typedef int SQDataType;

typedef struct SeqList
{
	SQDataType* arr;
	int size;
	int capacity;
}SL;


//增删改查等接口函数
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);

void SeqListCheckCapacity(SL* ps);
void SeqListPrint(SL* ps);

void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
void SeqListDestroy(SL* ps);

void SeqListFind(SL* ps, SQDataType x);
void SeqListModify(SL* ps, int pos, SQDataType x);
#endif