#include<stdio.h>
int main()
{
    int year;
    char result;
    printf("enter the year to check if it is a leap year or not \n");
    scanf("%d",&year);
    result =  ((year % 4) == 0) ? 'Y' : 'N';
    printf ("%c",result);
    return 0 ;
}
