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
	delete m_root;
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

template <class Type>
void BinarySearchTree<Type>::deleteElement(Type data)
{
	m_root = deleteElement(m_root, data);
}

/* Algorithm Description
 * STEP1: Check if data is less than the root, recursive delete on the left child
 * 		  Check if data is greater than the root, recursive delete on the right child
 * 		  Check if it's the root, if so
 * STEP2: If root has 1 child, then replace the root with that child
 * STEP3: If root has 2 children, Find minimum element in the right subtree
 * 		  Replace the root with the minimum, then recursive delete on the right subtree
 */
template <class Type>
TreeNode<Type>* BinarySearchTree<Type>::deleteElement(TreeNode<Type>* root, Type data)
{
	if(nullptr == root)
	{
		return root;
	}
	else if(data < root->getData())
	{
		root->setLeftChild(deleteElement(root->getLeftChild(), data));
	}
	else if(data > root->getData())
	{
		root->setRightChild(deleteElement(root->getRightChild(), data));
	}
	else
	{
		if(nullptr == root->getLeftChild() && nullptr == root->getRightChild())
		{
			delete root;
			root = nullptr;
		}
		else if(nullptr == root->getLeftChild())
		{
			TreeNode<Type>* nodeToBeDeleted = root;
			root = root->getRightChild();
			delete nodeToBeDeleted;
		}
		else if(nullptr == root->getRightChild())
		{
			TreeNode<Type>* nodeToBeDeleted = root;
			root = root->getLeftChild();
			delete nodeToBeDeleted;
		}
		else
		{
			Type minimum = findMin(root->getRightChild());
			root->setData(minimum);
			root->setRightChild(deleteElement(root->getRightChild(), minimum));
		}
	}
	return root;
}
