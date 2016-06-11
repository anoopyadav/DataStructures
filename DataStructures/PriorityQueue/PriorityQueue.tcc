#include "PriorityQueue.hpp"

template <class Type>
PriorityQueue<Type>::PriorityQueue()
	: m_size(0), m_heap(nullptr)
{
}

template <class Type>
PriorityQueue<Type>::~PriorityQueue()
{

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

}

template <class Type>
Type PriorityQueue<Type>::remove()
{
	return nullptr;
}
