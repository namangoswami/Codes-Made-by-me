#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    if(n%5==0)
    printf("Multiple of 5");
    else
    {
        printf("Not a multiple of 5");
    }
    
}
