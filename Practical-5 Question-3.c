#include<stdio.h>
#include<math.h>


int dist(int a[2], int b[2])
{
    int d1=a[0]-b[0];
    int d2=a[1]-b[1];
    int dist=sqrt(d1*d1+d2*d2);
    return dist;

}
float slope(int a[2], int b[2]) //Just to show that the program can be calculated using slope of the points
{
    int d1=-a[0]+b[0];
    int d2=-a[1]+b[1];
    if(d2==0)
	return 0;
    
	float ans=d2/d1;
    return ans;
}

int main()
{
    int p[3][2], i;
    for(i=0;i<3;i++)
    {
        printf("Enter Coordinates of Point: %d\n", i+1);
        scanf("%d%d", &p[i][0], &p[i][1]);
    }
    if(dist(p[0], p[1])+dist(p[1], p[2])==dist(p[0], p[2]))
    {
        printf("Points Fall in straight Line\n");
    }
    else
    {
        printf("Points do not fall in straight line\n");
    }
    return 0;
}
