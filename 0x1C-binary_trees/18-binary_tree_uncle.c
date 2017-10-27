#include "binary_trees.h"

/**
 * binary_tree_uncle - returns pointer to uncle of node, if there is one
 * @node: pointer to node in a binary tree
 * Return: pointer to uncle, or NULL if parent or grandparent is NULL or node
 *         is NULL
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;
	if (tmp->parent == NULL)
		return (NULL);

	/* parent is left child & right node (uncle) exists */
	if (tmp->parent->left == tmp && tmp->parent->right != NULL)
		return (tmp->parent->right);

	/* parent is right child & left child (uncle) exists */
	if (tmp->parent->right == tmp && tmp->parent->left != NULL)
		return (tmp->parent->left);

	/* parent exists, but does not have a sibling => no uncle */
	return (NULL);
}
