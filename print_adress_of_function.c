
/*CALLING AND PRINTING ADRESS OF FUNCTIONS CALLED*/
#include<stdio.h>
void foo1(int xval)
{
	int x;
	x = xval;
	printf("adress and value of x is %d and %x",x,&x);
}

void foo2(int dummy)
{
	int y;
	printf("\nadress and value of y is %d and %x",y,&y);
}
int main()
{
	foo1(7);
	foo2(15);
	return 0;
}
