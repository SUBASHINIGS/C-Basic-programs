#include <stdio.h>
int main()
{
   int n1;
   printf("Enter a number");
   scanf("%d",&n1);
   
   for(int i=1;i<=10;i++)
   {
   	  printf("%d * %d = %d\n",i,n1,n1*i);
   }
   return 0;
}