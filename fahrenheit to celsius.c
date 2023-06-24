#include <stdio.h>
int main()
{
	float f,c;
	printf("enter the degree in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*(5.0/9.0);
	printf("degree in celsius:%f °C",c);
    return 0;
}