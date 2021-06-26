#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    printf("Enter a, b, and c\n");
    scanf("%f%f%f", &a, &b, &c);
    float d;
    d=b*b-4*a*c;
    if(d>0)
    {
        float r1, r2;
        r1=r2=-b/(2*a);
        d=sqrt(d)/(2*a);
        r1+=d;
        r2-=d;
        printf("Roots: %f %f", r1, r2);
    }
    else if(d==0)
    {
        float r=-b/(2*a);
        printf("Roots: %f %f", r, r);

    }
    else
    {
        d*=-1;
        float r;
        r=-b/(2*a);
        d=sqrt(d)/(2*a);
        printf("Roots: %f+%fi %f-%fi", r, d, r, d);
    }
    
}
