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
//计算n的阶乘

//int main()
//{
//	int a = 0;//a最大	给三个数从大到小输出
//	int b = 0;//b次之
//	int c = 0;//c最小
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
//	//输出1到100三的倍数
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
//	int i = 0;//给定两个数求他们的最大公约数
//	int num1 = 0;//两个数中较小的一个数
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
//	printf("最大公约数为%d\n", com);
//	return 0;
//}//求两个数的最大公约数。。。

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
//}//辗转相除法 欧几里得算法

//int main()
//{
//	//编写一下代码数一下从1到100所有整数中出现9的个数
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
//	//计算1/1-1/2+1/3......+1/99-1/100的和
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
//	//求10个整数中的最大值
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
//	//打印出乘法口诀表
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
////	printf("猜数字\n");
////	int ret = 0;
////	int b = 0;
////	ret = rand() % 101;
////	
////	while (1)
////	{
////		printf("请输入>:\n");
////		scanf("%d", &b);
////		if (b > ret)
////		{
////			printf("猜大了\n");
////			continue;
////		}
////		if (b < ret)
////		{
////			printf("猜小了\n");
////			continue;
////		}
////		if (b == ret)
////		{
////			printf("猜对了\n");
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
//////		printf("请选择>:");
//////		scanf_s("%d",&a);
//////		switch (a)
//////		{
//////		case 1:
//////			game();//游戏的主体
//////			break;
//////		case 0:
//////			printf("退出游戏\n");
//////			break;
//////		default:
//////			printf("请重新选择\n");
//////			break;
//////		}
//////	} while (a);
//////	return 0;
//////}
//////	
//////{	//
//猜数字 
//int main()
//{
//	double a = 0;
//	printf("%lf", a);
//	return 0;
//}
 
//#include"三子棋.h"
//void menu()
//{
//	printf("##################\n");
//	printf("##1.play  0.exit##\n");
//	printf("##################\n");
//}
//void 三子棋()
//{
//	char board [ROW][COL]={0};
//	initBoard(board, ROW, COL);
//	while (1)
//	{
//		printf("玩家走:>\n");
//		playermove(board, ROW, COL);
//		displayboard(board, ROW, COL);
//		win(board, ROW, COL);
//		printf("%c\n", win(board, ROW, COL));
//		if (win(board, ROW, COL) == 'x')
//		{
//			printf("玩家获胜！\n");
//			break;
//		}
//		if (1 == full(board, ROW, COL))
//		{
//			printf("平局\n");
//			break;
//		}
//		printf("电脑走:>\n");
//		computermove(board, ROW, COL);
//		displayboard(board, ROW, COL);
//		win(board, ROW, COL);
//		if (win(board, ROW, COL) =='o')
//		{
//			printf("电脑获胜！");
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
//		printf("请输入:>");
//		scanf_s("%d", &ret);
//		switch (ret)
//		{
//		case 1:
//			printf("开始游戏\n");
//			三子棋();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入。\n");
//			break;
//		}
//	} while (ret);
//
//}
//int main()
//{
//	test();
//	return 0;
//}//三子棋

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
	printf("扫雷\n");
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS]={0};//11*11
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	setmine(mine,ROW,COL);
	//扫雷
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game2();
			break;
		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

