#include<stdio.h>

int main()
{
	float pie=3.14;
	float r;
	float arC, arS, volS;
	printf("Enter Radius\n");
	scanf("%f", &r);
	arC=pie*r*r;
	arS=4*pie*r*r;
	volS=4*pie*r*r*r/3;
	printf("Area of Circle: %f\nArea of Sphere: %f Volume of Sphere: %f", arC, arS, volS);
	return 0;
}
