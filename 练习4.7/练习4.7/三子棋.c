#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"三子棋.h"
#include<time.h>
void initBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i <ROW ; i++)
	{
		for ( j = 0; j <COL; j++)
		{
			board[i][j] = ' ';
			printf("   ");
			if (j<COL-1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		if (i<ROW-1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %C ",board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	//玩家输入
	int a = 0;
	int b = 0;
	int tmp = 0;
	do
	{
		scanf("%d%d", &a, &b);
		if (a <= ROW && b <= COL&& board[a - 1][b - 1] == ' ')
		{
			board[a - 1][b - 1] = 'x';
			tmp = 0;
		}
		else
		{
			printf("位置输入错误，请重新输入.\n");
			tmp = 1;
		}
	} while (tmp);
}
void computermove(char board[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int ret = 1;
	do
	{
		int a = rand() % 3;
		int b = rand() % 3;
		if (board[a][b] == ' ')
		{
			board[a][b] ='o';
			ret = 0;
		}
	} while (ret);
}
int full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < ROW; i++)
	{
		for ( j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}
char win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < ROW; i++)
	{
		if (board[i][0]==board[i][1]&& board[i][1] ==board[i][2]&& board[i][2] !=' ')
		{
			return board[i][1];
		}
	}
	for ( j = 0; j < COL; j++)
	{
		if (board[0][j] == board[1][j]&& board[1][j] == board[2][j]&& board[2][j] != ' ')
		{
			return board[1][j];
		}
	}
	if (board[0][0] == board[1][1]&& board[1][1] == board[2][2]&& board[2][2] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1]&& board[1][1] == board[2][0]&& board[2][0] != ' ')
	{
		return board[1][1];
	}
	else
	{
		return 0;
	}
}
