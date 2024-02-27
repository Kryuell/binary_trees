#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
* @parent: Pointer to the node to insert the left-child in
* @value: The value to store in the new node
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	/* Put the new node as the left child of the parent */
	parent->left = new_node;

	return (new_node);
}

