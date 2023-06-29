#include <stdio.h>
int main()
{
     int arr1[10],arr2[10],arr3[10];
     int s1,s2,s3;
     int i,j;
     //get array 1   
     printf("enter size of array 1");
     scanf("%d",&s1);
     printf("enter elements in array 1");
     for(i=0;i<s1;i++)
     {
         printf("\nenter %d elemnt",i);	 
         scanf("%d",&arr1[i]);
         }
         //get array 2  
         printf("enter size of array 2");
         scanf("%d",&s2);
         printf("enter elements in array 2");
         for(i=0;i<s1;i++)
         {
            	 printf("\nenter %d elemnt",i);
                  scanf("%d",&arr2[i]);
         }
         //merge 2 array size   
         s3=s1+s2;
         //merge 2 array   
         for(i=0;i<s1;i++)
         { 
            arr3[i]=arr1[i];
        }
            for(j=0;j<s1;j++)
            { 
                arr3[i]=arr2[j];
                i++;
            }
                printf("merged array");
                for(i=0;i<s3;i++)
                { 
                    printf("%d ",arr3[i]);
                }	
                    return 0;
}