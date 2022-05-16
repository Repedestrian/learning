#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <time.h>
void initboard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int x, int y);
//void find(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
//void blank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
void display(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);