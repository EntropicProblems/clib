#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];
void copy(void);
int getlinee(void);
int main(int argc, char** argv)
{
	int len;
	extern int max;
	extern char longest[];
	while((len = getlinee()) > 0)
	{
		if(len > max)
		{
			max = len - 1;
			copy();
		}
	}
	if(max > 0)
	{
		printf("%s%d\n", longest, max);
	}
	return 0;
}
void copy(void)
{
	extern char line[], longest[];
	int i;
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
int getlinee(void)
{
	extern char line[];
	int c,i;
	for(i = 0; (i < MAXLINE) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
		line[i] = c;
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
