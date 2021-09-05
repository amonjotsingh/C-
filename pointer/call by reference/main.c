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

int increment( int *number){
    
    *number = *number +1;
}

int main(void) {
    int num;
    num = 10;
    increment(&num);
    printf("%d",num);
    
    return EXIT_SUCCESS;
}
