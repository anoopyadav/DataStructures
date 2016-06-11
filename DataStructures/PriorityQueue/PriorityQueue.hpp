#pragma once

template <class Type>
class PriorityQueue
{
public:
	PriorityQueue();
	~PriorityQueue();

	int getSize() const;
	bool isEmpty() const;
	void insert(Type item);
	Type remove();

private:
	int m_size;
	Type* m_heap;
};

#include "PriorityQueue.tcc"
