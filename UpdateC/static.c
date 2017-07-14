#include <stdio.h>

void func(char *s)
{
	static char i ='\b';
	printf("%c %s",i,s);
	i=',';
}

int main()
{
	char a[][10] = {"Hello","How" ,"When"};
	int i =0 ;
	for (i=0;i<3;i++)
		func(a[i]);
	return 0;
}
