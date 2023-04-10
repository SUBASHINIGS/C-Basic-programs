#include <stdio.h>
#include <conio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	
	/*if(year%4==0 || year%400==0)
	printf("the given year is leap year");
	else
	printf("the given year is not leap year");
	*/
	(year%4==0 ||year%400==0) ? printf("leap year"):printf("not leap year"); //using ternary operator
	return 0;
	
}