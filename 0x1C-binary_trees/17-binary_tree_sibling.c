#include "binary_trees.h"

/**
 * binary_tree_sibling - returns pointer to sibling of node, if there is one
 * @node: pointer to node in a binary tree
 * Return: pointer to sibling, or NULL if parent is NULL or node is NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* node is left child & right node exists */
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);

	/* node is right child & left child exists */
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	/* node exists, but does not have a sibling */
	return (NULL);
}
