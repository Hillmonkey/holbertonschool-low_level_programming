#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns 1 if node is leaf, otherwise 0
 * @node: node in a binary tree
 * Return: int - 1 for is leaf, 0 for is NOT a leaf, if NODE is NULL, also
 *               return 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
