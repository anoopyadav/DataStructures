#pragma once
#include <vector>

namespace
{
	const int kInvalidIndex = -1;
}

template <class Type>
class BinarySearch
{
public:
	BinarySearch(std::vector<Type> list);
	~BinarySearch();

	void sortList();
	int findItem(Type item);

private:
	std::vector<Type> m_list;
};

#include "BinarySearch.tcc"
