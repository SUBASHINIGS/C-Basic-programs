#include <stdio.h>
int main()
{
	float h,b,l,triangle,square,rectangle;
	
	printf("enter length,breadth & height:");
	scanf("%f%f%f",&l,&b,&h);
	triangle=0.5*b*h;
	square=h*h;
	rectangle=l*b;
	printf("\ntri=%f \nsqr=%f \nrect=%f",triangle,square,rectangle);
	return 0;
	}