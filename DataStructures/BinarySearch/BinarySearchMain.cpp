#include "BinarySearchMain.hpp"
#include "BinarySearch.hpp"
#include <vector>
#include <iostream>

int BinarySearchMain()
{
	std::vector<int> list  = {8, 9, 7, 5, 4, 6, 3, 2, 1, 0};
	BinarySearch<int> binarySearch(list);

	for(int i = 0; i < list.size(); i++)
	{
		int index = binarySearch.findItem(i);
		std::cout << "Found at:" << index << std::endl;
	}
	return 0;
}
