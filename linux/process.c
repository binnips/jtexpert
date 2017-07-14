#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int r = 10;

	int m = 10;
	int fd = fork();
	if(fd)
	{
		while(1)
		{
			r++;
			printf("I am parent : %d \n",getpid());
			sleep(1);
			printf("Parent mydata %d \n",r);
			printf("Parent Child data : %d \n",m);
		}
	}
	else
	{
		while(1)
		{
			m++;
			printf("I am child :%d \n",getpid());
			sleep(1);
			printf("child mydata : %d \n",m);
			printf("Child Parent data : %d \n",r);
		}
	}
}
