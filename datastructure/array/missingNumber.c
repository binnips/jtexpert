#include <stdio.h>

int findMissing(int *a, int n)
{
	int x0 = a[0];
	int x1 = 1;
	int i = 0;
	for(i=1;i<n;i++)
	{
		x0 ^= a[i];
	}
	for(i=2;i<=(n+1);i++)
	{
	        x1 ^= i;	
	}
	return x0^x1;
}
int main()
{
	int a[] = {1,2,3,4,6,7,5,8,10};
	int n = findMissing(a,sizeof(a)/sizeof(int));
	printf("Number missing array : %d \n",n);
	return 0;
}
