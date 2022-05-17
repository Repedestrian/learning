#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PepInfo*)malloc(DEFULT_SZ * sizeof(struct PeoInfo));
	if (ps->data==NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFULT_SZ;
	Load(ps);
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");

		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void Load(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* Pfread = fopen("contact.dat", "rb");
	if (Pfread==NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//读取文件
	while (fread(&tmp, sizeof(struct PeoInfo), 1, Pfread))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的人的名字:>");
	scanf("%s", name);
	//查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-12s\t%-12d\t%-12s\t%-20s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}
void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量，满了就增加，没满就啥都不干
	CheckCapacity(ps);
	//增加数据
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size==0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-12s\t%-12d\t%-12s\t%-20s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
		printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	//删除
	else
	{
		int j = 0;
		for ( j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-12s\t%-12d\t%-12s\t%-20s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}
void Destroy(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
void Save(const struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for ( i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}
int name_compare(const void* x, const void* y)
{
	char a = ((struct PeoInfo*)x)->name;
	char b = ((struct PeoInfo*)x)->name;
	return strcmp(a, b);
}
int age_compare(const void* x, const void* y)
{
	int a = ((struct PeoInfo*)x)->age;
	int b = ((struct PeoInfo*)y)->age;
	return a-b;
}
#if 1
void Sort(const struct Contact* ps)
{
	//选择排序方式
		int a = 0;
	do
	{
		printf("1.姓名 2.年龄 0.取消\n");
		printf("请选择排序方式:>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			//姓名排序
				qsort(ps->data, ps->size, sizeof(struct PeoInfo), name_compare);
			break;
		case 2:
			//年龄排序
				qsort(ps->data, ps->size, sizeof(struct PeoInfo), age_compare);
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (a);
}
#endif // 0
#if 0
void swap(char* e1, char* e2, size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}


void bubble(void* a, size_t num, size_t width, int(*cmp)(const void* a, const void* b))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)a + j * width, (char*)a + (j + 1) * width) > 0)
			{
				swap((char*)a + j * width, (char*)a + (j + 1) * width, width);
			}
		}

	}
}
#endif // 0

