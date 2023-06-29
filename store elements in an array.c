#include <stdio.h>
//#include <conio.h>
int main()
{	
    int arr[5],i;		
    /*get the size of array	
    printf("enter the number of elemnets in arr");	
    scanf("%d",&n);*/			
    //getting input elements from user amd storing in array		
    for(i=0;i<5;i++)	
    {		
        printf("\n enter %d element :",i);		
        scanf("%d",&arr[i]);	
    }		
    //print the elements in array	
    printf("\n elemnets in array");	
    for(i=0;i<5;i++)	
    {		
        printf("\n element %d:%d",i,arr[i]);	
    }	
        return 0;
}