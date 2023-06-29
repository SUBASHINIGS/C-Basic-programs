#include <stdio.h>
int main()
{
    int n,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(a[j]>=a[j+1])
    		{
    		  temp=a[j+1];
    		  a[j+1]=a[j];
    		  a[j]=temp;
    		}
    	}
    }
    
    printf("second largest element=%d",a[n-2]);
    printf("\nsecond smallest element=%d",a[1]);
    printf("\nmiddle element=%d",a[n/2]);
	return 0;
}