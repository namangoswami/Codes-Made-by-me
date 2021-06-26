//WAP to demonstrate the usage of post and preincrement operator
#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter The value of a\n");
	scanf("%d", &a);
	printf("a=%d", a);
	b=a++;
	printf("\nAfter using post increment,\na=%d, b=%d", a, b);
	b=++a;
	printf("\nAfter using pre increment, \na=%d, b=%d", a, b);
	return 0;
}
