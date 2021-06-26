#include<stdio.h>

int main()
{
	int l, r=1, i, j, h;
	printf("Enter Height\n");
	scanf("%d", &h);
	for(i=0, l=1;i<2*h;i+=2, l++)
	{
		for(j=0;j<2*h-i-2;j++)
		{
			printf(" ");
		}
		for(r=l;r<=(i);r++)
		{
			printf("%d ", r);
		}
		for(;r>=l;r--)
		{
			printf("%d ", r);
		}
		printf("\n");
	}
	return 0;
}
