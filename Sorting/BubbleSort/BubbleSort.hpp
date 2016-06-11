#pragma once
#include "../Sort/Sort.hpp"
#include <string>
#include <vector>

class BubbleSort : public Sort
{
public:
	BubbleSort(std::string sortType);
	~BubbleSort();

	void sort();
};
