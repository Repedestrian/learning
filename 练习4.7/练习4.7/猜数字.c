#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <time.h>
void menu()
{
	printf("################################\n");
	printf("######  1.play     0.exit ######\n");
	printf("################################\n");
}
void game()
{
	printf("������\n");
	int ret = 0;
	int b = 0;
	ret = rand() % 101;
	
	while (1)
	{
		printf("������>:\n");
		scanf("%d", &b);
		if (b > ret)
		{
			printf("�´���\n");
			continue;
		}
		if (b < ret)
		{
			printf("��С��\n");
			continue;
		}
		if (b == ret)
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int a = 0;
	srand((unsigned int)time(NULL) );
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf_s("%d",&a);
		switch (a)
		{
		case 1:
			game();//��Ϸ������
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (a);
	return 0;
}
	
