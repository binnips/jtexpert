#include <stdio.h>

struct mydata
{
	int a;
	int b;
	char c;
	long m;
	int r;
	char p;
};
int main()
{
	struct mydata r={1,2};
	printf("Sizeof r : %d \n",sizeof(r));
}
