#pragma once
#include "TreeNode.hpp"
#include <vector>

template <class Type>
class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void insert(Type data);
	void remove(Type item);
	bool constains(Type item);
	int numberOfNodes() const;
	std::vector<Type> elementsInOrder() const;
	void printElementsInOrder() const;
	std::vector<Type> elementsLevelOrder() const;
	void printElementsLevelOrder(TreeNode<Type>* root) const;

private:
	TreeNode<Type>* insert(TreeNode<Type>* root, Type item);
	void printElementsInOrder(TreeNode<Type>* root) const;

	TreeNode<Type>* m_root;
};

#include "BinarySearchTree.tcc"