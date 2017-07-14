#include "bst.h"

void printBSTArray(ostream& s,
		BST array[],
		int numofElements)
{
	for (int i =0;i<numofElements;++i)
		array[i].print();
}
int main()
{
	BST array[10];
	printBSTArray(cout,array,10);
}
