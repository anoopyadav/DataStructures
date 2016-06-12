#pragma once
#include <string>
#include "../Sort/Sort.hpp"

class InsertionSort : public Sort
{
public:
	InsertionSort(std::string sortType);
	~InsertionSort();

	void sort();
};
