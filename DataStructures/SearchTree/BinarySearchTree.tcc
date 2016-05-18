#include "BinarySearchTree.hpp"
#include <iostream>

using std::vector;
using std::cout;

template <class Type>
BinarySearchTree<Type>::BinarySearchTree()
	: m_root(nullptr)
{

}

template <class Type>
BinarySearchTree<Type>::~BinarySearchTree()
{

}

template <class Type>
void BinarySearchTree<Type>::insert(Type data)
{
	insert(m_root, data);
}

template <class Type>
TreeNode<Type>* BinarySearchTree<Type>::insert(TreeNode<Type>* root, Type item)
{
	if(nullptr == root)
	{
		root =  new TreeNode<Type>(item);
	}
	else if(root->getData() > item)
	{
		root->setLeftChild(insert(root->getLeftChild(), item));
	}
	else
	{
		root->setRightChild(insert(root->getRightChild(), item));
	}

	return nullptr;
}

template <class Type>
void BinarySearchTree<Type>::printElementsInOrder() const
{
	cout << "[";
	printElementsInOrder(m_root);
	cout << "]";
}

template <class Type>
void BinarySearchTree<Type>::printElementsInOrder(TreeNode<Type>* root) const
{
	if(nullptr == root)
	{
		return;
	}

	printElementsInOrder(root->getLeftChild());
	cout << root->getData() << ", ";
	printElementsInOrder(root->getRightChild());

}

