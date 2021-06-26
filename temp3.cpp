#include<stdio.h>

int main()
{
	int n, i, sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n);
		if(n<0)
		break;
		sum=sum+n;
	}
	printf("%d", sum);
	return 0;
}
