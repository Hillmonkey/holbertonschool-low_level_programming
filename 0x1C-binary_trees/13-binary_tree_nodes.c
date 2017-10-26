#include "binary_trees.h"

/**
 * binary_tree_nodes - determine number of nodes with at least one child
 * @tree: root node
 * Return: number of nodes in tree as positive int
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0, has_child = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		has_child = 0;
	else if (tree->left != NULL || tree->right != NULL)
		has_child = 1;

	left_nodes = binary_tree_nodes((const binary_tree_t *)(tree->left));
	right_nodes = binary_tree_nodes((const binary_tree_t *)(tree->right));

	return (left_nodes + has_child + right_nodes);
}
