#include "PriorityQueue.hpp"
#include <iostream>

template <class Type>
PriorityQueue<Type>::PriorityQueue()
	: m_size(0), m_capacity(1)
{
	m_heap = new Type[1];
}

template <class Type>
PriorityQueue<Type>::~PriorityQueue()
{
	delete[] m_heap;
}

template <class Type>
int PriorityQueue<Type>::getSize() const
{
	return m_size;
}

template <class Type>
bool PriorityQueue<Type>::isEmpty() const
{
	return 0 == m_size && nullptr == m_heap;
}

template <class Type>
void PriorityQueue<Type>::insert(Type item)
{
	// Verify we have enough space on the heap, else allocate more
	if(m_size == m_capacity)
	{
		m_capacity *= 2;
		Type* newHeap = new Type[m_capacity];
		memcpy(newHeap, m_heap, m_capacity * sizeof(Type));
		delete[] m_heap;
		m_heap = newHeap;
	}

	// Start at the tail-end of the heap
	// Check if parent is less than new item, if so, swap the parent and child
	// At the end, child will be the proper place of item in heap
	int child = m_size++;

	while(child != 0 && m_heap[(child - 1)/2] < item)
	{
		m_heap[(child - 1)/2] = m_heap[child];
		child = (child - 1) / 2;
	}

	m_heap[child] = item;

}

template <class Type>
Type PriorityQueue<Type>::remove()
{
	return nullptr;
}

template <class Type>
void PriorityQueue<Type>::printQueue() const
{
	std::cout << "[";
	for(int i = 0; i < m_size; i++)
	{
		std::cout << m_heap[i] << " ";
	}
	std::cout << "]" << std::endl;
}
