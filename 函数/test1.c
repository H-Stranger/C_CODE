#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����1234����ӡ1 2 3 4
//void print(int num)
//{
//	if (num > 9) {
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//Repeat
//void paint(int num)
//{
//	if(num > 9)
//	{
//		paint(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 1;
//	scanf("%d", &num);
//	paint(num);
//}

//�������������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;//��ַ +1
//	}
//	return count;
//}

//�������ʱ����
//int my_strlen(char* str)
//{
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}

//ð������
//void bubble_sort(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,9,6,11,2,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//n�Ľ׳�
int fac1(int num)
{
	int ret = 1;
	int i = 1;
	for (i = 1; i <= num; i++)
	{
		ret *= i;
	}
	return ret;
}
int fac2(int num)
{
	if (num > 1) {
		return num * fac2(num - 1);
	}
	else {
		return 1;
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	int result = fac1(num);
	int result2 = fac2(num);
	printf("%d�Ľ׳���%d\n",num, result);
	printf("%d�Ľ׳���%d\n",num, result2);

}