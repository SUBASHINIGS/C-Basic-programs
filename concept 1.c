/*In a town,% of men is 52.the % of total literacy is 48.
If total % of literate men is 35 of total population,write a program to find 
total number of illiterate men and women,if the population of town is 80000.*/
#include <stdio.h>
int main() 
{
    int totpop=80000,totmen,totwom,litmen,ilitmen,totlit,ilit,ilitwom;
    totmen = (52*totpop)/100;
    totwom = totpop - totmen;
    litmen = (35*totpop)/100;
    ilitmen = totmen-litmen;
    totlit = (48*totpop)/100;
    ilit = totpop - totlit;
    ilitwom=ilit -ilitmen;
    printf("total population : %d",totpop);
    printf("\ntotal men : %d",totmen);
    printf("\ntotal women : %d",totwom);
    printf("\nliterate men : %d",litmen);
     printf("\nilliterate men : %d",ilitmen);
     printf("\ntotal literate: %d",totlit);
     printf("\nilliterate women : %d",ilitwom);
     return 0;
}