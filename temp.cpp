#include<iostream>
#include<stdio.h>

int main()
{
		char ch;
		do{
			char n[1000];
			printf("Enter Operation\n");
		std::cin >> n;
		//fgets(n,1000, stdin);
		int n1, n2=0;
		char op='+';
		int i;
		for(i=0;n[i]!='\0';i++)
		{
			if(n[i]>='0'&&n[i]<='9')
			{
				n1=n1*10+n[i]-48;
			}
			else
			{
				
			//	printf("n1: %d n2: %d\n", n1, n2);
				switch(op)
				{
					case '+':n2=n2+n1;n1=0;break;
					case '-':n2=n2-n1;n1=0;break;
					case '*':n2=n2*n1;n1=0;break;
					case '/':n2=n2/n1;n1=0;break;
				}
				op=n[i];
			}
		}
		if(n1!=0)
		{
				switch(op)
				{
					case '+':n2=n2+n1;n1=0;break;
					case '-':n2=n2-n1;n1=0;break;
					case '*':n2=n2*n1;n1=0;break;
					case '/':n2=n2/n1;n1=0;break;
				}
		}
		printf("%d\n", n2);
		printf("Do You want to continue?\n");
		scanf("%c", &ch);
		scanf("%c", &ch);
		//printf("c= %c", ch);
	}while(ch=='y'||ch=='Y');
}
