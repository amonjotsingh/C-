//mainfile
/*
* proj_queue.c
*
* Created on: Jun. 15, 2020
* Author: Amonjot
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
int main()
{
/* declare and initialize variables */
queue_t queue;
queue.tail = 0;
queue.head = 0;
int loadarr[] = { 52, -29, 36, 1154, 72, 0, 68, 44, 33, 59 };
size_t L = sizeof(loadarr)/sizeof(int);
/* load queue */
size_t i;
for (i=0; i!=L; ++i)
{
printf("queue_tail = %zu, ", queue.tail);
push(&queue, loadarr[i]);
printf("pushing %d\n", loadarr[i]);
}
/* dequeue queue */
int x;
while (queue_empty(&queue) == false)
{
printf("queue.head = %zu, ", queue.head);
x = dequeue(&queue);
printf("dequeueping %d\n", x);
}
return EXIT_SUCCESS;
}
