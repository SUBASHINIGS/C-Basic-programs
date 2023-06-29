#include <stdio.h>

int main()
{
	int a[10],sum=0,max=0,i,j;
	printf("enter the array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++)
	{
		sum+=a[j];
		if(max<sum)
		max=sum;
		else if(sum<0)
		sum=0;
	}
	printf("%d",max);
return 0;
}