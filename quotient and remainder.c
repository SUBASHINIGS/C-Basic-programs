#include <stdio.h>
int main()
{	
     int a,qtnt,rem;	
     printf("enter a num:");	
     scanf("%d",&a);		
     qtnt=a/12;	
     rem=a%12;		
     printf("the quotient is: %d \nthe remainder is:%d",qtnt,rem);	
     return 0;
}