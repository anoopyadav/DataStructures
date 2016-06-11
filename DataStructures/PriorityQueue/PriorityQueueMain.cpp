#include "PriorityQueueMain.hpp"
#include "PriorityQueue.hpp"
#include <iostream>

int PriorityQueueMain()
{
	PriorityQueue<int> priorityQueue;
	std::cout << "Size: " << priorityQueue.getSize() << std::endl;
	return 0;
}
