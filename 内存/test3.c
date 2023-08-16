#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char a = -1;
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("a = %d,b = %d,c = %d", a, b, c);
//	//以整形提出来，隐性强制类型转换
//	//a  11111111 11111111 11111111 11111111                  -1
//	//b  11111111 11111111 11111111 11111111前面全补1(补符号位)  -1
//	//c  00000000 00000000 00000000 11111111  255
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	char b = 128;
//	printf("%u\n", b);
//
//	return 0;
//}



//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//用补码二进制运算得出结果打印出来
//	return 0;
//}