#include "binary_trees.h"

/**
 * binary_tree_leaves - determine number of nodes in tree, including root
 * @tree: root node
 * Return: number of nodes in tree as positive int
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves((const binary_tree_t *)(tree->left));
	right_leaves = binary_tree_leaves((const binary_tree_t *)(tree->right));

	return (left_leaves + right_leaves);
}
