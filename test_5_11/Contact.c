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
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");

		}
		else
		{
			printf("����ʧ��\n");
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
	//��ȡ�ļ�
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
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	//����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ������� -1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-12s\t%-12d\t%-12s\t%-20s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼�����������˾����ӣ�û����ɶ������
	CheckCapacity(ps);
	//��������
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size==0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ������� -1
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	//ɾ��
	else
	{
		int j = 0;
		for ( j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-12s\t%-12s\t%-12s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	//ѡ������ʽ
		int a = 0;
	do
	{
		printf("1.���� 2.���� 0.ȡ��\n");
		printf("��ѡ������ʽ:>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			//��������
				qsort(ps->data, ps->size, sizeof(struct PeoInfo), name_compare);
			break;
		case 2:
			//��������
				qsort(ps->data, ps->size, sizeof(struct PeoInfo), age_compare);
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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

