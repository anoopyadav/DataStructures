#pragma once

template <class Type>
class TreeNode
{
public:
	TreeNode(Type data);
	TreeNode();
	~TreeNode();

	void setLeftChild(TreeNode<Type>* leftChild);
	void setRightChild(TreeNode<Type>* rightChild);

	TreeNode<Type>* getLeftChild();
	TreeNode<Type>* getRightChild();

	Type getData() const;

private:
	TreeNode<Type>* m_left;
	TreeNode<Type>* m_right;
	Type m_data;
};

#include "TreeNode.tcc"
