#include<stdio.h>
int main()
{
int unsigned i=50,*in;
double d=54.56, *dou;
char c='A', *cha;
in=&i;
dou=&d;
cha=&c;
printf("the adress of double d is %x",dou);
printf ("\nthe adress of double pointer *dou is %x",dou);

printf("\n\nthe adress of int i is %x",in);
printf ("\nthe adress of integer pointer *in is %x",in);

printf("\n\nthe adress of char c is %x",cha);
printf ("\nthe adress of character pointer *cha is %x",cha);

printf("\n\nthe value of integer i is %d",i);
printf("\nthe value of integer pointer *in is %d",*in);
printf("\n\nthe value of double d is %f",d);
printf("\nthe value of double pointer *dou is %f",*dou);

printf("\n\nthe value of character c is %c",c);
printf("\nthe value of character pointer *cha is %c",*cha);

printf("\n\nthe size of int i is %ld bytes",sizeof i);
printf("\nthe size of int pointer *in is %ld bytes", sizeof *in);
printf("\n\nthe size of double d is %ld bytes",sizeof d);
printf("\nthe size of double pointer dou is %ld bytes ",sizeof *dou);
printf("\n\n the size of char c is %ld bytes",sizeof c);
printf("\nthe size of char pointer *cha is %ld bytes",sizeof *cha);
return 0;
}
