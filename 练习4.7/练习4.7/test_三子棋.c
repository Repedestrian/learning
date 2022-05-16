#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"三子棋.h"
void menu()
{
	printf("##################\n");
	printf("##1.play  0.exit##\n");
	printf("##################\n");
}
void 三子棋()
{
	char board [ROW][COL]={0};
	initBoard(board, ROW, COL);
	while (1)
	{
		printf("玩家走:>\n");
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		win(board, ROW, COL);
		printf("%c\n", win(board, ROW, COL));
		if (win(board, ROW, COL) == 'x')
		{
			printf("玩家获胜！\n");
			break;
		}
		if (1 == full(board, ROW, COL))
		{
			printf("平局\n");
			break;
		}
		printf("电脑走:>\n");
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		win(board, ROW, COL);
		if (win(board, ROW, COL) =='o')
		{
			printf("电脑获胜！");
			break;
		}
	}
}
void test()
{
	int ret = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf_s("%d", &ret);
		switch (ret)
		{
		case 1:
			printf("开始游戏\n");
			三子棋();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (ret);

}
int main()
{
	test();
	return 0;
}//三子棋