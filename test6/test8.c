//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////int main(void)
////{
////    /*********Begin*********/
////    int N;
////    double M;
////    scanf("%lf%d", &M, &N);
////    double sum = M;
////    while (N)
////    {
////        M /= 2;
////        sum = sum + M * 2;
////        N--;
////    }
////
////    printf("%.2lf %.2lf\n", M, sum);
////    /*********End**********/
////    return 0;
////}
//
////#include<stdio.h>
////int main(void)
////{
////    /*********Begin*********/
////    int Ncount = 0, Acount = 0, Scount = 0, Lcount = 0;
////    char arr[] = "0";
////    scanf("%s", &arr);
////    int i = 0;
////    for (i = 0; i < sizeof(arr); i++)
////    {
////        if (arr[i] == 64)
////        {
////            Scount++;
////        }
////        else if (arr[i] >= 48 && arr[i] <= 57)
////        {
////            Ncount++;
////        }
////        else if ((arr[i] >= 65 && arr <= 90) || (arr[i] >= 97 && arr[i] <= 122))
////        {
////            Acount++;
////        }
////        else
////        {
////            Lcount++;
////        }
////    }
////    printf("%d %d %d %d\n", Acount, Ncount, Scount, Lcount);
////
////    /*********End**********/
////    return 0;
////}
//
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int i = 0;//��¼���ֱ���
//    int j = 0;//��¼��ĸ����
//    int k = 0;//��¼�ո����
//    int o = 0;//��¼�������� 
//    char c;
//    while ((c = getchar()) != '\n') { //�жϼ������enter�ͽ���
//        if (c >= '0' && c <= '9') {
//            i++;
//        }
//        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//            j++;
//        }
//        else if (c == ' ') {
//            k++;
//        }
//        else {
//            o++;
//        }
//    }
//    printf("%d %d %d %d", j, i, k, o);//��ʽ�����
//
//    /*********End**********/
//    return 0;
//}