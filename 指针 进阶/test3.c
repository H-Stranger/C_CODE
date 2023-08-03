#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//&函数名 和 函数名都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//指针表示
//	int (*padd)(int, int) = Add;
//	//int (*padd)(int x, int y) = Add;
//
//	//*padd 等同于 Add
//	int a = 20;
//	int b = 10;
//	printf("%d\n", (*padd)(a, b));
//	printf("%d\n", (*padd)(7, 8));
//
//	//padd是地址，解引用后找到对应的函数，不解引用也可以，Add本身也是地址
//	printf("%d\n", padd(7, 8));
//	printf("%d\n", (**padd)(7, 8));//ok?
//	printf("%d\n", (***padd)(7, 8));//ok?
//	//此处解引用其实没有实际意义，但不建议写多个*
//
//
//	return 0;
//	}