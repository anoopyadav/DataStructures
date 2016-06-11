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

	void printQueue() const;

private:
	int m_size;
	int m_capacity;
	Type* m_heap;
};

#include "PriorityQueue.tcc"
