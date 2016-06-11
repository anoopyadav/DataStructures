#pragma once
#include <vector>
#include <string>

class Sort
{
public:
	virtual ~Sort();
	virtual void sort() = 0;

	std::string getSortType() const;
	void printList() const;

protected:
	Sort(std::string sortType);
	std::vector<int> m_list;

private:
	std::string m_sortType;
};
