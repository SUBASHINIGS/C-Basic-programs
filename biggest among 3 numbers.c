#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c;
	printf("enter 3 no.s:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("%d is bigger than %d and %d",a,b,c);
	else if(b>c)
	printf("%d is bigger than %d and %d",b,a,c);
	else if (c>a && c>b)
	printf("%d is bigger than %d and %d",c,a,b);
	else
	printf("all the given no.s are equal");
return 0;
}