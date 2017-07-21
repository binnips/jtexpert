#include <stdio.h>


int intdata()
{
	static int x;
	x += 1;
	return x;
}
int main()
{
	int x = 10;
	int i = 0;
	for(i=0;i<10;i++)
	{
		x = intdata(x);
		printf("Value of x : %d \n",x);
	}
}
