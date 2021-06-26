#include<stdio.h>

int main()
{
	long long int num, maxInput, sum=0, i=0;
	scanf("%d", &maxInput);
	loop:
	//scanf("%d", &num);
	//sum=sum+num;
	printf("%d\n", i+1);
	i++;
	if(i<maxInput)
	goto loop;
//	printf("%d", sum);
	return 0;
}
