#include <stdio.h>
int main()
{	
    int n, i,j,a[100],temp,p,val;	
    printf("enter the size of array:");	
    scanf("%d",&n);	
    //get elements in array	
    for(i=0;i<n;i++)	
    {		
        printf("\n enter element %d:",i);		
        scanf("%d",&a[i]);	
        }	
        //sort array in ascending order	
        for(int i=0;i<n;i++)	
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
        //print sorted array	
        printf("\n existing array\n");	
        for(i=0;i<n;i++)	
        {		
            printf(" %d",a[i]);	
        }	
        //get new element	
        printf("\nenter new element:");	
        scanf("%d",&val);	
        //find the position of new element	
        for(i=0;i<n;i++)	
        {		
            if(val<a[i])		
            {		
                p=i;		
                break;		 
            }		
            else		 
            p= i+1;	}	
            //push the elemnts after the p's position to right	
            for(i=n;i>p;i--)	
            {		
                a[i]=a[i-1];	
            }		
            //store new value in p's position	
            a[p]=val;		
            //print the array after insertion	
            printf("\n array after insertion:\n");	
            for(i=0;i<n+1;i++)	
            {		
                printf(" %d",a[i]);
        	}		
            return 0;
        }