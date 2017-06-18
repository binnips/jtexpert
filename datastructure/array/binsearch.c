#include <stdio.h>


int search(int *a, int n, int ele)
{

	int low = 0;
	int high  = n - 1;
	int mid = 0;
	while(low <= high)
	{
		mid = low+(high-low)/2;
		if(a[mid] == ele)
			return mid;
		else if (ele > a[mid])
			low = mid +1;
		else
			high = mid-1;


	}
	return -1;
}

int main()
{
	int a[10] = {3,5,11,34,56,57,67,89,93,100};

	int index = search(a,10,34);
	printf("Found the element in index : %d \n",index);
}
