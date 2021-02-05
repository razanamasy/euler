#include <stdio.h>

int main()
{
	int i = 0;
	int x = 0;
	int i1 = 0;
	int x1 = 0;
	for(i=0; i!=1000; i++)
	{
		if(i%3 ==0)
		{
			x = x+i;
		}

	}

	for(i1=0; i1!=1000; i1++)
	{
		if(i1%5 ==0)
		{
			x1 = x1 + i;
		}

	}
	
	int total = x + x1;
	printf("%d", total);

	return 0;

}
