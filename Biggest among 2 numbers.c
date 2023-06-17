#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b;
	printf("enter 2 no.s:");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	printf("%d is bigger than %d",a,b);
	else
	printf("%d is bigger than %d",b,a);
return 0;
}