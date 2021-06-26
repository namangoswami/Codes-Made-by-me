#include<stdio.h>

int main()
{
	int i, j;
	int n=7;
	printf("Enter Height\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		if(i==0||i==n-1)
		{
			for(j=0;j<n;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=n-i-1;j>0;j--)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}
