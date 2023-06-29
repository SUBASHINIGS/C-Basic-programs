#include <stdio.h>
int main()
{

	int a[10],b[10],c[10],n1,n2,i,j,k=0,count=0;
	//get array 1
	printf("enter the size of array1:");
	scanf("%d",&n1);
	printf("\nenter array 1 elements:\n");
	for(i=0;i<n1;i++)
	{
		printf(" enter [%d] elemnt:",i);
		scanf("%d",&a[i]);
	}
	//get array 2
	printf("enter the size of array2:");
	scanf("%d",&n2);
	printf("\nenter array 2 elements:\n");
	for(i=0;i<n2;i++)
	{
		printf(" enter [%d] elemnt:",i);
		scanf("%d",&b[i]);
	}
	//compare both array
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		if(a[i]==b[j])
			{
		        //printf(" \n%d",a[i]);
		        count++;
				//break;
			}
	    }
	}
	if(count==n2)
	printf("\narray 2 is subarray of array 1");
	else
	printf("\narray 2 is not a subarray of array 1");
	return 0;
}