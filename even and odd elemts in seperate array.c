#include <stdio.h>
int main()
{	
    int arr[5],eve[5],odd[5];	
    int i,j;	
    printf("\nenter elements in array:");	
    for(i=0;i<5;i++)	
    {		
        scanf("%d",&arr[i]);	
    }		
    for(i=0;i<5;i++)	
    {		
        if(arr[i]%2==0)		
        {			
            eve[i]=arr[i];					
        }		
        else		
        {			
            odd[i]=arr[i];		
        }	
    }		
    printf("\nelements in the array are:");	
    for(i=0;i<5;i++)	
    {		
        printf("%d  ",arr[i]);	
    }		
    printf("\nodd elements in the array are:");	
    for(i=0;i<5;i++)	
    {		
        if(odd[i]%2!=0)		
        printf("%d ",odd[i]);	
    }		
        printf("\neven elements in the array are:");	
        for(i=0;i<5;i++)	
        {		
            if(eve[i]%2==0)		
            {		
                printf("%d ",eve[i]);			
            }	
        }	
        return 0;	
}