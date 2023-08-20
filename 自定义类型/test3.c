#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//位段

struct S
{
	//bit位
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
}
//1010 10100 0011 0100
//从低位开始取