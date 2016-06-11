#include "BubbleSort.hpp"
#include <random>
#include <iostream>

BubbleSort::BubbleSort(std::string sortType)
	: Sort(sortType)
{

}

BubbleSort::~BubbleSort()
{

}

// Start from the tail-end of the list
// compare adjacent items, swap if necessary
// each pass bubbles the smallest element to then-top

void BubbleSort::sort()
{
	for(int i = 0; i < m_list.size(); ++i)
	{
		for(int j = m_list.size() - 1; j > i; --j)
		{
			if(m_list[j - 1] > m_list[j])
			{
				std::swap(m_list[j - 1], m_list[j]);
			}
		}
	}
}

