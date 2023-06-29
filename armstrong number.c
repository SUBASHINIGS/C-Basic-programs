#include <stdio.h>
int main()
{

	int n,i=0,j,rem,r,arms,sum=0,power;
	printf("enter a number:");
	scanf("%d",&n);
	int temp=n,s=n;
	while(n>0)
	{
		rem=n%10;
		i++;
		n=n/10;
	}
	while(s>0)
	{
		r=s%10;
		power=1;
		for(j=1;j<=i;j++)
		  power=(power*r);
		sum+=power;
		s/=10;
	}
	if(temp==sum)
	printf("%d is armstrong no.",temp);
	else
	printf("%d is not armstrong no.",temp);
	return 0;
}