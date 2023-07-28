#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int test(char arr[])
{
	printf("%d\n", sizeof(arr));
	return 0;
}
//int main()
//{
//	double a = 5.0/ 2.0;
//	printf("%lf\n", a);
//	int d = -4 / 3;
//	printf("%d\n", d);
//	//存储规则
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	test(arr);
//
//	//右移运算符
//	int b = -2;
//	int c = b >> 2;//若无int c，结果还是-2
//	printf("%d\n", c);//c = -1;
//	
//	//
//
//	return 0;
//}
// 

//统计数字二进制有几个1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("该数字中有%d个1", num, count);
//}

//int main()
//{
//	//对应补码
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("该数字中有%d个1", count);
//}
struct Stu
{
	char name[10];
	int age;
	char id[10];
};
int main()
{
	struct Stu s1 = { "张三",20,"20222154" };
	struct Stu* ps = &s1;

	printf("%s\n", ps->name);
	printf("%s\n", (*ps).id);
}