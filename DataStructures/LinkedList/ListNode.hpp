#pragma once

template <class Type>
class ListNode
{
public:
	ListNode(ListNode<Type>* head, Type item);
	~ListNode();

	Type getData() const;
	ListNode<Type>* getNext();

	void setNext(ListNode<Type>* next);
	void setData(Type data);

private:
	ListNode<Type>* m_next;
	Type m_data;
};

#include "ListNode.tcc"
