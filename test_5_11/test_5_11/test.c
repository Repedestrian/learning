#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Contact.h"

void menu()
{
	printf("**************************************\n");
	printf("****** 1. add         2. del    ******\n");
	printf("****** 3. search      4. modify ******\n");
	printf("****** 5. show        6. sort   ******\n");
	printf("****** 0. exit        7. save   ******\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//存放1000个人的信息
	//初始化通讯录
	InitContact(&con);
	do
	{
		int a = 0;
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//选择排序方式
			Sort(&con);
			//printf("%d %d %p %p\n",con.size, sizeof(struct PeoInfo), con.data, con.data + 1);
			//bubble(con.data, con.size, sizeof(struct PeoInfo), age_compare);
			break;
		case SAVE:
			Save(&con);
			break;
		case EXIT:
			//销毁通讯录
			Save(&con);
			Destroy(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
