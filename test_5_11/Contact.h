#define _CRT_SECURE_NO_WARNINGS 1 
#define DEFULT_SZ 3
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include<string.h>
#include<stdlib.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
struct PeoInfo 
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo* data;
	int size;
	int capacity;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void Save( struct Contact* ps);
void Load(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void Destroy(struct Contact* ps);
int age_compare(const void* x, const void* y);
void bubble(void* a, size_t num, size_t width, int(*cmp)(const void* a, const void* b));
void Sort(const struct Contact* ps);