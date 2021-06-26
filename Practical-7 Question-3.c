#include<stdio.h>

int main()
{
	int ch, n, res=1, i, temp;
	do{
		printf("1.While\n2.For loop\n3.Exit\n");
		scanf("%d", &ch);
	
	res=1;
	switch(ch)
	{
		case 1:	printf("Enter Number\n");
				scanf("%d", &res);
				printf("Enter power\n");
				scanf("%d", &n);
				temp=res;
				i=2;
				while(i<=n)
				{
					res=res*temp;
					i++;
				}
				printf("%d\n", res);
				break;
		case 2:	printf("Enter Number\n");
				scanf("%d", &res);
				printf("Enter power\n");
				scanf("%d", &n);
				temp=res;
				for(i=2;i<=n;i++)
				{
					res=res*temp;
				}
				printf("%d\n", res);
				break;
	}
	}while(ch<=2);
	return 0;
}
