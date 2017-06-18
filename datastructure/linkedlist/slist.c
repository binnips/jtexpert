#include "slist.h"


slist newNode(int m)
{
	slist t = malloc(sizeof(struct singleList));
	t -> a= m;
	t->next = NULL;
	return t;
}

slist createList(int m) 

{
	slist t = newNode(m);
	return t;
}

void display(slist L)
{
	if(!L)
		printf("LIST IS EMPTY");
	else
	{
		while(L)
		{
			printf("%d ",L->a);
			L = L -> next;
		}
	}
	printf("\n");
}


void insert(slist *L , int m)
{
	slist tmp = newNode(m);
	if(!(L))
	{
		*L = tmp;
	}else
	{
		slist head = *L;
		tmp ->next = head;
		*L = tmp;
	}
}


/*
 * Main driver program to test the functions
 */

int main()
{
	slist mList= NULL;

	mList = createList(11);
	insert(&mList,22);
	insert(&mList,42);
	insert(&mList,12);
	display(mList);

}
