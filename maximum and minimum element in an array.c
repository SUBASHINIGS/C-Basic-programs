#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10],max,min;	
    for(int i=0;i<5;i++)	
    {		
        printf("enter %d element:",i);		
        scanf("%d",&a[i]);	
        }	
        //store 1st elemnt in max and min for ref	
        max=a[0];	
        min=a[0];		
        //compare max and min with other elemnts	
        for(int i=0;i<5;i++)	
        {		
            if(max<a[i])	
            {		
                max=a[i];	
                
            }	
            else	
             {	
                min=a[i];	
             }	
        }			
        printf("\nmaximum elemnt is = %d",max);	
        printf("\nminimum elemnt is = %d",min);	
        return 0;
        }