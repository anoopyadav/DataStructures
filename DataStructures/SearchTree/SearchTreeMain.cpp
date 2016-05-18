#include "SearchTreeMain.hpp"
#include "BinarySearchTree.hpp"

int SearchTreeMain()
{
	BinarySearchTree<int> tree;

	tree.insert(4);
	tree.insert(2);
	tree.insert(1);
	tree.insert(3);
	tree.insert(5);

	tree.printElementsInOrder();

	return 0;
}
