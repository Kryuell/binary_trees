#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes in a binary tree with atleast one child
* @tree: Pointer to the root node of the tree.
*
* Return: Number of nodes in the tree with at least one child.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) +
			(tree->left || tree->right));
}
