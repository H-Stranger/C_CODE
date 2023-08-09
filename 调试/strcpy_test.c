#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//字符串拷贝
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);//strcpy本函数
//	//arr2数组存放 b i t \0
//	//\0也拷贝至arr1中，提前结束打印
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
//		//优化
//		*dest++ = *src++;
//	}
//}

//改进一
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//	//  '\0'相当于0,即为假
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}

//改进二
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	//避免使用者将src和dest放反
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	//返回dest，使调用者可以直接在printf函数里面使用函数
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