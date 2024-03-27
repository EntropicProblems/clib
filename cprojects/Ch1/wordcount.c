#include <stdio.h>

#define IN 1
#define OUT 0
int main(int argc, char* argv)
{
	double nc;
	int c, nl, nw, state;
	nc = c = nl = nw = state = 0;
	
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == 10)
			++nl;
		if((c < 65 || c > 122) || (c > 90 && c < 97))
			state = OUT;
		else if(state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %.0lf\n", nl, nw, nc);
}
