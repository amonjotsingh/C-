/*
* source.c
*
* Created on: Jun 15, 2020
* Author: amonjot
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
//FUNCTION DECLARATION TO CHECK IF QUEUE IS EMPTY
bool queue_empty(queue_t *s)
{
if ((s->head) == (s->tail))
{
return true;
}
else
{
return false;
}
}
/*
* push() implementation
*/
void push(queue_t *s, int x)
{
s->data[(s->tail)++] = x;
/*PUSH DATA AND THEN INCREMENT TO NEXT DATA LOCATION*/
return;
}
/*
* dequeue() implementation
*/
int dequeue(queue_t *s)
{
if (queue_empty(s))
{
printf("underflow error!");
exit(EXIT_FAILURE);
}
else
{
return (*s).data[(s->head)++];
/* derefrencing the pointed address and then moving to next adress*/
}
}
