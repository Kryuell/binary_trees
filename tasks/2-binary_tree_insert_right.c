/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new_node->right = parent->right; /* The old right child is now the right child of the new node */
	new_node->left = NULL;
	new_node->parent = parent;

	/* If parent already has a right child, set the new node as the parent of it */
	if (parent->right != NULL)
		parent->right->parent = new_node;

	/* Put the new node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}

