#include<stdio.h>

int main()
{
	int i=1, h, j, r=1;
	scanf("%d", &h);
	while(h--)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ", i++);
		}
		r++;
		printf("\n");
	}
	
}
