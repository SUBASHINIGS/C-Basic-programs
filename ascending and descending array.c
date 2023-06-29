#include <stdio.h>
int main()
{	
    //int a[]={1,5,6,2,7,9,10};	
    //printf("enter the array:");	
    int i,j,k,temp;	
    //get size of array	
    int n;	
    printf("enter the size of array;");	
    scanf("%d",&n);	
    //n=sizeof(a)/sizeof(a[0]);	
    int a[n],b[n];	
    for(i=0;i<n;i++)	
    {		
        printf("\nenter a[%d] : ",i);	
        	scanf("%d",&a[i]);		
    }	
    //sort in descending order	
    for(i=0;i<n;i++)	
    {		
        for(j=0;j<n-1;j++)		
        {		
            if(a[j]<=a[j+1])		
            {			
                temp=a[j+1];			
                a[j+1]=a[j];			
                a[j]=temp;		
            }		
        }	
    }	
    //store descended array in seperate array	
    for(i=0;i<n;i++)	
    {		
        b[i]=a[i];	
    }		
    //sort in ascending order	
    for(int k=0;k<n;k++)	
    {		
        for(j=0;j<n-1;j++)		
        {		
            if(a[j]>=a[j+1])		
            {			
                temp=a[j+1];			
                a[j+1]=a[j];			
                a[j]=temp;		
            }		
        }	
    }	
    //primt array	
    printf("\nascending array:\n");	
    for(i=0;i<n;i++)	
    {		
        printf(" %d ",a[i]);	
    }	
    printf("\ndescending array:\n");	
    for(i=0;i<n;i++)	
    {		
        printf(" %d ",b[i]);	
    }		
    return 0;
    }