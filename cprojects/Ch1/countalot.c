#include <stdio.h>

int main(int argc, char* argv)
{
	int alln[10];
	int sp, ot, c, i;
	sp = ot = 0;
	for(i = 0; i < 10; ++i)
		alln[i] = 0;
	while((c = getchar()) != EOF)
	{
		if(c >= 48 && c <= 57)
			++alln[c - 48];
		else if(c == 9 || c == 10|| c == 32)
			++sp;
		else
			++ot;
	}
	printf("Digits 0-9 in order: ");
		for(i = 0; i < 10; ++i)
			printf("%d ", alln[i]);
	printf("Spaces: %d\t Other: %d\n", sp, ot);
}	
