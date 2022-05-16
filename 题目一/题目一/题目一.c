#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// //1.判断是否为奇数
// //2.输出1到100之间的奇数
////int main()
////{
////	int n = 0;
////	if (100 == n)
////		printf("%d\n",n);
////	else
////	{
////		n++;
////		printf("%d\n", n);
////	}
////	return 0;
////}
 
 	
////int main()
////{
////	int n = 0;
////	if (n % 2 == 0)
////		printf("%d是奇数\n", n);
////	else
////	return 0;
////}
 
 
//int main()
//{
//	int n = 0;
//	while (n<100)
//	{
//		n++;
//		if (0==n%2)
//		{
//			
//		}
//		else
//		{
//			printf("%d是奇数\n", n);
//		}
//
//	}
//	return 0;
//}
 
 
//void print(unsigned int n)
//{
//	unsigned int a = 0;
//	 a = n;
//	int count = 0;
//	printf("odd =");
//	while (n)
//	{
//		int tmp = 0;
//		tmp = n % 2;
//		n = n / 2;
//		count++;
//		if (count % 2 == 0)
//		{
//			printf("%d ", tmp);
//		}
//	}
//	printf("\n");
//	printf("even=");
//	while (a)
//	{
//		int tmp = 0;
//		tmp = a % 2;
//		a = a / 2;
//		count++;
//		if (count % 2 != 0)
//		{
//			printf("%d ", tmp);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
 
	
 
//void reverse_string(char arr[], int sz, int n)
//{
//	if (n>=sz)
//	{
//		return;
//	}
//	else
//	{
//		char tmp = arr[n];
//		arr[n] =arr[sz];
//		arr[sz] = tmp;
//		return reverse_string(arr, sz - 1, n + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int right = sizeof(arr) / sizeof(arr[0])-2;
//	int left = 0;
//	char* p = &arr;
//	reverse_string(arr,right,left);
//	printf("%s", arr);
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n/10==0)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n/10) + n % 10;
//	}
//}
//int	main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}



//int Hanoi_Towers(int n)
//{
//	if (n==3)
//	{
//		return 7;
//	}
//	else
//	{
//		return (n - 1)* Hanoi_Towers(n - 1) + 1 + (n - 1) * Hanoi_Towers(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi_Towers(n);
//	printf("%d", Hanoi_Towers(n));
//	return 0;
//}
//
 
 
//int main()
//{
//	int a[4] = {0};
//	int* p = a;
//	printf("%p\n", p );
//	printf("%p\n", p + 1);
//	printf("%p\n", &p[0] + 1);
//	printf("%p\n", *p + 1);
//	return 0;
//}


//#include<math.h>
//void Pascal_triangle(int n)
//{
//	//打印空格 
//	int i = 0;
//	for ( i = 0; i < n-1-i; i++)
//	{
//		printf(" ");
//	}
//	//打印数字
//	int j = 0;
//	for ( j = 1; j <=n; j++)
//	{
//		int i = 0;
//		for ( i = 0; i < j; i++)
//		{
//			printf("%d", pow(2, i));
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Pascal_triangle(n);
//	return 0;
//}



//int main()
//{
//	//1为真，0为假
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int i = 0;
//	char arr3[] = {'A','B','C','D'};
//	for ( i = 0; i <4; i++)
//	{
//		int arr[4] = { 1,1,1,1 };
//		char arr2[4] = { 'y','n','n','n' };
//		arr[i] = 0;
//		a = arr[0];
//		b = arr[1];
//		c = arr[2];
//		d = arr[3];
//		if (a)
//		{
//			arr2[0] = 'n';
//		}
//		if (b)
//		{
//			arr2[2] = 'y';
//		}
//		if (c)
//		{
//			arr2[3] = 'y';
//		}
//		if (d)
//		{
//			arr2[3] = 'n';
//			arr2[2] = 'y';
//		}
//		int count = 0;
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			if (arr2[j] == 'y')
//				count++;
//		}
//		if (count==1)
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				printf("%c=%c\n",arr3[i],arr2[i]);
//			}
//
//			break;
//		}
//	}
//}
 
 
//#include<string.h>
//int is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	strncat(arr1, arr1, len);
//	char* ret=strstr(arr1, arr2);
//	if (ret==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "edefac";
//	int ret = is_left_move(arr1, arr2);
//	if (ret==1)
//	{
//		printf("YES\n");
//	}
//	if (ret==0)
//	{
//		printf("NO\n");
//	}
//	return 0;
// }



//int my_strlen(char* str)
//{
//	if (*(str + 1)=='\0')
//	{
//		return 1;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	//模拟实现strlen函数
//	//用递归的方式，不创建临时变量
//	char str[] = "abcedf";
//	printf("%d", my_strlen(str));
//	return 0;
//}

//子串查找：kmp算法

//#include <assert.h>
//void* my_memcpy(void* dest, const void* str,size_t count)
//{
//	void* ret = dest;
//	assert(dest && str);
//	if ((char*)str + count > (char*)dest && str < dest)
//	{
//		(char*)str += count;
//		(char*)dest += count;
//		while (count--)
//		{
//			--(char*)dest;
//			--(char*)str;
//			*(char*)dest = *(char*)str;
//
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)str;
//			++(char*)dest;
//			++(char*)str;
//		}
//	}
//
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	my_memcpy(arr1, arr1+2, 20);
//	return 0;
//}

//#include<stdlib.h>
//struct S
//{
//	int n;
//	int ar[0];
//};
//int main()
//{
//	struct S add;
//	struct S* p = &add;
//	p->n = 1;
//	p = (int*)malloc(5 * sizeof(int));
//	return 0;
//}


//void reverse(void)
//{
//
//}
//int	main()
//{
//	float a = 3.5;
//	printf("%d\n", (int)(11.0/3+0.5));
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	return 0;
}