#include <stdio.h>
int main()
{
	int r,n,sum=0,temp;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		sum+=(r*r*r);
		n/=10;
	}
	
	if(temp==sum)
	printf("%d is armstrong no.",temp);
	else
	printf("%d is not armstrong no.",temp);
	
	return 0;
	}