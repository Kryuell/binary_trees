#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: Pointer to the root node of the tree.
*
* Return: 1 if the tree is full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* If the current node has no children, it's a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		int left_is_full = binary_tree_is_full(tree->left);

		int right_is_full = binary_tree_is_full(tree->right);

		return (left_is_full && right_is_full);
	}

	/* If the current node has only one child, it's not a full tree */
	return (0);
}
