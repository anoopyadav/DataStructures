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
int PriorityQueue<Type>::getCapacity() const
{
	return m_capacity;
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
	// Pop the root and obtain the tail
	Type poppedItem = m_heap[0];
	Type item = m_heap[--m_size];

	int child = 0;
	int parent = 0;

	// Start at the root, find which child is greater
	// Move that child up one level
	// Stop when child is less than the item
	while((2 * child) + 1 < m_size)
	{
		child = (2 * child) + 1;
		if(child + 1 < m_size && m_heap[child + 1] > m_heap[child])
		{
			child++;
		}
		if(m_heap[child] > item)
		{
			m_heap[parent] = m_heap[child];
			parent = child;
		}
		else
		{
			break;
		}
	}
	m_heap[parent] = item;

	return poppedItem;
}

template <class Type>
void PriorityQueue<Type>::printQueue() const
{
	std::cout << "[ ";
	for(int i = 0; i < m_size; i++)
	{
		std::cout << m_heap[i] << " ";
	}
	std::cout << "]" << std::endl;
}
