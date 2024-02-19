#include <stdio.h>
#define LOWER 0
#define UPPER 300

int main(int args)
{
	int cel;
		for(cel = UPPER; cel >= LOWER; cel--)
			printf("%3d\t%6.1f\n", cel, (cel*1.8)+32);
}

