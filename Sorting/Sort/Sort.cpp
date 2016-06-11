#include "Sort.hpp"
#include <iostream>
#include <random>

namespace
{
	const int k_listSize = 20;
}

Sort::Sort(std::string sortType)
	: m_sortType(sortType)
{
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1, 100);

	for(int i = 0; i < k_listSize; ++i)
	{
		m_list.push_back(distribution(generator));
	}
}

Sort::~Sort()
{

}

std::string Sort::getSortType() const
{
	return m_sortType;
}

void Sort::printList() const
{
	std::cout << "[ ";
	for(int i = 0; i < m_list.size(); ++i)
	{
		std::cout << m_list[i] << " ";
	}
	std::cout << "]";
}

