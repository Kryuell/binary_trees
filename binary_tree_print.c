#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("(%d)\n", tree->n);
    if (tree->left != NULL || tree->right != NULL)
    {
        printf("├─L─");
        binary_tree_print(tree->left);
        printf("├─R─");
        binary_tree_print(tree->right);
    }
}

