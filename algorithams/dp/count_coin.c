#include <stdio.h>

int count(int a[], int m, int n)
{
	if( n== 0)
		return 1;
	if (n < 0)
		return 0;
	if (m <= 0 && n>=0)
		return 0;
	
	return (count(a,m-1,n) + count(a,m,n-a[m-1])) ;
}



int main()
{

	int a[] = {3,4,5,10};
	int sz = sizeof(a) / sizeof(int) ;
	printf("Count  : %d \n",count(a,sz,14));
	return 0;
	}
