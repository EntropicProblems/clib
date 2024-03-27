#include<stdio.h>
#define MIN 80
#define MAX 1000
void Appendit(char taker[], char giver[], int gvlth, int tkrst);
int Spaceless(char ins[], int lgth);
int main(int argc, char* argv[])
{
	char c;
	int leng;
	leng = 0;
	int colle;
	colle = 0;
	char collect[MAX];
	char inscribe[MAX];
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			leng = Spaceless(inscribe, leng);
			inscribe[leng] = '\n';
			leng++;
			Appendit(collect, inscribe, leng, colle);
			colle += leng;
			leng = 0;
		}
		else
		{
			inscribe[leng] = c;
			leng++;
		}

	}
	printf("%s", collect);
}
void Appendit(char taker[], char giver[], int gvlth, int tkstr)
{
	int i;
	for(i = 0; i < gvlth; i++)
	{
		taker[(tkstr + i)] = giver[i];
	}
}
int Spaceless(char ins[], int lgth)
{
	int i;
	for(i = lgth - 1; i >= 0; i--)
	{
		if(ins[i] <= 32)
		{
			lgth--;
		}
		else
		{
			break;
		}
	}
	return lgth;
}
