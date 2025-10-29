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