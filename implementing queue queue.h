//HEADER FILE
/*
* queue.h
*
* Created on: Jun 15, 2020
* Author: amonjot
*/
#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 1024 //DEFINING VALUE OF N
/*
* struct and typedef declarations
*/
struct queue_struct
{
int data[N];
size_t tail;
size_t head;
};
/*STRUCT DECLARATION TO queue_t*/
typedef struct queue_struct queue_t;
/*declaring function to be used */
bool stack_empty(queue_t *s);
void push(queue_t *s, int x);
int dequeue(queue_t *s);
#endif /* QUEUE_H_ */
