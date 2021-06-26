#include<stdio.h>
#include<math.h>

int main()
{
   int a=1, b=1, c;
   int limit;
   printf("Enter the number upto which the series should be printed\n");
   scanf("%d", &limit);
       printf("%d ", a);

   while(a<limit&&b<limit)
   {
    printf("%d ", a);
       c=a;
       a=a+b;
       b=c;
   }
   return 0;

}
