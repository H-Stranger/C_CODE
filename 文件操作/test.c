#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 12345;
//	int b = 98765;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fwrite(&b, 4, 1, pf);
//	fclose(pf);
//	pf = NULL; 
//
//	return 0;
//}

#include<string.h>
#include<errno.h>
//int main()
//{
//	////д�ļ�
//	//FILE* pf = fopen("test1.txt", "w");
//	////�ַ�����
//	//fputc('h', pf);
//	//fputc('e', pf);
//	//fputc('l', pf);
//	//fputc('l', pf);
//	//fputc('o', pf);
//	
//	//���ļ���д�ļ�����ͬʱһ��
//
//	//���ļ�
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char ch[1024] = "0";
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(ch, 1024, pf);
//	printf("%s", ch);
//
//	fgets(ch, 1024, pf);
//	//printf("%s", ch);
//	puts(ch);//��ӡ���ỻ��
//	
//	fgets(ch, 1024, pf);
//	printf("%s", ch);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test1.txt", "w");
//	//w�ĸ�������
//	fputs("hello world!\n", pf);
//	fputs("You are very excellent", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char ch[1024] = { 0 };
//	//fgets(ch, 1024, stdin); //�ӱ�׼��������ȡ
//	//fputs(ch, stdout); //�������׼�����
//
//	gets(ch);
//	puts(ch);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"Hello" };
//	FILE* pf = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд���ļ�
//	fprintf(pf, "%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	struct S s;
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽ���ļ����������뵽�ṹ���У�Ȼ���ӡ
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//��������ȥ��ȡ����Ȼ��洢
//	fscanf(stdin, "%d %f %s", &(s.n),&(s.score),&( s.arr));
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//
//	return 0;
//}

//sprintf sscanf
//int main()
//{
//	struct S s = { 100,3.14,"World" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//��ʽ������ȫ�������ַ����洢��buf��
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	 
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}



//�����ƶ�д�ļ�
// 
//struct Information
//{
//	char no[100];
//	char name[10];
//	int age;
//	char address[100];
//};

//int main()
//{
//	struct Information i = { "033","����",18,"�人" };
//	FILE* pf = fopen("test2.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��������ʽд�ļ�
//	fwrite(&i, sizeof(struct Information), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct Information i = { 0 };
//	FILE* pf = fopen("test2.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��������ʽ���ļ�
//	fread(&i, sizeof(struct Information), 1, pf);
//	printf("ѧ�ţ�%s\n", i.no);
//	printf("������%s\n", i.name);
//	printf("���䣺%d\n", i.age);
//	printf("��ַ��%s\n", i.address);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}