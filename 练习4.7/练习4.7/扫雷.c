#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	char mine[ROWS][COLS] = { 0 };//11*11
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	//扫雷
	DisplayBoard(mine, ROW, COL);
	findmine(mine, show, ROW, COL);
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