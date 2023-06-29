#include <stdio.h>
#include <conio.h>
int main()
{
 int n,count,j,i,k;


 printf("enter the size of the array : "); 
 scanf("%d",&n);
  int a[n],visit[n];
for(i=0;i<n;i++){
 	printf("\na[%d]",i);
 	scanf("%d",&a[i]);}
 
 for(int i=0;i<n;i++)
 {
 	
 	if(visit[i]!=1)
 	{
 	   
 	   count=1;
       for(j=i+1;j<n;j++)
       {
   	      
   	      if(a[i]==a[j])
    	  {
    	    	count++;  
    	    	visit[j]=1;  
    	  }
       }
       printf("\n %d occurs %d times",a[i],count);
       
    }
 }
 return 0;
}