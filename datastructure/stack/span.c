#include<stdio.h>

void printSpanArray(int *a, int n)
{
	int i = 0;
	int j =0;
	int c[n];
	c[0] = 1;
	for(i=1;i<n;i++)
	{
		c[i] = 1;
		for(j = i-1;(j>=0 && a[i] >= a[j]);j--)
		{

			c[i]++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",c[i]);
	printf("\n");

}

int main()
{
	int arr[] = {45,56,78,34,110,120,80,140};
	printSpanArray(arr,sizeof(arr)/sizeof(int));
	return 0;
}
