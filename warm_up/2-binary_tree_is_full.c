#include "binary_trees.h"

/**
 * binary_tree_is_full - accepts a tree and determines if it is full
 * @tree: pointer to root node of binary tree
 * Return: 1 if TRUE, 0 if FALSE
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (!tree)
		return (0);
	if ((tree->right == NULL) && (tree->left == NULL))
		return (1);
	if ((tree->right == NULL) && (tree->left != NULL))
		return (0);
	if ((tree->right != NULL) && (tree->left == NULL))
		return (0);

	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (left_full && right_full)
		return (1);
	else
		return (0);
}
