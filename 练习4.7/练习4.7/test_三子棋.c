#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"������.h"
void menu()
{
	printf("##################\n");
	printf("##1.play  0.exit##\n");
	printf("##################\n");
}
void ������()
{
	char board [ROW][COL]={0};
	initBoard(board, ROW, COL);
	while (1)
	{
		printf("�����:>\n");
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		win(board, ROW, COL);
		printf("%c\n", win(board, ROW, COL));
		if (win(board, ROW, COL) == 'x')
		{
			printf("��һ�ʤ��\n");
			break;
		}
		if (1 == full(board, ROW, COL))
		{
			printf("ƽ��\n");
			break;
		}
		printf("������:>\n");
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		win(board, ROW, COL);
		if (win(board, ROW, COL) =='o')
		{
			printf("���Ի�ʤ��");
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
		printf("������:>");
		scanf_s("%d", &ret);
		switch (ret)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			������();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (ret);

}
int main()
{
	test();
	return 0;
}//������