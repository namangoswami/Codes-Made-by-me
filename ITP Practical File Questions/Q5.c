#include<stdio.h>
#include<math.h>

int main()
{
    float f, c;
    printf("Enter Temperature in Celcius\n");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit is: %.2f", f);
    return 0;

}
