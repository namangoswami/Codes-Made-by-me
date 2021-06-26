#include<stdio.h>

int main()
{
	int i, j, w;
	printf("Enter Width\n");
	scanf("%d", &w);
	for(i=0;i<w;i++)
	{
		for(j=1;j<=w-i;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
