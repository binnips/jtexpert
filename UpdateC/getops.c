#include <stdio.h>
#include <ctypes.h>

int getch(void);
void ungetch(int);

int getch(char s[])
{
	int i,c;
	while((s[0] = c = getch()) == ' ' || c =='\t');
	s[1] = '\0';

}
