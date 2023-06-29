#include <stdio.h>
int main()
{	
    int arr[10],odd[10],eve[10],i,j=0,k=0;	
    	//getting elements	
        for(i=0;i<10;i++)	
        {		
            printf("\n enter %d element :",i);		
            scanf("%d",&arr[i]);	
        }
        // seperating odd and even and storing in seperate array 	
        for(i=0;i<10;i++)	
        {		
            if(arr[i]%2==0)		
            {			
                eve[j]=arr[i];			
                j++;		
            }		
            else		
            {			
                odd[k]=arr[i];			
                k++;		
            }	
        }		
        //print odd elemnts in arrays	
        printf("\nodd elements in array are");	
        for(i=0;i<j;i++)	
        {		
            printf("%d ",odd[i]);	
        }		
        //print even elemnts in arrays	
        printf("\neven elements in array are");	
        for(i=0;i<k;i++)	
        {				
            printf("%d ",eve[i]);	
        }		
        return 0;
}