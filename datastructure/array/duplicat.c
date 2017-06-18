#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int findDuplicate(int *a, int n)
{
	int i = 0;
	for(i=0;i<=n;i++)
	{
		if(a[abs(a[i])] < 0)
		{
			
			return abs(a[i]);
		}
		else	
			a[abs(a[i])] = -a[abs(a[i])];
	}
	return -4727;
}
int main()
{
	int a[] = {1,2,3,5,6,6,7,8,4};
	int n = findDuplicate(a,9);
	printf("Duplicate number found : %d on %p \n",n,a);
}

