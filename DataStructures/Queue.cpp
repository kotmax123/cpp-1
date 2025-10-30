#include "Queue.h"
#include <iostream>

//int main()
//{
//	Queue* q = new Queue;
//	initQueue(q, 5);
//	q[1].value = 5;
//	std::cout << q[0].value << std::endl;
//
//	cleanQueue(q);
//	return 0;
//}

void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	Queue* curr = q;

	for (i = 0; i < size; i++)
	{
		curr->value = i;
		if (i != size - 1)
		{
			curr->next = new Queue;
			curr = curr->next;
		}
	}
	curr->next = nullptr;
}
void cleanQueue(Queue* q)
{
	delete[] q;
	q = nullptr;
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
	bool result = false;

	return result;
}
bool isFull(Queue* s)
{
	return false;
}