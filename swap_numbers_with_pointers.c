

/*USING POINTER TO SWAP NUMBERS*/
#include<stdio.h>
int main()
{
	int i=20,j=30,k=40;
	int *ip,*jp,*kp;
	ip=&i;
	jp=&j;
	kp=&k;
	printf("values of i,j,k that are stored in *ip,*jp,*kp are %d, %d, %d",i,j,k);
	int temp=*jp,temp2=*kp;
	*jp=*ip;
	*kp=temp;
	*ip=temp2;
	printf("\nvalues of i,j,k that are stored in *ip,*jp,*kp after swapping are %d, %d, %d",i,j,k);


	return 0;
}
