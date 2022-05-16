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
	printf("猜数字\n");
	int ret = 0;
	int b = 0;
	ret = rand() % 101;
	
	while (1)
	{
		printf("请输入>:\n");
		scanf("%d", &b);
		if (b > ret)
		{
			printf("猜大了\n");
			continue;
		}
		if (b < ret)
		{
			printf("猜小了\n");
			continue;
		}
		if (b == ret)
		{
			printf("猜对了\n");
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
		printf("请选择>:");
		scanf_s("%d",&a);
		switch (a)
		{
		case 1:
			game();//游戏的主体
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (a);
	return 0;
}
	
