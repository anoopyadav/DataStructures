#include "LinkedList.hpp"
#include <sstream>

using std::string;
using std::ostringstream;

template <class Type>
LinkedList<Type>::LinkedList()
	: m_head(nullptr), m_size(0)
{
}

template <class Type>
LinkedList<Type>::~LinkedList()
{
}

template <class Type>
int LinkedList<Type>::getSize() const
{
	return m_size;
}

template <class Type>
bool LinkedList<Type>::isEmpty() const
{
	return (m_head == nullptr);
}

template <class Type>
void LinkedList<Type>::insertInFront(Type item)
{
	ListNode<Type>* node = new ListNode<Type>(m_head, item);
	m_head = node;

	m_size++;
}

template <class Type>
void LinkedList<Type>::removeFirst()
{
	LinkedList<Type>* node = m_head;
	m_head = m_head->getNext();
	delete node;
}

template <class Type>
ListNode<Type>* LinkedList<Type>::getFirst()
{
	return m_head;
}

template <class Type>
void LinkedList<Type>::reverse()
{
	
}

template <class Type>
string LinkedList<Type>::toString() const
{
	ostringstream listString;
	listString << "[";

	ListNode<Type>* iter = m_head;
	while(nullptr != iter)
	{
		listString << iter->getData();

		if(nullptr != iter->getNext())
		{
			listString << ",";
		}
		iter=iter->getNext();
	}
	listString << "]";

	return listString.str();
}
