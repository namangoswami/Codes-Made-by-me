#include<stdio.h>

int main()
{
	int i, j, w;
	printf("Enter Width\n");
	scanf("%d", &w);
	for(i=0;i<w;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
