#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
  ��д�ݹ��㷨int max(int a[],int left, int right)��������a[left..right]�е��������
*/

//#include "ArrayIo.h"
///*�뽫���������������������в���*/
////int my_max(int a[], int left, int right)//�Ҹĳ�my_max����Ϊ���max��֪�������ﱻ������
////{
////    if (left>=right)
////    {
////        return a[right];//�����ұߵ������
////    }
////    else
////    {
////        if (a[left]>a[right])
////        {
////            int tmp = 0;
////            tmp = a[right];
////            a[right] = a[left];
////            a[left] = tmp;//������������
////        }
////        return my_max(a, left + 1, right);
////    }
////}
////int main()
////{
////    int a[10];
////    input(a, 10);
////    print(a, 10);
////    printf("������������:%d\n", my_max(a, 0, 9));
////    return 0;
////}

///*
//���дһ���ݹ��㷨����void partion(int a[], int left, int right)��
//������a[left..right]�е��������������������ߣ�����ż������������ұߡ�
//*/
//#include "ArrayIo.h"
//#define N 10
///*�뽫���������������������в���*/
//void partion(int a[], int left, int right)
//{
//    if (left>=right)
//    {
//        return;//�ж�����
//    }
//    else
//    {
//        
//        for (  ; a[left] % 2 == 0; right--)
//        {
//            if (left >= right)
//            {
//                break;
//            }
//            int tmp = 0;
//            tmp = a[left];
//            a[left] = a[right];
//            a[right] = tmp;
//        }
//
//        return partion(a, left+1, right);
//    }
//}
//int main()
//{
//    int a[N];
//    init(a, N);				/*�������N����*/
//    print(a, N);
//    partion(a, 0, N - 1);
//    print(a, N);
//    return 0;
//}

///*
//  ���д�ݹ麯��void bubbleSort(int a[],int n)��
//  �Գ���Ϊn���������ð�ݷ�������������
//  ���д�ݹ麯��int binSearch(int a[], int left, int right,int key)��
//  ���ö��ֲ��ҷ�������a[left..right]�в���ֵΪkey��Ԫ�����ڵ�λ�ã�
//  ������ʧ�ܺ�������-1��
//  */
//
//#include "ArrayIo.h"
//#define N 10
//  /*�뽫���������������������в���*/
//void bubbleSort(int a[], int n)
//{
//    if (n==1)
//    {
//        return;//��д���ж�����
//    }
//    else
//    {
//        int i = 0;
//        for ( i = 0; i < n; i++)
//        {
//            if (a[i]>a[n-1])
//            {
//                int tmp = 0;
//                tmp = a[i];
//                a[i] = a[n - 1];
//                a[n - 1] = tmp;
//             //�����ķŵ����
//
//            }
//        }
//        return bubbleSort(a, n - 1);
//    }
//}
//int binSearch(int a[], int left, int right, int key)
//{
//    int mid = (left + right) / 2;
//    if (a[mid]==a[left]&&a[mid]==key)
//    {
//        return mid;
//    }
//    if (mid==left)
//    {
//        return -1;
//    }
//    else
//    {
//        if (a[mid]<key)
//        {
//            return binSearch(a, (left + right) / 2, right, key);
//        }
//        else if (a[mid]==key)
//        {
//            return mid;
//        }
//        else
//        {
//            return binSearch(a, left, (left + right) / 2, key);
//        }
//    }
//}
//int main()
//{
//    int x, pos, a[N];
//    init(a, N);
//    bubbleSort(a, N);
//    print(a, N);
//    printf("������Ҫ���ҵ�����\n");
//    scanf("%d", &x);
//    pos = binSearch(a, 0, N - 1, x);
//    if (pos != -1) printf("a[%d]=%d\n", pos, x);
//    else printf("Not found!\n");
//    return 0;
//}
