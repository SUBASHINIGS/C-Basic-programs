#include <stdio.h>
int main()
{
	int n,total_handshakes;
	printf("enter total number of people:");
	scanf("%d",&n);
	total_handshakes=n*(n-1)/2;
	printf("total number of handshakes:%d",total_handshakes);
	return 0;

}