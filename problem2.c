#include <stdio.h>

int main()
{
	int tab[100] = {0};
	int i=0;
	tab[1]=1;
	tab[2]=2;
	int x=0;
	for(i==2; tab[i] < 4000000; i++)
	{
		tab[i] = tab[i-1] + tab[i+1];
		if(tab[i]%2 ==0)
		{
			x = x+tab[i];
		}
	}
	printf("La somme  des nombre paire de la suite fibonnacci < 4 000 000 = %d",x);
}
