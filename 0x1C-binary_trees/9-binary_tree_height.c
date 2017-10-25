#include "binary_trees.h"

/**
 * binary_tree_height - return height of binary tree
 * @tree: root of binary tree
 * Return: height of tree
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* compute the depth of each subtree */
	left_height  = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* use the larger one */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
