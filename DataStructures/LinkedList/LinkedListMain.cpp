#include "LinkedList.hpp"
#include <iostream>

int LinkedListMain()
{
	LinkedList<int> list;

	for(int i = 0; i < 10; i++)
	{
		list.insertInFront(i + 1);
	}

	std::cout << "Size:" << list.getSize() << std::endl << list.toString() << std::endl;

	list.reverse();

	std::cout << "Reverse" << std::endl;
	std::cout << "Size:" << list.getSize() << std::endl << list.toString() << std::endl;

	return 0;
}
