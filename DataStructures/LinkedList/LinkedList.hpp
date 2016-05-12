#pragma once
#include <string>
#include "ListNode.hpp"

template <class Type>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	bool isEmpty() const;
	int getSize() const;
	void insertInFront(Type item);
	ListNode<Type>* getFirst();
	void removeFirst();
	void reverse();
	std::string toString() const;

private:
	ListNode<Type>* m_head;
	int m_size;
};

#include "LinkedList.tcc"
