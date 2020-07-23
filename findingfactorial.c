//calculating factorial using recursion
#include<stdio.h>
int rec (int n)
{
	int fact;
	if(n==1)
		return 1;
	else
	{
	fact= n	*rec(n-1);
	return fact;
	}
}
int main()
{
	int num,res;
printf("enter a number you want the factorial of ");
scanf ("%d",&num);
res=rec(num);
printf("\nresult is %d",res);
	return 0;
}
