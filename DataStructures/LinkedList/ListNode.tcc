#include "ListNode.hpp"

template <class Type>
ListNode<Type>::ListNode(ListNode<Type>* head, Type item)
	: m_next(head), m_data(item)
{
}

template <class Type>
ListNode<Type>::~ListNode()
{
}

template <class Type>
Type ListNode<Type>::getData() const
{
	return m_data;
}

template <class Type>
ListNode<Type>* ListNode<Type>::getNext()
{
	return m_next;
}

template <class Type>
void ListNode<Type>::setNext(ListNode<Type>* next)
{
	m_next = next;
}

template <class Type>
void ListNode<Type>::setData(Type data)
{
	m_data = data;
}
