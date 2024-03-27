#include <stdio.h>

int main(int argc, char* argv)
{
	int c;
	int ch;
	ch = 0;
	while((c = getchar()) != EOF)
	{
		if((c == 9 || c == 10 || c == 32) && ch == 0)
		{
			ch = 1;
			putchar(10);
		}
		else if(ch == 1 && (c == 9 || c == 10 || c ==32))
			;
		else{
			putchar(c);
			ch = 0;
		}
	}
}
