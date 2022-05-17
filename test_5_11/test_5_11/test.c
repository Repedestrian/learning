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
	//����ͨѶ¼
	struct Contact con;//���1000���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		int a = 0;
		menu();
		printf("��ѡ��:>");
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
			//ѡ������ʽ
			Sort(&con);
			//printf("%d %d %p %p\n",con.size, sizeof(struct PeoInfo), con.data, con.data + 1);
			//bubble(con.data, con.size, sizeof(struct PeoInfo), age_compare);
			break;
		case SAVE:
			Save(&con);
			break;
		case EXIT:
			//����ͨѶ¼
			Save(&con);
			Destroy(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
