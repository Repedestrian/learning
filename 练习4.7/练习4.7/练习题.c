#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d",&n);
//	for ( i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("n!=%d\n", ret);
//	return 0;
//}
//����n�Ľ׳�

//int main()
//{
//	int a = 0;//a���	���������Ӵ�С���
//	int b = 0;//b��֮
//	int c = 0;//c��С
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	//���1��100���ı���
//	int i = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			int a = i;
//			printf("%d ", a);
//		}
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 0;//���������������ǵ����Լ��
//	int num1 = 0;//�������н�С��һ����
//	int num2 = 0;
//	int com = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1>num2)
//	{
//		int tmp = num1;
//		num1 = num2;
//		num2 = tmp;
//	}
//	for ( i = 1; i <=num1 ; i++)
//	{
//		int a = num1 % i;
//		int b = num2 % i;
//		if (a == 0 && a == b)
//		{
//			com = i;
//		}
//		
//	}
//	printf("���Լ��Ϊ%d\n", com);
//	return 0;
//}//�������������Լ��������

//int main()
//{
//	int m = 1;
//	int n = 2;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}//շת����� ŷ������㷨

//int main()
//{
//	//��дһ�´�����һ�´�1��100���������г���9�ĸ���
//	int num = 0;
//	int i = 0;
//	for ( i = 1; i <100; i++)
//	{
//		int a = i%10;
//		int b = i / 10;
//		if (a==9)
//		{
//			num++;
//		}
//		 if (b==9)
//		{
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	//����1/1-1/2+1/3......+1/99-1/100�ĺ�
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum = sum + flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	//��10�������е����ֵ
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{		
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//��ӡ���˷��ھ���
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for ( i = 1; i <10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = j * i;
//			printf("%d * %d = %-2d ", j, i, sum);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <time.h>
////void menu()/*
////{
////	printf("################################\n");
////	printf("######  1.play     0.exit ######\n");
////	printf("################################\n");
////}*/
////void game()/*
////{
////	printf("������\n");
////	int ret = 0;
////	int b = 0;
////	ret = rand() % 101;
////	
////	while (1)
////	{
////		printf("������>:\n");
////		scanf("%d", &b);
////		if (b > ret)
////		{
////			printf("�´���\n");
////			continue;
////		}
////		if (b < ret)
////		{
////			printf("��С��\n");
////			continue;
////		}
////		if (b == ret)
////		{
////			printf("�¶���\n");
////			break;
////		}
////	}
////}*/
//////int main()
//////{
//////	int a = 0;
//////	srand((unsigned int)time(NULL) );
//////	do
//////	{
//////		menu();
//////		printf("��ѡ��>:");
//////		scanf_s("%d",&a);
//////		switch (a)
//////		{
//////		case 1:
//////			game();//��Ϸ������
//////			break;
//////		case 0:
//////			printf("�˳���Ϸ\n");
//////			break;
//////		default:
//////			printf("������ѡ��\n");
//////			break;
//////		}
//////	} while (a);
//////	return 0;
//////}
//////	
//////{	//
//������ 
//int main()
//{
//	double a = 0;
//	printf("%lf", a);
//	return 0;
//}
 
//#include"������.h"
//void menu()
//{
//	printf("##################\n");
//	printf("##1.play  0.exit##\n");
//	printf("##################\n");
//}
//void ������()
//{
//	char board [ROW][COL]={0};
//	initBoard(board, ROW, COL);
//	while (1)
//	{
//		printf("�����:>\n");
//		playermove(board, ROW, COL);
//		displayboard(board, ROW, COL);
//		win(board, ROW, COL);
//		printf("%c\n", win(board, ROW, COL));
//		if (win(board, ROW, COL) == 'x')
//		{
//			printf("��һ�ʤ��\n");
//			break;
//		}
//		if (1 == full(board, ROW, COL))
//		{
//			printf("ƽ��\n");
//			break;
//		}
//		printf("������:>\n");
//		computermove(board, ROW, COL);
//		displayboard(board, ROW, COL);
//		win(board, ROW, COL);
//		if (win(board, ROW, COL) =='o')
//		{
//			printf("���Ի�ʤ��");
//			break;
//		}
//	}
//}
//void test()
//{
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf_s("%d", &ret);
//		switch (ret)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			������();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������롣\n");
//			break;
//		}
//	} while (ret);
//
//}
//int main()
//{
//	test();
//	return 0;
//}//������

#include "game2.h"
void menu()
{
	printf("********************************\n");
	printf("**********    1.play    ********\n");
	printf("**********    0.exit    ********\n");
	printf("********************************\n");
}
void game2()
{
	printf("ɨ��\n");
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS]={0};//11*11
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	setmine(mine,ROW,COL);
	//ɨ��
	DisplayBoard(mine, ROW, COL);
	findmine(mine,show, ROW, COL);
	DisplayBoard(show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game2();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

