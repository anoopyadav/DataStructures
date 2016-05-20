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

	cout << "Elements Preorder:" << std::endl;
	tree.printElementsPreorder();

	cout << std::endl << "Elements InOrder:" << std::endl;
	tree.printElementsInOrder();

	cout << std::endl << "Elements LevelOrder:" << std::endl;
	tree.printElementsLevelOrder();

	cout << std::endl << "Minimum Element:" << std::endl;
	cout << tree.findMin() << std::endl;

	return 0;
}
