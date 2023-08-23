#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//回调函数
// 
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*pp)(char*))
//{
//	printf("test\n");
//	pp("hello world");
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}



//qsort函数

#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	//return *(float*)e1 - *(float*)e2; 返回的不是int值
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 < *(float*)e2)
//	{
//		return -1;
//	}
//	else if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//}
//
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	printf("\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//
//void test3()
//{
//	struct Stu s[3] = { {"张三",18},{"lisa",19},{"lucy",16} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("姓名:%s  年龄:%d\n", s[i].name,s[i].age);
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//void test4()
//{
//	int arr[5] = { 4,7,1,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	test2();
//	test3();
//	test4();
//	return 0;
//}

