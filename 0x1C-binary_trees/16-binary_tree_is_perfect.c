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

/**
 * binary_tree_is_perfect - determine if tree is full, recursively
 * @tree: root node of binary tree
 * Return: 1 if full 0 if not full or empty tree
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, height, perfect_size = 1;

	height = (int)binary_tree_height(tree);

	/* calculate what perfect size should be for tree of this height */
	/* 2(2^n) -1 should be equal to # of leaves if tree is perfect */
	if (height == 0)
		perfect_size = 1;
	else
	{
		for (i = 0; i < height; i++)
			perfect_size *= 2;
		perfect_size = (perfect_size * 2) - 1;
	}

	/* if perfect size = actual size, the  binary tree is perfect */
	if (perfect_size == (int)binary_tree_size(tree))
		return (1);  /* binary tree IS perfect */
	else
		return (0);  /* binary tress IS NOT perfect */
}
