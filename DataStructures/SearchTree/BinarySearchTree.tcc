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
	m_root = insert(m_root, data);
}

template <class Type>
TreeNode<Type>* BinarySearchTree<Type>::insert(TreeNode<Type>* root, Type item)
{
	if(nullptr == root)
	{
		return new TreeNode<Type>(item);
	}
	else
	{
		if(root->getData() > item)
		{
			root->setLeftChild(insert(root->getLeftChild(), item));
		}
		else
		{
			root->setRightChild(insert(root->getRightChild(), item));
		}

		return root;
	}
}

template <class Type>
void BinarySearchTree<Type>::printElementsInOrder() const
{
	cout << "[ ";
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
	cout << root->getData() << " ";
	printElementsInOrder(root->getRightChild());

}

template <class Type>
void BinarySearchTree<Type>::printElementsLevelOrder() const
{
	cout << "[ ";
	printElementsLevelOrder(m_root);
	cout << "]";
}

template <class Type>
void BinarySearchTree<Type>::printElementsLevelOrder(TreeNode<Type>* root) const
{
	if(nullptr == root)
	{
		return;
	}

	printElementsLevelOrder(root->getLeftChild());
	printElementsLevelOrder(root->getRightChild());
	cout << root->getData() << " ";
}

template <class Type>
void BinarySearchTree<Type>::printElementsPreorder() const
{
	cout << "[ ";
	printElementsPreorder(m_root);
	cout << "]";
}

template <class Type>
void BinarySearchTree<Type>::printElementsPreorder(TreeNode<Type>* root) const
{
	if(nullptr == root)
	{
		return;
	}

	cout << root->getData() << " ";
	printElementsPreorder(root->getLeftChild());
	printElementsPreorder(root->getRightChild());
}

template <class Type>
Type BinarySearchTree<Type>::findMin() const
{
	return findMin(m_root);
}

template <class Type>
Type BinarySearchTree<Type>::findMin(TreeNode<Type>* node) const
{
	if(nullptr == node->getLeftChild())
	{
		return node->getData();
	}
	else
	{
		return findMin(node->getLeftChild());
	}
}

