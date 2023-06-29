#include <stdio.h>
int main()
{
     int arr[5],i,j,k,count=0;
     printf("enter elemnts in array:");
     //input the array 
     for(i=0;i<5;i++)
     {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {		
            if(arr[i]!=arr[j])	
            {			
                count++;					
                arr[i]=k;		
                //printf("\nthe unique elements are:%d",arr[i]); 			
                break;		
                }	
                else if(i==k)	
                {		
                    printf("%d",k);
            	}
        }
        printf("\ntotal no. of unique elements:%d",count);
        printf("\n unique elements are:%d ",k);	
        return 0;
    }
}