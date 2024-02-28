#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 0 if the tree is not perfect, or the height of the tree if perfect.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree->left && tree->right)
	{
		left_height = 1 + tree_is_perfect(tree->left);
		right_height = 1 + tree_is_perfect(tree->right);

		if (right_height == left_height && right_height != 0 && left_height != 0)
			return (right_height);

		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);

		if (result != 0)
			return (1);

		return (0);
	}
}

