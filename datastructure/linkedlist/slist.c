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


void removeL(slist *L , int key)
{
	slist next = *L;
	slist prev = *L;
	if(next -> next == NULL)
	{	if (next -> a == key)
			free(next);
		return ;
	}
	next = next ->next;
	while(next != NULL)
	{
		if(next -> a == key)
		{
			prev ->next = next->next;

			free(next);
			next = NULL;
			break;
		}
		next = next ->next;
		prev = prev ->next;
	}
}

void deletebyPos(slist *head, int pos)
{
	slist curr = *head;
	slist prev = *head;
	int i = 0;
	
	if(pos == 0)
	{
		if(curr)
		{
			free(curr);
			curr = NULL;
		}
	}
	i++;
	curr = curr ->next;
	while((curr != NULL) && (i != pos) )
	{
			
		curr = curr ->next;
		prev = prev ->next;
		i++;

	}
	if(i < pos)
	{
		printf("Linked list have fewer elements than %d \n",pos);
		return ;
	}
	
	prev->next = curr->next;
	free(curr);
	curr = NULL;
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
	removeL(&mList,42);
	display(mList);
	removeL(&mList,4);
	display(mList);
	removeL(&mList,11);
	display(mList);
	insert(&mList,3);
	insert(&mList,332);
	display(mList);
	deletebyPos(&mList,1);
	display(mList);
	deletebyPos(&mList,133);


}
