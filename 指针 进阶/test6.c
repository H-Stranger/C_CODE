#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = x / y;
	return z;
}
void menu()
{
	printf("*************************\n");
	printf("****1.Add       2.Sub****\n");
	printf("****3.Mul       4.Div****\n");
	printf("*********0.Exit**********\n");
	printf("*************************\n");
}

int main()
{
	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个数字:\n");
			int a, b;
			scanf("%d%d", &a, &b);
			int ret = parr[input](a, b);
			printf("%d\n", ret);

		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else {
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}