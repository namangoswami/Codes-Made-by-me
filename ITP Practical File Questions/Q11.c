#include<stdio.h>
#include<math.h>

int main()
{
   char c;
   printf("Enter the character\n");
   scanf("%c", &c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {  switch(c)
        {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':printf("The entered character is a vowel\n");break;
       default:printf("Entered Character is a consonant\n");
   }
   }
   else
    printf("Invalid Character\n");

   return 0;

}
