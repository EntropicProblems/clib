#include<stdio.h>
#define MAX 1000

void Reverse(char s[], int lgth);

int main(int argc, char** argv)
{
	int i;
	char c;
	char rev[MAX];
	for(i = 0; (((c = getchar()) != EOF) && (c != '\n')); i++)
	{
		rev[i] = c;
	}
	Reverse(rev, i - 1);
	printf("%s", rev);
}
void Reverse(char s[], int lgth)
{
	char hld;
	int i;
	for(i = 0; i < lgth; i++)
	{
		hld = s[i];
		s[i] = s[lgth - i];
		s[lgth - i] = hld;
		if(i >= ((lgth >> 1) - 1))
		{
			break;
		}
	}
}
