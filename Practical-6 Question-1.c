#include<stdio.h>

int main()
{
	int i, j, k;
	for(i=1, j=8;i<=4;i++, j/=2)
	{
		for(k=1;k<=4;k++)
		{
			printf("%d", j);
		}
		printf("\n");
	
	}
	return 0;
}
