#include "Queue.h"
#include <iostream>

int main()
{
	Queue* q = new Queue;
	initQueue(q, 5);
	q[1].value = 5;
	std::cout << q[1].value << std::endl;

	return 0;
}

void initQueue(Queue* q, unsigned int size)
{
	Queue* u = new Queue[size];
	q = u;
	u = nullptr;
}
void cleanQueue(Queue* q)
{
	
}

void enqueue(Queue* q, unsigned int newValue)
{

}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	
	return 0;
}

bool isEmpty(Queue* s)
{
	return false;
}
bool isFull(Queue* s)
{
	return false;
}