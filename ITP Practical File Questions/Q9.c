#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("Enter the three Numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The Greatest of the three is: %d", (a>b)?((a>c)?a:c):((b>c)?b:c));
}
