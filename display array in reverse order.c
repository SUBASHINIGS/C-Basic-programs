#include <stdio.h>
//#include <conio.h>
int main()
{	
    int arr[5],i;		
    		for(i=0;i<5;i++)	
            {		
                printf("\n enter %d element :",i);	
                	scanf("%d",&arr[i]);	}		
                    //print the elements in array	
                    printf("\n elemnets in array");	for(i=4;i>=0;i--)	
                    {		
                        printf("\n element %d:%d",i,arr[i]);
                	}
        	return 0;
}