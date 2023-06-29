#include <stdio.h>#include <string.h>
int main() 
{
    char str1[10],str2[10],i,j,count=0;
    printf("enter string 1:\n");
    scanf("%s",&str1);
    printf("enter string 2:\n");
    scanf("%s",&str2);
    if(strlen(str1)==strlen(str2))
    {
        for(i=0;i<strlen(str1);i++)
        {
            for(j=0;j<strlen(str2);j++)
            {
                if(str1[i]==str2[j])
                {
                    count++;
                    break;
                }
            }
        }
         if(count==strlen(str1))
         printf("\n anagrams");
         else
          printf("not anagrams");
    }
    else
    printf("\n strings are not equal"); 
    return 0;
    }