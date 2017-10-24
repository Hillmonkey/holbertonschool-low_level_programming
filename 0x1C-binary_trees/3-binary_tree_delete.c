#include "binary_trees.h"

/**
 * binary_tree_delete - delete whole binary tree using tree as root, by calling
 *    recursive function
 * @tree: root node of binary tree
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	printf("free: %d\n", tree->n);
	free(tree);
}
