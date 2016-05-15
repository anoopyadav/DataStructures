#include "BinarySearch.hpp"

using std::vector;

template <class Type>
BinarySearch<Type>::BinarySearch(vector<Type> list)
	: m_list(list)
{
}

template <class Type>
BinarySearch<Type>::~BinarySearch()
{
}

template <class Type>
void BinarySearch<Type>::sortList()
{
	std::sort(m_list.begin(), m_list.end());
}

template <class Type>
int BinarySearch<Type>::findItem(Type item)
{
	if(m_list.empty())
	{
		return kInvalidIndex;
	}

	sortList();
	int max = m_list.size() - 1;
	int min = 0;
	while(max >= min)
	{
		int index = (max + min) / 2;

		if(item == m_list[index])
		{
			return index;
		}
		else if(item > m_list[index])
		{
			min = index + 1;
		}
		else
		{
			max = index - 1;
		}
	}
	return kInvalidIndex;
}
