#include <stdio.h>

int main(int argc, char* argv[])
{
	char vc;
	while((vc = getchar()) != EOF)
	{
		if(vc == 32)
		{
			while((vc = getchar()) == 32)
				;
				putchar(32);
		}
		putchar(vc);
	}
}
