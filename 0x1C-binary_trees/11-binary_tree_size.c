#include "binary_trees.h"

/**
 * binary_tree_size - determine number of nodes in tree, including root
 * @tree: root node
 * Return: number of nodes in tree as positive int
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binary_tree_size((const binary_tree_t *)(tree->left));
	right_size = binary_tree_size((const binary_tree_t *)(tree->right));

	return (left_size + 1 + right_size);
}
