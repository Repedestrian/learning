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
	printf("ɨ��\n");
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	setmine(mine, ROW, COL);
	//ɨ��
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