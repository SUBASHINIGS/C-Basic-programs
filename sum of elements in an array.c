#include <stdio.h>
int main()
{	
    //int arr[5],i,sum=0;	
    int i,sum=0;	 
    int arr1[]={1,2,3,4,5};		
    /*input array elemnts	
    for(i=0;i<5;i++)	
    {		
        printf("\n enter %d element :",i);		
        scanf("%d",&arr[i]);	
    }	*/		
    for(i=0;i<5;i++)	
    {		
        sum=sum+arr1[i];		
        //printf("\n element %d:%d",i,arr[i]);	
    }		
    printf("sum=%d",sum);	
    return 0;
}