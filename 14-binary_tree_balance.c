#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree
*/
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + binary_tree_height_2(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height_2(tree->right) : 0;

	return ((l > r) ? l : r);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: balance factor or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;

	int right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (left_height - right_height);
}
