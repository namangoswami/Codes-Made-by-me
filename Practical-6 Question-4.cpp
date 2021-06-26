#include<stdio.h>


int main()
{
	int angle=180, temp, i;
	for(i=0;i<2;i++)
	{
		printf("Enter Angle %d: ", i+1);
		scanf("%d", &temp);
		angle=angle-temp;
	}
	printf("Third Angle is: %d\n", angle);
	float radian=angle*3.15/180;
	printf("Third Angle in Radian is: %f", radian);
	return 0;
	
}
