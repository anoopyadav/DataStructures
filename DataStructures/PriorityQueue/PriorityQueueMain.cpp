#include "PriorityQueueMain.hpp"
#include "PriorityQueue.hpp"
#include <iostream>

int PriorityQueueMain()
{
	PriorityQueue<int> priorityQueue;

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

	std::cout << "Queue Size: " << priorityQueue.getSize() << std::endl;
	std::cout << "Queue Capacity: " << priorityQueue.getCapacity() << std::endl;

	std::cout << "Get highest priority item: " << priorityQueue.remove() << std::endl;
	std::cout << "Queue Size: " << priorityQueue.getSize() << std::endl;
	std::cout << "Queue Capacity: " << priorityQueue.getCapacity() << std::endl;
	priorityQueue.printQueue();

	return 0;
}
