#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

////my_strlenʵ��
////1.������
//
//int my_strlen1(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//
//	while (*str != '\0')
//		//while(*str)
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
////2.�ݹ�
//int my_strlen2(char* str)
//{
//	assert(str != NULL);
//	if (*str)
//	{
//		return 1 + my_strlen2(++str);//str++ err why? ����+�����ټӣ���һ�ε��ñ����Ҵ���Ϊstr
//	}
//	//*str = '\0'������0
//	else
//	{
//		return 0;
//	}
//}
//
////3.ָ��
//int my_strlen3(char* str)
//{
//	char* start = str;
//	char* end = str;//��endָ��ȥ++
//	
//	while (*end)
//	//*end++���ԭ����1����Ϊ*end = '\0'ʱ��+1
//	{
//		end++;
//	}
//	//*strΪ '\0'ʱ���ټ�
//	//ָ��-ָ�룬�����long long ���ͣ�Ϊ11
//	return end - start;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	printf("%d\n", my_strlen1(arr1));
//	printf("%d\n", my_strlen2(arr1));
//	printf("%d\n", my_strlen3(arr1));
//
//
//	return 0;
//}
