#include <stdio.h>
int main()
{ 
	int rem=0,sum=0,num=82;
	int result=sum;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem);
		num=num/10;
	}
	
	if(result==1)
	printf("%d is happy no.",num);
	else
	printf("%d is not hpy no.");
	
	return result;
}