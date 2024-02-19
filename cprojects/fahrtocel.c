#include <stdio.h>
float ftc(float f)
{
	f = (f - 32)/1.8;
	return f;
}
int main(int args)
{
	float fa;
	float cel;
	fa = -40;
	while(fa <= 300)
	{
		cel = ftc(fa);
		printf("%3.0f\t%6.1f\n", fa, cel);
		fa = fa + 1;
	}
}
