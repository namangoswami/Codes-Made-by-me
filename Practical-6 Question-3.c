#include<stdio.h>

int main()
{
	int totaltime;
	float hours, minutes, seconds;
	printf("Enter The total seconds\n");
	scanf("%d", &totaltime);
	seconds=totaltime%60;
	totaltime/=60;
	minutes=totaltime%60;
	totaltime/=60;
	hours=totaltime;
	printf("Hours: %f\nMinutes: %f\nSeconds: %f\n", hours, minutes, seconds);
	return 0;
}
