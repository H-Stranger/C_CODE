#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//	
//}s4,s5,s6;
////全局变量
//struct Stu s3;
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//}

//匿名结构体类型
//struct 
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}arr[10],*p;
////二者不一样类型
//
//
//struct Node
//{
//	int data;
//	struct Node n;
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct Node));
//	//无具体长度
//	return 0;
//}

//typedef struct Node
//{
//	double d;
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}


//struct T
//{
//	double weight;
//	int age;
//};
//
//struct s
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[10];
//};
//
//int main()
//{
//	struct s s1 = { 'c',{50.5,19},18,78.6,"张三"};
//	printf("%c %d %lf %s\n", s1.c, s1.a, s1.d, s1.arr);
//
//	printf("%lf", s1.st.weight);
//
//	return 0;
//}