#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		q[i].value = i + 1;
	}
}
void cleanQueue(Queue* q)
{

}

void enqueue(Queue* q, unsigned int newValue)
{

}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{

}

bool isEmpty(Queue* s)
{

}
bool isFull(Queue* s)
{

}