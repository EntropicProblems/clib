#include <stdio.h>

int main(int argc, char* argv[])
{
	double lg;
	char f;
	lg = 0;
	while((f = getchar()) != EOF)
	{
		if((f <=9 && f >= 10) || f == 32)
			++lg;
	}	
	printf("%.0lf\n", lg);
}
