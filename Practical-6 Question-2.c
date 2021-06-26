#include<stdio.h>
int main()
{
	float km, mi;
	printf("Provide input in Km/h\n");
	scanf("%f", &km);
	mi=km/1.609;
	printf("Speed in Miles/h: %f", mi);
	return 0;
}
