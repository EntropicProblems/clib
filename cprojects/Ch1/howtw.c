#include <stdio.h>
int main()
{
	double nc;

	for(nc = 0; getchar() != '\n'; ++nc)
		;
	printf("%.0lf\n", nc);
}
