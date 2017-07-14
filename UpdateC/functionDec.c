#include <stdio.h>
#include <errno.h>
int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	fp = fopen(argv[1],"r");
	if(fp == NULL)
	{
		printf("Some error happened : %s \n",strerror(errno));
		return 1;
	}
	fclose(fp);
	return 0;
}
