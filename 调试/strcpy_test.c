#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//�ַ�������
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);//strcpy������
//	//arr2������ b i t \0
//	//\0Ҳ������arr1�У���ǰ������ӡ
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		/** dest = *src;
//		    dest++;
//		    src++;
//			*/
//		//�Ż�
//		*dest++ = *src++;
//	}
//}

//�Ľ�һ
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//����
//	//  '\0'�൱��0,��Ϊ��
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}

//�Ľ���
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	//����ʹ���߽�src��dest�ŷ�
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	//����dest��ʹ�����߿���ֱ����printf��������ʹ�ú���
	return ret;
}


int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}