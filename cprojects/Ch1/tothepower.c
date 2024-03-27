#include <stdio.h>
float power(float n, int p)
{
	if(p >= 1)
	{
		if((p % 2) == 0)
			n = power(n * n, p >> 1);
		else if(p > 1)
			n = power(n * n, p >> 1) * n;
			return n;
	}
	else if(p == 0);
	{
		return 1;
	}
	if(p < 0)
	{
		p = p - (p*2);
		if((p % 2) == 0)
			n = power(n * n, p >> 1);
		else if(p > 1)
			n = power(n * n, p >> 1) * n;
			return 1/n;
	}
}
int main(int argc, char* argv)
{
	float a;
	int b;
	a = 7;
	b = -7;
	a = power(a,b);
	printf("%f", a);
}
