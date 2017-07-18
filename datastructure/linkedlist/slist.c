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
int len(slist L)
{
	int count = 0;
	while(L != NULL)
	{
		count++;
		L = L->next;
	}
	return count;
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

void modify(slist l, int m)
{
	while(l!=NULL)
	{
		l->a = (l->a) * m;
		l = l->next;
	}
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

int find(slist L, int key)
{
	int index = -1;
	while(L!=NULL)
	{
		index++;
		if(L->a == key)
			break;
		L = L->next;
	}
	return index;
}

slist findNth(slist L, int n)
{
	int index = 0;
	while(L!=NULL)
	{
		if (index == n)
			break;
		L = L->next;
		index ++;
	}
	return L;
}

slist findNthfromend(slist l, int n)
{
	slist r = l;
	int i = 0,found =0;
	
	while(l)
	{
		if( i == n)
		{
			found = 1;
			while(l){
				r = r->next;
				l = l->next;
			}
			break;
		}
		l = l->next;
		i++;
	}
	if(!found)
		return NULL;
	return r;

}

slist middle(slist l)
{
	slist slow = l;
	slist fast = l;
	
	while(fast != NULL)
	{
		fast = fast ->next;
		if(fast == NULL)
			break;
		fast = fast ->next;
		slow = slow ->next;
	}
	return slow;
}


slist addsorted(slist *r, int x)
{
	slist l = *r;
	if(!l)
	{
		slist t = newNode(x);
		return t;
	}
	while(l  != NULL)
	{
		if(l->next->a > x)
		{
			l = l->next;
		}
		else
		{
			slist m = newNode(x);
			m->next = l->next;
			l->next = m;
			return *r;
		}
	}

	slist m = newNode(x);
	m -> next = NULL;
	l -> next = m;
	return *r;
}
/*
 * Main driver program to test the functions
 */

int main()
{
	slist mList= NULL;

	mList = createList(1);
	insert(&mList,2);
	insert(&mList,4);
	insert(&mList,12);
	mList = addsorted(&mList,10);
	display(mList);
/*	removeL(&mList,4);
	display(mList);
	removeL(&mList,11);
	display(mList);
	insert(&mList,3);
	insert(&mList,332);
	insert(&mList,33);
	insert(&mList,31);
	insert(&mList,12);
	insert(&mList,2);
	insert(&mList,3);
	display(mList);
	printf("Len of list :%d \n",len(mList));
	int index = find(mList,12);
	printf("Find the element at index : %d \n",index);
	modify(mList,10);
	display(mList);
	slist r = findNth(mList,5);
	if(r!=NULL)
	{
		printf("3rd index %d \n",r->a);
	}
	else
		printf("Nothing got \n");
	slist r1 = middle(mList);
	if(r1 != NULL)
	{
		printf("middle %d \n",r1->a);
	}
	else
		printf("Nothing got \n");


	slist f = findNthfromend(mList,2);
	printf("Found : %d \n",f->a);
*/
}


