#include<stdio.h>

int main()
{
	int n1, n2, res;
	int ch;
		char c;
	do{
	printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
	scanf("%d", &ch);
	printf("Enter the Two Numbers\n");
	scanf("%d%d", &n1, &n2);
	switch(ch)
	{
		case 1: res=n1+n2;break;
		case 2:res=n1-n2;break;
		case 3:res=n1*n2;break;
		case 4:res=n1/n2;break;
	}
	printf("%d\n", res);
	printf("Do you Want to continue?\n");
	scanf("%c", &c);
	scanf("%c", &c);
	
}while(c=='y'||c=='Y');
	
}
