#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//&������ �� ���������Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//ָ���ʾ
//	int (*padd)(int, int) = Add;
//	//int (*padd)(int x, int y) = Add;
//
//	//*padd ��ͬ�� Add
//	int a = 20;
//	int b = 10;
//	printf("%d\n", (*padd)(a, b));
//	printf("%d\n", (*padd)(7, 8));
//
//	//padd�ǵ�ַ�������ú��ҵ���Ӧ�ĺ�������������Ҳ���ԣ�Add����Ҳ�ǵ�ַ
//	printf("%d\n", padd(7, 8));
//	printf("%d\n", (**padd)(7, 8));//ok?
//	printf("%d\n", (***padd)(7, 8));//ok?
//	//�˴���������ʵû��ʵ�����壬��������д���*
//
//
//	return 0;
//	}