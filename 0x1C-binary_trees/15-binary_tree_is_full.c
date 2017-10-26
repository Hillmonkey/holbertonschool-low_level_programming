#include "binary_trees.h"

/**
 * binary_tree_is_full - determine if tree is full, recursively
 * @tree: root node of binary tree
 * Return: 1 if full 0 if not full or empty tree
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	/* only one child implies binary tree not full */
	if ((!(tree->left) && tree->right) || (!(tree->right) && tree->left))
		return (0);
	/* both children = NULL implies this little tree is full */
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (left_full && right_full)
		return (1);  /* tree is full */
	else
		return (0);  /* tree is not full */
}
