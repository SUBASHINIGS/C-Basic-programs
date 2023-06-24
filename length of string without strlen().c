
#include <stdio.h>
int main()
{
	int i;
	//char s[]="hello world";//method 1
	
	
	char str[100];
	printf("enter string:");
    scanf("%[^\n]",&str);// method 2
    
    
	for(i=0;str[i]!='\0';i++);
	//for loop with semicolon
	
	printf("length of string:%d",i);
 return 0;
 
}