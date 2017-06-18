#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*
 * Function to find the number which repeating most in array having 0 to n-1 elements
 */

int countMax(int *a, int n)
{
	int i = 0;
	
	int max = 0;
	int *b = malloc(sizeof(int)*n);
	memset(b,0,sizeof(int)*n);	
	for(i=0;i<n;i++)
	{
		b[a[i]] += 1;
		if(b[a[i]] > max)
			max = b[a[i]];
	}
	return max;
}

int main()
{
	int a[] = {3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,3};
	int n = countMax(a,sizeof(a)/sizeof(int));
	printf("The maximum number of repitations %d\n",n);
}
