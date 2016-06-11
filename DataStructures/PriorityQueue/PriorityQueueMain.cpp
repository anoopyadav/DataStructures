#include "PriorityQueueMain.hpp"
#include "PriorityQueue.hpp"
#include <iostream>

int PriorityQueueMain()
{
	PriorityQueue<int> priorityQueue;
	std::cout << "Size: " << priorityQueue.getSize() << std::endl;
	priorityQueue.insert(40);
	priorityQueue.insert(31);
	priorityQueue.insert(28);
	priorityQueue.insert(25);
	priorityQueue.insert(17);
	priorityQueue.insert(15);
	priorityQueue.insert(10);
	priorityQueue.insert(16);
	priorityQueue.insert(12);

	priorityQueue.printQueue();
	return 0;
}
