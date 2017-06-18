#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct singleList* slist;
struct singleList
{
	int a;
	struct singleList *next;
};

void insert(slist *head,int a);

void removeL(slist *head);

void deleteList(slist *head);

void display (slist head);

slist newNode(int a);
slist createList(int m);



