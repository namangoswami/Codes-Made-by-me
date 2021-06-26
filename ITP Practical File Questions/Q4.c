#include<stdio.h>
#include<math.h>

int main()
{
    int a, r, n;
    int sum;
    printf("Enter a, r and n\n");
    scanf("%d%d%d", &a, &r, &n);
    if(r>1)
    sum=a*(pow(r, n)-1)/(r-1);
    else if(r<1)
    sum=a*(1-pow(r, n))/(1-r);
    else
    sum=n*a;
    printf("%d", sum);
}
