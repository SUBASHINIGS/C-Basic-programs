#include <stdio.h>
#include <conio.h>

int main()
{
    int rem,rev=0,temp,num;
    
    printf("enter a num:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    
    if(temp==rev)
    printf("%d is palindrome",temp);
    else
    printf("not palindrome");
    
    return 0;
}