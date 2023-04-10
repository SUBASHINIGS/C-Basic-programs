#include <stdio.h>
int main()
{
	int km,m,ft,in,cm;
	printf("enter km:");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	ft=3280*km;
	in=39370.1*km;
	printf("\nm=%d\nft=%d\nin=%d\ncm=%d",m,ft,in,cm);
	return 0;
}