#include <stdio.h>
#include <malloc.h>


struct test
{
	const int a;
	const int b;
	char c;
	float r;
};
struct mine
{
	int c;
	double d[];
};


const int m = 30;
int main()
{
	struct test r1={2,3,'v',11.1};
	struct test *r2 = &r1;
	struct mine s1 = {1};	
	struct mine *s2 = malloc(sizeof(struct mine)+4);
	s2 -> d[0] = 30;
	double *dp = &(s2->d[1]);
	*dp = 100.332423;
	printf("Value : %lf \n",s2->d[0]);
	int *x = (int*) r2;
	printf("Value of x right now : %d \n",*x);
	*x = 33;
	printf("Value of r2 right now : %d \n",r2->a);
	printf("Value of r1 right now : %d \n",r1.a);
	struct test *r3 = (struct test *)x;
	printf("Now the value of r3-b : %d \n",r3->b);

	

	int *r = &m;
	*r = 45;
	printf("Value of m : %d \n",m);


	struct test d1 = {.a=34,.c='8'};
	return 0;
}

