#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////�ڴ����
//struct s1
//{
//	char a;
//	int b;
//	double c;
//	char d;
//};
////������1 4 8 1
////1 + 3 + 4 + 8 + 1  17
////�������� 8 ȡ������
////24
//
//
//
//struct s2
//{
//	int b;
//	char a;
//	char d;
//	double c;
//};
////������4 1 1 8
////4 + 1 + 1 + 2 + 8  16
////�������� 8 ȡ������
////16
//
//
////�ṹ��Ƕ��
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
////16
//
//struct s4
//{
//	char c1;
//	struct s3 s;
//	double d;
//};
////������ 1 8 8
////1 + 7 + 16 + 8
////�������� 8
////32
//
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	printf("%d\n", sizeof(struct s3));
//	printf("%d\n", sizeof(struct s4));
//
//	return 0; 
//}

//���ö�����
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//};
////������ 1
////1 8
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//����ƫ����
//#include<stddef.h>
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
////offsetof()
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));
//
//
//	return 0;
//}

