#include<stdio.h>
#include<math.h>

int numOfDigits(int num)
{
    int n=0;
    while(num>0)
    {
        num/=10;
        n++;
    }
    return n;
}

int main()
{
   int num;
   printf("Enter Number \n");
   scanf("%d", &num);
   printf("Number of Digits: %d", numOfDigits(num));
   return 0;

}
