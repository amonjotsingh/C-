/*PERFORMING POINTER ARITHMETIC USING ARRAYS*/
#include<stdio.h>
int main()
{
	printf("==========================================Character pointer");
	char arr[3]={'A','B','C'};
	char *ptr;
	ptr=&arr;
	printf("\nvalue at *ptr is %c",*ptr);
	printf("\nvalue at *(ptr+1) is %c",*(ptr+1));
	printf("\nvalue at *(ptr+2) is %c",*(ptr+2));

	printf("\n\nadress of *ptr is %x",ptr);
	printf("\nadress of *(ptr+1) is %x",(ptr+1));
	printf("\nadress of *(ptr+2) is %x",(ptr+2));

	printf("\n\nsize of char pointer is %d bytes",sizeof *ptr);

	printf("============================================Integer pointer");
	int arr1[3]={10,20,30};
	int *ptr1;
	ptr1=&arr1;
	printf("\n\nvalue at *ptr1 is %d",*ptr1);
	printf("\nvalue at *(ptr1+1) is %d",*(ptr1+1));
	printf("\nvalue at *(ptr1+2) is %d",*(ptr1+2));

	printf("\n\nadress of *ptr1 is %x",ptr1);
	printf("\nadress of *(ptr+1) is %x",(ptr1+1));
	printf("\nadress of *(ptr+2) is %x",(ptr1+2));

	printf("\n\nsize of integer pointer is %d bytes",sizeof *ptr1);

	printf("============================================Double pointer");

	double arr2[3]={10.0056,20.0025,30.25};
	double *ptr2;
	ptr2=&arr2;
	printf("\n\nvalue at *ptr2 is %f",*ptr2);
	printf("\nvalue at *(ptr2+1) is %f",*(ptr2+1));
	printf("\nvalue at *(ptr2+2) is %f",*(ptr2+2));

	printf("\n\nadress of *ptr2 is %x",ptr2);
	printf("\nadress of *(ptr2+1) is %x",(ptr2+1));
	printf("\nadress of *(ptr2+2) is %x",(ptr2+2));

	printf("\n\nsize of double pointer *ptr2 is %d bytes",sizeof *ptr2);

	return 0;

}
