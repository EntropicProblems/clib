#include <stdio.h>

int main(int argc, char* argv[])
{
	int let[127];
	int c, i, leg;
	leg = 0;
	for(i = 0; i < 127; ++i)
	{
		let[i] = 0;
	}
	while((c = getchar()) != EOF)
	{
		++let[c];
	}
	for(i = 0; i < 127; ++i)
	{
		if(leg == 0)
			leg = i;
		else if(let[leg] < let[i])
			leg = i;
	}
	leg = let[leg];
	for(i = 0; i < leg; ++i)
	{
		for(c = 0; c < 127; ++c)
		{
			if(let[c] >= i)
				printf("H");
			else
				printf(" ");
		}
		printf("\n");
	}
}
