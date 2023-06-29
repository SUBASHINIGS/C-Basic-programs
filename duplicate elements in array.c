#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
     printf("\nenter elemnts in array:");
     //input the array 
     for(i=0;i<n;i++)
     {	
        scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {	
            for(j=i+1;j<n;j++)
            {		
                if(arr[i]==arr[j])		
                {		
                    count++;
                		
        			printf("\nthe duplicate elements are:%d",arr[j]);	
                    	break;
            	}
        	}
        }
        printf("\ntotal no. of duplicate elements:%d",count);
        return 0;
}