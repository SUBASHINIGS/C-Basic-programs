#include <stdio.h>

int main()
{
    int a,rem,sum=0,fact;
    printf("enter a number:");
    scanf("%d",&a);
    int temp=a;
    while(a>0)
    {
        fact=1;
        rem=a%10;
       
        for(int i=1;i<=rem;i++)
        fact=(fact*i);
       
        sum+=fact;
        a=a/10;
       
    }
    if(temp==sum)
    printf("%d is Strong number",sum);
    else
    printf("%d is not strong no.",temp);
    return 0;
}