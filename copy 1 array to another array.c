#include <stdio.h>
int main()
{
    int arr1[5], arr2[5],i;
     printf("enter elemnts in arr:");
    //store in array    
    for(i=0;i<5;i++)
    {
         	scanf("%d",&arr1[i]);
    }
             //copy elements in array 1 to array 2    
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
     //print array 1    
     printf("\n elements in array 1:\n");
     for(i=0;i<5;i++)
     {
        printf("%d ", arr1[i]);
    }
     //pribt array 2    	
     printf("\n elements in array 2:\n");
     	for(i=0;i<5;i++)	
        printf("%d ", arr2[i]);	
        return 0;
}