#include<stdio.h>

int factorial(int n)
{
	if(n==1)
	return 1;
	return n*factorial(n-1);
}
int main()
{
	float i=1;
	float res=0;
	for(i=1;i<=7;i++)
	{
		res=res+i/factorial(i);
	//		printf("%f ", res);
	}
	printf("%f", res);
	return 0;
}
