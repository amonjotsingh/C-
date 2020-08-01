//check if the year is leap or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int yr;
	printf("enter year you want to check");
	scanf("%d",&yr);
	if(yr%4==0)
		printf("year you entered is leap year");
		else
			printf("year you entered is not leap year");

return 0;

}
