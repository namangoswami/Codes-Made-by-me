#include<stdio.h>

int main()
{
	int i, j;
	for(i=4;i<=5;i++)
	{
		printf("%d:\n", i);
		for(j=1;j<=10;j++)
		{
			printf("%d*%d = %d\n", i, j, i*j);
		}
	}
}
