#include "TreeNode.hpp"

template <class Type>
TreeNode<Type>::TreeNode(Type data)
	: m_left(nullptr), m_right(nullptr), m_data(data)
{

}

template <class Type>
TreeNode<Type>::TreeNode()
	: m_left(nullptr), m_right(nullptr), m_data(-1)
{
}

template <class Type>
void TreeNode<Type>::setLeftChild(TreeNode<Type>* leftChild)
{
	m_left = leftChild;
}

template <class Type>
void TreeNode<Type>::setRightChild(TreeNode<Type>* rightChild)
{
	m_right = rightChild;
}

template <class Type>
Type TreeNode<Type>::getData() const
{
	return m_data;
}

template <class Type>
TreeNode<Type>* TreeNode<Type>::getLeftChild()
{
	return m_left;
}

template <class Type>
TreeNode<Type>* TreeNode<Type>::getRightChild()
{
	return m_right;
}
