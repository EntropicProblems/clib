#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, c, ch, f;
	ch = 0;
	int wordlengt[20];
	for(i = 0; i < 20; ++i)
		wordlengt[i] = 0;
	while(( c = getchar()) != EOF)
	{
		if(ch >= 20)
		{
			f = 0;
			for(i = 0; i < 20; ++i)
			{
				if(f == 0)
					f = i;
				else if(wordlengt[f] > wordlengt[i])
				f = i;	
			}
			ch = f;
			f = 1;
		}	
		if((c > 122 || c < 65) || (c > 90 && c < 97))
		{
			if(f == 0)
			{
				++ch;
				++f;
			}
		}
		else
		{
			if(f == 1)
				--f;
			++wordlengt[ch];	
		}
	}
	f = 0;
	for(i = 0; i < 20; ++i)
		{
			if(f == 0)
				f = wordlengt[i];
			else if(wordlengt[i] > f)
				f = wordlengt[i];
		}
	for(i = f - 1; i > 0; --i)
		{
			for(c = 0; c < 20; ++c)
			{
				if(wordlengt[c] >= i)
				printf("H");
				else
					printf(" ");
			}
			printf("\n");
		}	
}
