#include<stdio.h>

int main()
{
	int i, j=1, h, k=1;
	printf("Enter Height\n");
	scanf("%d", &h);
	h*=2;
	for(i=2;i<=h;i+=2)
	{
		for(j=0;j<h-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<k;j++)
		{
			printf("* ");
		}
		k+=2;
		printf("\n");
	}
	return 0;
}
