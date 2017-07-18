#include <stdio.h>

#define MAX   20
#define NIL   -1


int l[MAX];
int init()
{

	int i = 0;
	for(i=0;i<MAX;i++)
		l[i] = NIL;
}

int fib(int n)
{
	if(l[n] == NIL)
	{
		if(n<=1)
		{
			l[n] = n;
		}
		else
		{
			l[n] = fib(n-1)  + fib(n-2);
		}


	}
	return l[n];
}

int main()
{
	init();
	printf("Fib of 10 : %d \n",fib(5));
	return 0;
}
