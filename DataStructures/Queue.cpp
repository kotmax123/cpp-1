#include "Queue.h"
#include <iostream>

int main()
{
	int size = 0;
	std::cout << "enter queue size:" << std::endl;
	std::cin >> size;
	while (size <= 0)
	{
		std::cout << "unavailable queue size.\nenter queue size:" << std::endl;
		std::cin >> size;
	}
	Queue* q = new Queue[size];
	initQueue(q, size);

	
	return 0;
}

void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		q[i].value = i + 1;
	}
}