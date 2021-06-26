#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Sum of %d natural numbers: %d", n, n*(n+1)/2);
   return 0;

}
