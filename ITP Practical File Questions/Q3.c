#include<stdio.h>
#include<math.h>

void e1(int x, int y, int a, int b)
{
    float ans=((a*x)+b)/((a*x)-b);
    printf("%f\n", ans );

}
void e2(int x, int y)
{
    float ans= 2.5*log(x) - cos(30)+x*x -y*y  +sqrt(2*x*y);
    printf("%f\n", ans);
}
void e3(int x)
{
    printf("%d\n", (pow(x, 5)+10*pow(x, 4)+8*pow(x, 3)+4*x+2));
}
int main()
{
    int a, b, x, y;
    printf ("Enter a, b, x and y in same order\n");
    scanf("%d%d%d%d", &a, &b, &x, &y);
    e1(x, y, a, b);
    e2(x, y);
    e3(x);
}
