#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("Enter the two Numbers\n");
    scanf("%d %d", &a, &b);
    printf("Before Swap,\n a=%d b=%d\n\n", a, b);
    c=b;
    b=a;
    a=c;
    printf("After Swap,\n a=%d b=%d", a, b);
}
