/*
 ============================================================================
 Name        : structures.c
 Author      : Amonjot
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
int main(void) {
	puts("this is a test");
	struct member Amon;
	Amon.memberid = 1;
	puts("enter the name of member\n");
	gets(Amon.name);

	printf("user id of Amon is %d",Amon.memberid);
	return EXIT_SUCCESS;
}
