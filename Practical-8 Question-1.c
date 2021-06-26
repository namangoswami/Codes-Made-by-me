#include<stdio.h>

int main()
{
	int ch, n, res=1, i;
	do{
		printf("1.While\n2.For loop\n3.Do while\n4.Exit\n");
		scanf("%d", &ch);
	if(ch<=3)
	{
		scanf("%d", &n);
		if(n<0)
		{
			printf("Invalid Input\n");
			continue;
		}
	}
	res=0;
	switch(ch)
	{
		case 1:	i=1;
				while(i<=n)
				{
					res=res+i++;
				}
				printf("%d\n", res);
				break;
		case 2:	for(i=1;i<=n;i++)
				{
					res=res+i;
				}
				printf("%d\n", res);
				break;
		case 3:	i=1;
				do
				{
					res=res+i++;
				}while(i<=n);
				printf("%d\n", res);
	}
	}while(ch<=3);
	return 0;
}
