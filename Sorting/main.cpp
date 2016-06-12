#include "Sort/Sort.hpp"
#include "BubbleSort/BubbleSort.hpp"
#include "InsertionSort/InsertionSort.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	Sort* sort = new BubbleSort("Bubble Sort");
	std::cout << "Unsorted List:" << std::endl;
	sort->printList();
	std::cout << std::endl;

	std::cout << "List Sorted with " << sort->getSortType() << ":" << std::endl;
	sort->sort();
	sort->printList();
	std::cout << std::endl;

	delete sort;
	sort = new InsertionSort("Insertion Sort");
	std::cout << "Unsorted List:" << std::endl;
	sort->printList();
	std::cout << std::endl;

	std::cout << "List Sorted with " << sort->getSortType() << ":" << std::endl;
	sort->sort();
	sort->printList();
	std::cout << std::endl;

	return 0;
}
