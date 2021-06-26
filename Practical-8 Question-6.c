#include<stdio.h>

int main()
{
	float r;
	float area, vol;
	printf("Enter Radius\n");
	scanf("%f", &r);
	area=3.14*r*r;
	vol=4*3.14*r*r*r/3;
	printf("Area: %f\nVolume: %f\n", area, vol);
	if(vol>r&&area>r)
	{
		printf("Both Volume and area are greater than radius\n");
	}
	else if(vol>r)
	{
		printf("Volume is greater than radius\n");
	}
	else if(area>r)
	{
		printf("Area is greater than radius\n");
	}
	else
	{
		printf("Radius is greater than volume and area\n");
	}
	return 0;
}
