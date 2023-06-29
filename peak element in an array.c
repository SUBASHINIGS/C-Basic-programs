#include <stdio.h>
int main()
{
    int a[]={10,20,15,2,23,90,67},i;
    printf("the peak elemnt is:");
    for(i=0;i<7;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        printf(" %d",a[i]);
        }	
        return 0;
    }