#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (tree == NULL)
		return;

	/* Recursively delete left subtree */
	binary_tree_delete(tree->left);
	/* Recursively delete right subtree */
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}

