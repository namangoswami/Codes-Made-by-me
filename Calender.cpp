#include <stdio.h>


//Function to return Month Name 
char* getMonthName(int monthNumber)
{
    char* month;
  
    switch (monthNumber) {
    case 0:
        month = "January";
        break;
    case 1:
        month = "February";
        break;
    case 2:
        month = "March";
        break;
    case 3:
        month = "April";
        break;
    case 4:
        month = "May";
        break;
    case 5:
        month = "June";
        break;
    case 6:
        month = "July";
        break;
    case 7:
        month = "August";
        break;
    case 8:
        month = "September";
        break;
    case 9:
        month = "October";
        break;
    case 10:
        month = "November";
        break;
    case 11:
        month = "December";
        break;
    }
   return month;
}
  
// Function to return the number of days
// in a month
int numberOfDays(int monthNumber, int year)
{
    if (monthNumber == 0)
        return (31);
  
    if (monthNumber == 1) {
        if (year % 400 == 0
            || (year % 4 == 0
                && year % 100 != 0))
            return (29);
        else
            return (28);
    }
  
    if (monthNumber == 2)
        return (31);
  
    if (monthNumber == 3)
        return (30);
  
    if (monthNumber == 4)
        return (31);
  
    if (monthNumber == 5)
        return (30);
  
    if (monthNumber == 6)
        return (31);
  
    if (monthNumber == 7)
        return (31);
  
    if (monthNumber == 8)
        return (30);
  
    if (monthNumber == 9)
        return (31);
  
    if (monthNumber == 10)
        return (30);
  

    if (monthNumber == 11)
        return (31);
}

//Function to print Details of Months of the selected year
void printcaldetall(int monthdays, int &yuc)
{
	int i=1;
	printf("   Mon   Tue   Wed   Thu   Fri   Sat   Sun\n");
	while(i<yuc)
	{
		printf("      ");
		i++;
	}
	
	
	for(int i=1;i<=monthdays;i++)
	{
	
		printf("%5d ", i);	
		if(yuc%7==0)
		{
			yuc=1;
			printf("\n");
		}
		else
		yuc++;
	}

}

//Function to print the Details of the selected month
void printcaldet(int monthdays, int &yuc, int flag)
{
	int i=1;
	if(flag==1)
	{
		printf("   Mon   Tue   Wed   Thu   Fri   Sat   Sun\n");

		while(i<yuc)
		{
			printf("      ");
			i++;
		}
	
	}
	for(int i=1;i<=monthdays;i++)
	{
		if(flag==1)
		printf("%5d ", i);	
		if(yuc%7==0)
		{
			yuc=1;
			if(flag==1)
			printf("\n");
		}
		else
		yuc++;
	}

}

//Main Function Where all the frontend is done as well as the main loops
int main()
{
	int mno;
	int yuc, ytemp;
	printf("Enter Year to Print Calender\n");
	scanf("%d", &ytemp);
	printf("1. Print Full Calender\n2.January\n3.February\n4.March\n5.April\n6.May\n7.June\n8.July\n9.August\n10.September\n11.October\n12.November\n13.December\n");
	int ch;
	scanf("%d", &ch);
	printf("\n");
	yuc=((ytemp-1)+(ytemp)/4)%7;
	if(yuc==0)
	yuc=7;
	int i=1;
	if(ch==1) //This if encloses the loop which prints all the months
	{
		for(i=1;i<=12;i++)
		{
			printf("%s\n\n",getMonthName(i-1));
			printcaldetall(numberOfDays(i-1, ytemp), yuc);
			printf("\n\n");
		}
	}
	else //The other option where Specific option of month is chosen 
	{
		for(i=1;i<=12;i++)
		{
			if(i+1==ch)
			{
				printf("%s\n\n",getMonthName(i-1));
				printcaldet(numberOfDays(i-1, ytemp), yuc, 1);
				printf("\n\n");
				break;
			}
			else
			{					
				yuc=yuc+(numberOfDays(i-1, ytemp)-28);  
				if(yuc>7)
				yuc=yuc-7;
			}	
		}
	}
	return 0;
}

