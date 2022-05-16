#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
  编写递归算法int max(int a[],int left, int right)，求数组a[left..right]中的最大数。
*/

//#include "ArrayIo.h"
///*请将本函数补充完整，并进行测试*/
////int my_max(int a[], int left, int right)//我改成my_max是因为这个max不知道在哪里被定义了
////{
////    if (left>=right)
////    {
////        return a[right];//让最右边的数最大
////    }
////    else
////    {
////        if (a[left]>a[right])
////        {
////            int tmp = 0;
////            tmp = a[right];
////            a[right] = a[left];
////            a[left] = tmp;//让两个数交换
////        }
////        return my_max(a, left + 1, right);
////    }
////}
////int main()
////{
////    int a[10];
////    input(a, 10);
////    print(a, 10);
////    printf("数组的最大数是:%d\n", my_max(a, 0, 9));
////    return 0;
////}

///*
//请编写一个递归算法函数void partion(int a[], int left, int right)，
//将数组a[left..right]中的所有奇数调整到表的左边，所有偶数调整到表的右边。
//*/
//#include "ArrayIo.h"
//#define N 10
///*请将本函数补充完整，并进行测试*/
//void partion(int a[], int left, int right)
//{
//    if (left>=right)
//    {
//        return;//判断条件
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
//    init(a, N);				/*随机产生N个数*/
//    print(a, N);
//    partion(a, 0, N - 1);
//    print(a, N);
//    return 0;
//}

///*
//  请编写递归函数void bubbleSort(int a[],int n)，
//  对长度为n的数组采用冒泡法进行升序排序。
//  请编写递归函数int binSearch(int a[], int left, int right,int key)，
//  采用二分查找法在数组a[left..right]中查找值为key的元素所在的位置，
//  若查找失败函数返回-1。
//  */
//
//#include "ArrayIo.h"
//#define N 10
//  /*请将本函数补充完整，并进行测试*/
//void bubbleSort(int a[], int n)
//{
//    if (n==1)
//    {
//        return;//先写出判断条件
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
//             //将最大的放到最后
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
//    printf("请输入要查找的数：\n");
//    scanf("%d", &x);
//    pos = binSearch(a, 0, N - 1, x);
//    if (pos != -1) printf("a[%d]=%d\n", pos, x);
//    else printf("Not found!\n");
//    return 0;
//}
