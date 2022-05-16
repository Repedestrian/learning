#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game2.h"
int count = 0;
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i <rows; i++)
	{
		for ( j = 0; j <cols ; j++)
		{
			board[i][j] = set;//'*'
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//布置雷
		int x = rand()% row + 1;//1-9
		int y = rand()% col + 1;
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10 = 71
	while (1)
	{
		printf("请输入排查雷的坐标：>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			if (mine[x][y]=='1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else //不是雷
			{
				//计算x、y坐标轴为有几个雷
				//int count = get_mine_count(mine, x, y);
				/*show[x][y] = count + '0';*/
				display(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
				DisplayBoard(mine, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
		if (count == row * col - EASY_COUNT)
		{
			printf("恭喜你排雷成功\n");
			break;
		}
	}	
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//void find(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
//	{
//		int i = 0;
//		int j = 0;
//		a = x;
//		b = y;
//		for (i = a-1; i <= a+1; i++)
//		{
//			x = a-1;
//			for (j = b-1; j <= b+1; j++)
//			{
//				y = b - 1;
//				if (mine[a][b] == '0' && get_mine_count(mine, a, b) == 0)
//				{
//					show[a][b] = ' ';
//				}
//				if(get_mine_count(mine, a, b) != 0)
//				{
//					show[a][b] = get_mine_count(mine, a, b) + '0';
//					break;
//				}
//				return find(mine, show, x, y);
//			}
//			return find(mine, show, x, y);
//		}
//	}
//	
//}
////void blank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	if (mine[x][y] == '0' && get_mine_count(mine, x, y) == 0)
//	{
//		show[x][y] = ' ';
//	}
//}
void display(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (get_mine_count(mine,x,y)!=0)
		{
			show[x][y] = get_mine_count(mine, x, y) + '0';
			count++;
			return;
		}
		else if(show[x][y]==' '|| show[x][y] != '*')
		{
			return;
		}
		/*else if (show[x][y] == '*')
		{
			show[x][y] = get_mine_count(mine, x, y) + '0';
			return;
		}*/
		else
		{
			show[x][y] = ' ';
			count++;
			for (int i = -1; i <= 1; i++)
			{
				for (int j =  -1; j <= 1; j++)
				{
					display(mine,show,x+i,y+j);
				}
			}
		}
	}
}