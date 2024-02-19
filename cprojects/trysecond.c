#include <stdio.h>
int main(int args)
{
double fa;
double cel;
cel = 0;
while(cel <= 100)
{
	fa = (cel * 1.8) + 32;
	printf("%3.0lf\t%6.1lf\n", cel, fa);
	cel = cel + 1;
}
}
