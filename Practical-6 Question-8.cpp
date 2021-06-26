#include<stdio.h>
#include<math.h>

float dist(int x, int y)
{
	return sqrt(x*x+y*y);
}

int main()
{
	int x, y, cx, cy, r;
	printf("Enter Radius\n");
	scanf("%d", &r);
	printf("Enter Center Coordinates\n");
	scanf("%d%d", &cx, &cy);
	printf("Enter Coordinates of the point\n");
	scanf("%d%d", &x, &y);
	x=x-cx;
	y=y-cy;
	if(dist(x, y)>r)
	printf("Point Lies outside the circle\n");
	else if(dist(x, y)<r)
	printf("Point Lies inside the circle\n");
	else
	printf("Point lies on the circle");
	return 0;
}
