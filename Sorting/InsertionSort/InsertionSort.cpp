#include "InsertionSort.hpp"

InsertionSort::InsertionSort(std::string sortType)
	: Sort(sortType)
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::sort()
{
	// Start with a sorted list of 1 element
	// Insert the 1st element from the unsorted part into it's proper place
	// Keep shifting elements in the sorted part by 1 when they are larger than key
	for(int i = 1; i < m_list.size(); i++)
	{
		int j = i - 1;
		int item = m_list[i];
		while(j > -1 && m_list[j] > item)
		{
			m_list[j + 1] = m_list[j];
			j--;
		}
		m_list[j + 1] = item;
	}
}
